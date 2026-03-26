# CarryAll AGV - Electric Hand Lift Setup Guide

This guide describes how to configure and calibrate the CarryAll AGV based on an Electric Hand Lift (Single-Wheel Drive Steering kinematics) using a Mitsubishi FX5U PLC.

## 1. Kinematics Model (Tricycle)
The Hand Lift uses a **Tricycle Model**:
- **One Front Wheel**: Both drives (Traction) and steers.
- **Two Rear Wheels**: Passive, on a fixed axis.

### Key Parameters
- **Wheelbase (L)**: Distance from the center of the front wheel to the center-line of the rear wheels.
- **Steer Angle ($\phi$)**: Angle of the front wheel relative to the robot's center line.
- **Velocity ($v$)**: Speed of the drive wheel.

## 2. PLC Configuration (FX5U)
Ensure your FX5U is configured as a **Modbus TCP Server** (Port 502) in GX Works3.

### Registry Mapping (PLC D-Registers)
| Function | Modbus Address | PLC Device | Data Type | Notes |
| :--- | :--- | :--- | :--- | :--- |
| **Linear Velocity Command** | 100 | D100 | INT16 | Scaled (v * 1000) |
| **Steer Angle Command** | 102 | D102 | INT16 | Degrees * 100 (e.g. 4500 = 45°) |
| **Drive Wheel Encoder** | 200 | D200, D201 | INT32 | Raw Ticks (Little Endian) |
| **Steer Potentiometer** | 204 | D204 | UINT16 | Raw ADC Value (12-bit/14-bit) |

## 3. Configuration & Calibration

All settings are in `src/carryall_controller/config/plc_params.yaml`.

### A. Steering Potentiometer
1. Manually align the drive wheel perfectly straight.
2. Observe the value in `D204` and enter it into `poten_center_value`.
3. Turn the wheel to a known angle (e.g., 45 degrees). Record the raw value from PLC.
4. Calculate `poten_scale` = `(angle_in_radians) / (raw_value - center_value)`.

### B. Drive Encoder
1. Measure the drive wheel diameter accurately.
2. Calculate `wheel_radius` in meters and update `wheel_radius`.
3. Verify `encoder_ticks_per_rev` from the motor/encoder datasheet.

## 4. How to Run (Quick Start)
```bash
# 1. Build the workspace
colcon build --packages-select carryall_controller
source install/setup.bash

# 2. Launch with the configuration file
ros2 launch carryall_controller controller.launch.py
```

## 5. Troubleshooting
- **Connection Error**: Check if the PLC is on the same network subnet as the MiniPC.
- **Inverted Steering**: If the robot steers in the opposite direction, negate the `poten_scale` value in `plc_params.yaml`.
- **Inverted Drive**: If the robot moves backward when sent forward command, negate the `velocity_scale` value.

---
**Created by Antigravity AI for CarryAll Team**
