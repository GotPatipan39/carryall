# 🚛 โครงการ CarryAll AGV (Hand Lift Conversion)

โครงการนี้คือการดัดแปลง **รถแฮนด์ลิฟต์ไฟฟ้า (Electric Hand Lift)** ให้เป็นหุ่นยนต์ AGV อัตโนมัติ โดยใช้ **MiniPC (ROS 2 Jazzy)** เป็นสมองส่วนกลาง และติดต่อกับ **PLC Mitsubishi FX5U** เพื่อสั่งงานมอเตอร์และอ่านค่าเซนเซอร์

---

## 🏗️ โครงสร้างระบบ (System Architecture)

ระบบประกอบด้วย 2 ส่วนหลัก:
1. **MiniPC (ROS 2)**: รับผิดชอบด้านการประมวลผลทางปัญญา (Perception, Planning, Localization)
2. **PLC (FX5U)**: รับผิดชอบด้านการควบคุมฮาร์ดแวร์โดยตรง (Motor Drive, Encoder Reading, Safety IO)

*ทั้งสองฝั่งเชื่อมต่อกันผ่านสาย LAN ด้วยโปรโตคอล **Modbus TCP***

---

## 📂 อธิบายหน้าที่ของแต่ละไฟล์ (File Guide)

### 1. `carryall_controller` (หัวใจการควบคุมฮาร์ดแวร์)
แพ็กเกจนี้ทำหน้าที่เป็นตัวกลาง (Bridge) ระหว่าง ROS 2 และ PLC
* `modbus_handler.py`: **(Core Utility)** ตัวจัดการการส่ง/รับข้อมูล Modbus TCP ไม่ต้องแก้ไขบ่อยๆ
* `plc_bridge_node.py`: **(Logic)** รับคำสั่ง `cmd_vel` (ความเร็วหุ่นยนต์) มาคำนวณเป็น "ความเร็วล้อ" และ "มุมเลี้ยว" แล้วส่งให้ PLC
* `odom_publisher.py`: **(Logic)** อ่านค่า Encoder (32-bit) และ Potentiometer (มุมเลี้ยว) จาก PLC มาคำนวณว่า "หุ่นยนต์อยู่ที่ไหนบนแผนที่"
* `config/plc_params.yaml`: **(Settings)** ไฟล์เก็บค่าตัวแปรทั้งหมด เช่น IP ของ PLC, เลข Register, ขนาดล้อ, ระยะฐานล้อ **(แก้ไขที่นี่ที่เดียวถ้าอุปกรณ์เปลี่ยน)**
* `launch/controller.launch.py`: สำหรับสั่งรัน Node ทั้งหมดในแพ็กเกจนี้พร้อมกัน

### 2. `carryall_description` (โมเดลหุ่นยนต์)
* ใช้สำหรับแสดงผลหุ่นยนต์ในโปรแกรมคอมพิวเตอร์ (RViz) และใช้ในการจำลอง (Simulation)
* บรรจุไฟล์ URDF/Xacro ที่กำหนดขนาดและรูปร่างของ Hand Lift

### 3. `carryall_bringup` (ตัวเริ่มระบบ)
* ใช้สำหรับรันระบบภาพรวม (รันทั้ง Controller, Model, และ Sensors อื่นๆ)

---

## ⚙️ วิธีการติดตั้ง (Quick Start)

### 1. เครื่องต้องมีอะไรบ้าง
* Ubuntu 24.04 LTS
* ROS 2 Jazzy Jalisco
* Python 3.12 (ติดมากับ Ubuntu อยู่แล้ว)
* Library: `pip install pymodbus`

### 2. การลงโปรแกรมเสริมสำหรับ Mapping
```bash
sudo apt update
sudo apt install ros-jazzy-slam-toolbox ros-jazzy-navigation2 ros-jazzy-nav2-bringup
```

### 3. การคอมไพล์โปรเจค
```bash
# พิมพ์ในโฟลเดอร์หลักของโปรเจค
colcon build --packages-select carryall_controller carryall_navigation carryall_description
source install/setup.bash
```

---

## 🗺️ ขั้นตอนการสร้างแผนที่ (Mapping Guide)

เพื่อให้หุ่นยนต์สามารถเดินได้อัตโนมัติ เราต้องสร้างแผนที่ของโกดังก่อนดังนี้:

1. **เตรียมตัวรถ**: ตรวจสอบว่าสาย LAN เชื่อมต่อกับ PLC FX5U และ LiDAR เรียบร้อยแล้ว
2. **เปิดระบบ Mapping**:
    ```bash
    ros2 launch carryall_navigation mapping.launch.py
    ```
    *คำสั่งนี้จะเปิด Controller, LiDAR Driver และโปรแกรมสร้างแผนที่ขึ้นมา*
3. **การบังคับหุ่นยนต์**:
    * ใช้จอยสติ๊ก หรือคีย์บอร์ด (Teleop) บังคับรถให้เคลื่อนที่ไป "ช้าๆ" รอบพื้นที่
    * **เน้นย้ำ**: พยายามอย่าหมุนรถเร็วเกินไปในที่แคบ เพราะจะทำให้แผนที่ "เบี้ยว" (Scan Matching Fail)
4. **การบันทึกแผนที่**:
    * เมื่อเดินจนครบพื้นที่และแผนที่ใน RViz ดูสวยงามแล้ว ให้ใช้แอป SLAM Toolbox ใน RViz เพื่อบันทึกแผนที่ (Save Map)

---

## 🛠️ วิธีการตั้งค่าหุ่นยนต์ใหม่ (Calibration)

หากคุณเปลี่ยนรถหรือเปลี่ยนตำแหน่งเซนเซอร์ ให้ไปแก้ไขที่ `src/carryall_controller/config/plc_params.yaml`

1. **Wheelbase**: วัดระยะจากล้อหน้า (ล้อขับ) ถึงแกนล้อหลัง (หน่วยเมตร)
2. **Wheel Radius**: รัศมีของล้อขับหน้า
3. **Potentiometer**: 
    * ตั้งล้อให้ตรงที่สุด -> ดูค่าดิบใน PLC -> ใส่ใน `poten_center_value`
    * วัดการตอบสนองของค่าดิบต่อองศาการเลี้ยว -> ใส่ใน `poten_scale`
4. **Encoder**: ใส่จำนวน Ticks ต่อการหมุน 1 รอบใน `encoder_ticks_per_rev`

---

## ⚠️ ระบบความปลอดภัย (Safety)

ในโค้ด `plc_bridge_node.py` มีระบบ **Watchdog** อยู่:
* หาก ROS 2 หยุดทำงาน หรือไม่มีคำสั่งเข้ามาเกิน 0.5 วินาที ระบบจะสั่งส่งค่า "ความเร็ว 0" ไปที่ PLC ทันที เพื่อป้องกันรถพุ่งชนสิ่งของ

---

## 👨‍💻 ผู้ดูแลและซัพพอร์ต

จัดทำโดย: ทีมงาน CarryAll
เทคโนโลยี: ROS 2 + Modbus TCP + Mitsubishi FX5U
