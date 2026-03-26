# CarryAll AGV - Electric Hand Lift Setup Guide

This guide describes how to configure and calibrate the CarryAll AGV based on an Electric Hand Lift (Single-Wheel Drive Steering kinematics) using a Mitsubishi FX5U PLC.

## 1. Kinematics Model
The Hand Lift uses a **Tricycle Model**:
- **One Front Wheel**: Both drives (Traction) and steers.
- **Two Rear Wheels**: Passive, on a fixed axis.

### Key Parameters
- **Wheelbase (L)**: Distance from the center of the front wheel to the center-line of the rear wheels.
- **Steering Angle ($\phi$)**: Angle of the front wheel relative to the robot's center line.
- **Velocity ($v$)**: Speed of the drive wheel.

## 2. PLC Configuration (FX5U)
Ensure your FX5U is configured as a **Modbus TCP Server** (Port 502) in GX Works3.

### Suggested Data Register (D) Mapping
| Function | Modbus Address | PLC Device | Data Type | Notes |
| :--- | :--- | :--- | :--- | :--- |
| **Linear Velocity Command** | 100 | D100 | INT16 | Scaled (v * 1000) |
| **Steering Angle Command** | 102 | D102 | INT16 | Degrees * 100 (e.g. 4500 = 45°) |
| **Drive Wheel Encoder** | 200 | D200, D201 | INT32 | Raw Ticks (Little Endian) |
| **Steering Potentiometer** | 204 | D204 | UINT16 | Raw ADC Value |

## 3. Calibration Steps

### A. Steering Potentiometer
1. Manually align the drive wheel perfectly straight.
2. Observe the value in `D204` and enter it into `poten_center_value` in `plc_params.yaml`.
3. Turn the wheel to a known angle (e.g., 45 degrees). Record the raw value.
4. Calculate `poten_scale` = `(angle_in_radians) / (raw_value - center_value)`.

### B. Drive Encoder
1. Measure the drive wheel diameter accurately.
2. Calculate `wheel_radius` in meters.
3. Verify `encoder_ticks_per_rev` from the motor/encoder datasheet.

## 4. Running the System
```bash
# Build the workspace
colcon build --packages-select carryall_controller
source install/setup.bash

# Launch the controller
ros2 run carryall_controller plc_bridge_node
ros2 run carryall_controller odom_publisher
```
