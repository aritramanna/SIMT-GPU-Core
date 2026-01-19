#!/bin/bash
set -e
BUILD_DIR="/tmp/gpu_verify_specific"
RTL_SRC_DIR="$(pwd)/../RTL"
TB_FILE="$1"
TEST_NAME=$(basename "$TB_FILE" .sv)

if [ -z "$1" ]; then
    echo "Usage: ./verify_specific.sh <path_to_test_sv>"
    exit 1
fi

rm -rf "$BUILD_DIR"
mkdir -p "$BUILD_DIR/RTL"
cp -r "$RTL_SRC_DIR/"* "$BUILD_DIR/RTL/"
cp -r "$RTL_SRC_DIR/Compute/SFU_Tables" "$BUILD_DIR/"
cp "$TB_FILE" "$BUILD_DIR/"

cd "$BUILD_DIR"
verilator --binary -j 8 -Wno-fatal --timing -I. -IRTL -IRTL/Core -IRTL/Compute -IRTL/Memory -IRTL/Compute/Arithmetic \
    RTL/Core/simt_pkg.sv RTL/Compute/sfu_pkg.sv RTL/Compute/ALU.sv RTL/Compute/sfu_single_cycle.sv \
    RTL/Memory/fifo.sv RTL/Compute/int_alu.sv RTL/Memory/operand_collector.sv RTL/Memory/mock_memory.sv RTL/Core/streaming_multiprocessor.sv \
    "$TEST_NAME.sv" --top-module "$TEST_NAME" -o Vtest

./obj_dir/Vtest
