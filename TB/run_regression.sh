#!/bin/bash

# Regression Test Script for SIMT Core
# - Dynamically finds tests in TB_SV/
# - Runs in /tmp to avoid space-in-path issues with Verilator
# - Copies necessary RTL and HEX files

# Configuration
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
RTL_SRC_DIR="$SCRIPT_DIR/../RTL"
TB_SV_DIR="$SCRIPT_DIR/TB_SV"
BUILD_ROOT="/tmp/gpu_regression_$$"

# Setup Build Environment
rm -rf "$BUILD_ROOT"
mkdir -p "$BUILD_ROOT/RTL"
mkdir -p "$BUILD_ROOT/tests"

echo "========================================"
echo "Preparing Regression Environment"
echo "========================================"
echo "Work dir: $BUILD_ROOT"

# 1. Copy RTL and HEX files to build root (so paths like ../RTL work if adjusted, or flat)
# Actually, let's copy RTL to a subdir to match what might be expected, 
# OR just copy everything flat if tests assume simple paths.
# The tests usually do `import simt_pkg::*;` which is fine if included in verilator cmd.
# But `sfu_single_cycle.sv` uses `$readmemh` with simple filenames.
# So HEX files MUST be in the execution directory (root of build).

# 1. Copy RTL and HEX files to build root (recursive to preserve folders)
cp -r "$RTL_SRC_DIR/"* "$BUILD_ROOT/RTL/"
cp -r "$RTL_SRC_DIR/Compute/SFU_Tables" "$BUILD_ROOT/"  # SFU tables directory in root for simulation

# 2. Get list of tests
# We find all .sv files in TB_SV
TEST_FILES=("$TB_SV_DIR"/*.sv)
echo "Found ${#TEST_FILES[@]} tests in $TB_SV_DIR"

# Flags
FLAGS="--binary -j 8 --Mdir obj_dir -I. -IRTL -IRTL/Core -IRTL/Compute -IRTL/Memory -IRTL/Compute/Arithmetic --trace --max-num-width 1024 -Wno-fatal --timing"

# Includes (Generic for all tests)
CORE_INCLUDES="RTL/Core/simt_pkg.sv RTL/Compute/sfu_pkg.sv RTL/Core/streaming_multiprocessor.sv RTL/Compute/int_alu.sv RTL/Compute/ALU.sv RTL/Compute/sfu_single_cycle.sv RTL/Memory/operand_collector.sv RTL/Memory/fifo.sv RTL/Memory/mock_memory.sv"

passed=0
failed=0
count=0

echo "========================================"
echo "Starting Regression Loop"
echo "========================================"

cd "$BUILD_ROOT"

for full_test_path in "${TEST_FILES[@]}"; do  
    test_name=$(basename "$full_test_path")
    module_name="${test_name%.sv}"
    
    ((count++))
    echo "[$count/${#TEST_FILES[@]}] Running $test_name..."

    # Copy current test to build root
    cp "$full_test_path" .

    # Clean obj_dir for fresh build
    rm -rf obj_dir

    # Compile
    # Note: We include CORE_INCLUDES plus the specific test file
    # We ignore errors for unused functions/signals if possible, or just expect clean code.
    # We redirect build output to log to keep terminal clean
    
    compile_log="compile_${module_name}.log"
    
    verilator $FLAGS --top-module "$module_name" $CORE_INCLUDES "$test_name" -o "V${module_name}" > "$compile_log" 2>&1
    
    if [ $? -ne 0 ]; then
        echo "  ✗ COMPILATION FAILED"
        echo "    See $BUILD_ROOT/$compile_log"
        tail -n 5 "$compile_log" | sed 's/^/    /'
        ((failed++))
        continue
    fi
    
    # Run
    sim_log="${module_name}.log"
    ./obj_dir/V${module_name} > "$sim_log"
    
    sim_exit_code=$?
    
    if [ $sim_exit_code -eq 0 ]; then
        # Check for explicit failure messages in the log
        if grep -q "FAIL" "$sim_log" || grep -q "Error" "$sim_log" || grep -q "ERROR" "$sim_log"; then
             echo "  ✗ FAILED (Assertion/Logic Error)"
             grep -E "FAIL|Error|ERROR" "$sim_log" | head -n 3 | sed 's/^/    /'
             ((failed++))
        else
             echo "  ✓ PASSED"
             ((passed++))
        fi
    else
        echo "  ✗ CRASHED (Exit Code: $sim_exit_code)"
        ((failed++))
    fi
done

echo "========================================"
echo "Regression Summary"
echo "========================================"
echo "Total: $count"
echo "Passed: $passed"
echo "Failed: $failed"

if [ $failed -eq 0 ]; then
    echo "ALL TESTS PASSED"
    # Cleanup on success
    # cd ..
    # rm -rf "$BUILD_ROOT"
    exit 0
else
    echo "SOME TESTS FAILED"
    exit 1
fi
