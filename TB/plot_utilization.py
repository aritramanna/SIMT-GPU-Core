import csv
import sys
import os

def read_data(filename):
    cycles = []
    alu = []
    sfu = []
    lsu = []
    active = []
    
    if not os.path.exists(filename):
        print(f"File not found: {filename}")
        return None, None, None, None, None

    with open(filename, 'r') as f:
        reader = csv.DictReader(f)
        for row in reader:
            try:
                cycles.append(int(row['Cycle']))
                alu.append(int(row['ALU_Active']))
                sfu.append(int(row['SFU_Active']))
                lsu.append(int(row['LSU_Active']))
                active.append(int(row['Active_Warps']))
            except ValueError:
                continue 
    return cycles, alu, sfu, lsu, active

def moving_average(data, window_size):
    if not data: return []
    res = []
    current_sum = 0
    # Initial fill
    for i in range(len(data)):
        val = data[i]
        element_to_remove = data[i - window_size] if i >= window_size else 0
        current_sum += val - element_to_remove
        
        count = min(i + 1, window_size)
        res.append(current_sum / count)
    return res

class SVGPlotter:
    def __init__(self, width=800, height=600):
        self.width = width
        self.height = height
        self.padding = 60
        self.content = []
        self.header = f'<svg xmlns="http://www.w3.org/2000/svg" width="{width}" height="{height}" style="background-color: white; font-family: sans-serif;">'
        self.footer = '</svg>'
        
    def add_rect(self, x, y, w, h, fill="none", stroke="none"):
        self.content.append(f'<rect x="{x}" y="{y}" width="{w}" height="{h}" fill="{fill}" stroke="{stroke}" />')
        
    def add_text(self, x, y, text, size=12, color="black", anchor="start"):
        self.content.append(f'<text x="{x}" y="{y}" font-size="{size}" fill="{color}" text-anchor="{anchor}">{text}</text>')
        
    def add_polyline(self, points, color="black", width=1):
        pts = " ".join([f"{x},{y}" for x, y in points])
        self.content.append(f'<polyline points="{pts}" fill="none" stroke="{color}" stroke-width="{width}" />')

    def add_line(self, x1, y1, x2, y2, stroke="black", width=1):
        self.content.append(f'<line x1="{x1}" y1="{y1}" x2="{x2}" y2="{y2}" stroke="{stroke}" stroke-width="{width}" />')

    def add_text(self, x, y, text, size=12, color="black", anchor="start", weight="normal"):
        self.content.append(f'<text x="{x}" y="{y}" font-size="{size}" fill="{color}" text-anchor="{anchor}" font-weight="{weight}">{text}</text>')

    def add_legend(self, x, y, items):
        self.add_rect(x-10, y-10, 110, len(items)*20 + 10, fill="white", stroke="black")
        for i, (label, color) in enumerate(items):
            ly = y + i*20
            self.add_line(x, ly+5, x+20, ly+5, stroke=color, width=2)
            self.add_text(x+30, ly+9, label, size=10)
        
    def plot_combined(self, data1, data2, title, filename, max_points=500):
        # Calculate stats first
        def get_avg_p(arr): return (sum(arr) / len(arr)) * 100 if arr else 0
        
        avg_act1 = sum(data1[5]) / len(data1[5]) if data1[5] else 0
        avg_a1 = get_avg_p(data1[2])
        avg_s1 = get_avg_p(data1[3])
        avg_l1 = get_avg_p(data1[4])
        
        avg_act2 = sum(data2[5]) / len(data2[5]) if data2[5] else 0
        avg_a2 = get_avg_p(data2[2])
        avg_s2 = get_avg_p(data2[3])
        avg_l2 = get_avg_p(data2[4])

        # Layout: Two separate plots vertically
        # Top Plot: Multi-Warp
        # Bottom Plot: Parallel
        
        plot_h_single = (self.height - 3 * self.padding - 60) / 2 # Split height
        plot_w = self.width - 2 * self.padding
        x_start = self.padding
        
        # --- Plot 1: Multi-Warp ---
        y_start1 = self.padding + 40
        y_end1 = y_start1 + plot_h_single
        
        total_cyc1 = len(data1[1])
        self.add_text(x_start + plot_w/2, y_start1 - 20, f"{data1[0]} Utilization (Avg Warps: {avg_act1:.1f}, Steps: {total_cyc1})", anchor="middle", size=14, weight="bold")
        
        # Grid & Axis 1
        self.add_line(x_start, y_end1, x_start + plot_w, y_end1, stroke="black")
        self.add_line(x_start, y_start1, x_start, y_end1, stroke="black")
        for i in range(11):
            y = y_end1 - (i/10.0) * plot_h_single
            self.add_line(x_start, y, x_start + plot_w, y, stroke="#ccc" if i > 0 else "black", width=1)
            self.add_text(x_start - 5, y + 4, f"{i/10.0:.1f}", anchor="end", size=10)

        # Plot Data 1
        d1_cycles = data1[1]
        step1 = max(1, len(d1_cycles) // max_points)
        def scale_x1(i): return x_start + (i/len(d1_cycles)) * plot_w
        def scale_y1(v): return y_end1 - (v * plot_h_single)
        
        alu_pts1 = [(scale_x1(i), scale_y1(data1[2][i])) for i in range(0, len(d1_cycles), step1)]
        sfu_pts1 = [(scale_x1(i), scale_y1(data1[3][i])) for i in range(0, len(d1_cycles), step1)]
        lsu_pts1 = [(scale_x1(i), scale_y1(data1[4][i])) for i in range(0, len(d1_cycles), step1)]
        
        self.add_polyline(alu_pts1, "blue")
        self.add_polyline(sfu_pts1, "green")
        self.add_polyline(lsu_pts1, "red")
        
        # Stats Legend 1 (Inset)
        lx = x_start + plot_w - 200
        ly = y_start1 + 10
        self.add_rect(lx, ly, 190, 80, fill="white", stroke="black")
        self.add_text(lx+10, ly+20, f"ALU: {avg_a1:.1f}%", size=11, color="blue")
        self.add_text(lx+10, ly+40, f"SFU: {avg_s1:.1f}%", size=11, color="green")
        self.add_text(lx+10, ly+60, f"LSU: {avg_l1:.1f}%", size=11, color="red")

        # --- Plot 2: Parallel ---
        y_start2 = y_end1 + 60
        y_end2 = y_start2 + plot_h_single
        
        total_cyc2 = len(data2[1])
        self.add_text(x_start + plot_w/2, y_start2 - 20, f"{data2[0]} Utilization (Avg Warps: {avg_act2:.1f}, Steps: {total_cyc2})", anchor="middle", size=14, weight="bold")
        
        # Grid & Axis 2
        self.add_line(x_start, y_end2, x_start + plot_w, y_end2, stroke="black")
        self.add_line(x_start, y_start2, x_start, y_end2, stroke="black")
        for i in range(11):
            y = y_end2 - (i/10.0) * plot_h_single
            self.add_line(x_start, y, x_start + plot_w, y, stroke="#ccc" if i > 0 else "black", width=1)
            self.add_text(x_start - 5, y + 4, f"{i/10.0:.1f}", anchor="end", size=10)

        # Plot Data 2
        d2_cycles = data2[1]
        step2 = max(1, len(d2_cycles) // max_points)
        def scale_x2(i): return x_start + (i/len(d2_cycles)) * plot_w
        def scale_y2(v): return y_end2 - (v * plot_h_single)
        
        alu_pts2 = [(scale_x2(i), scale_y2(data2[2][i])) for i in range(0, len(d2_cycles), step2)]
        sfu_pts2 = [(scale_x2(i), scale_y2(data2[3][i])) for i in range(0, len(d2_cycles), step2)]
        lsu_pts2 = [(scale_x2(i), scale_y2(data2[4][i])) for i in range(0, len(d2_cycles), step2)]
        
        self.add_polyline(alu_pts2, "blue") # Same colors, separate graph
        self.add_polyline(sfu_pts2, "green")
        self.add_polyline(lsu_pts2, "red")

        # Stats Legend 2 (Inset)
        ly2 = y_start2 + 10
        self.add_rect(lx, ly2, 190, 80, fill="white", stroke="black")
        self.add_text(lx+10, ly2+20, f"ALU: {avg_a2:.1f}%", size=11, color="blue")
        self.add_text(lx+10, ly2+40, f"SFU: {avg_s2:.1f}%", size=11, color="green")
        self.add_text(lx+10, ly2+60, f"LSU: {avg_l2:.1f}%", size=11, color="red")
        
        # Main Title
        self.add_text(self.width/2, 30, title, anchor="middle", size=20, weight="bold")

        # Write file
        with open(filename, 'w') as f:
            f.write(self.header)
            f.write("".join(self.content))
            f.write(self.footer)
        print(f"Generated Combined SVG: {filename}")

if __name__ == "__main__":
    plotter = SVGPlotter(1200, 700)
    
    # Plot 1
    c1, a1, s1, l1, act1 = read_data('multi_warp_utilization.csv')
    if c1:
        # Improved smoothing logic
        target_points = 1000 # Intermediate resolution
        step = max(1, len(c1) // target_points)
        # Intermediate smoothing: preserves wiggles but not raw noise
        window = max(1, step // 2) 
        
        a1_avg = moving_average(a1, window)
        s1_avg = moving_average(s1, window)
        l1_avg = moving_average(l1, window)
        
    # Plot 2
    c2, a2, s2, l2, act2 = read_data('parallel_warp_utilization.csv')
    if c2:
        step = max(1, len(c2) // target_points)
        window = max(1, step // 2)
        
        a2_avg = moving_average(a2, window)
        s2_avg = moving_average(s2, window)
        l2_avg = moving_average(l2, window)
        
    if c1 and c2:
        # Prepare datasets: (Label, Cycles, ALU, SFU, LSU, Active)
        d1 = ("Multi-Warp", c1, a1_avg, s1_avg, l1_avg, act1)
        d2 = ("Single-Warp", c2, a2_avg, s2_avg, l2_avg, act2)
        
        plotter.plot_combined(d1, d2, "Functional Unit Utilization Comparison (60 Frames)", "combined_utilization.svg", max_points=1000)
    else:
        print("Error: Could not load both datasets.")
