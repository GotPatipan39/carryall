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

* `modbus_handler.py`: **(Core Utility)** ตัวจัดการการส่ง/รับข้อมูล Modbus TCP
* `plc_bridge_node.py`: **(Logic)** รับคำสั่ง `cmd_vel` มาคำนวณเป็น Tricycle Model และส่งให้ PLC
* `odom_publisher.py`: **(Logic)** อ่านค่า Encoder (32-bit) และ Potentiometer จาก PLC มาคำนวณตำแหน่ง
* `config/plc_params.yaml`: **(Settings)** ไฟล์เก็บค่าตัวแปรทั้งหมด เช่น IP, Registers, Wheelbase **(แก้ไขที่นี่ที่เดียวถ้าอุปกรณ์เปลี่ยน)**

### 2. `drivers` (โฟลเดอร์เก็บ Driver อุปกรณ์ภายนอก)

บรรจุ Driver ของ LiDAR ที่ดาวน์โหลดมาจากผู้ผลิต

* `hins_le_ros2`: ตัวขับเคลื่อน Hinson LiDAR LE-50821FA
* `hins_laser_interfaces`: กำหนดรูปแบบข้อมูลสำหรับ LiDAR

---

## ⚙️ วิธีการติดตั้ง (Quick Start)

### 1. การเตรียมเครื่อง (MiniPC)

* ติดตั้ง **Ubuntu 24.04 LTS Desktop**
* ติดตั้ง **ROS 2 Jazzy Jalisco**
* ติดตั้ง Library เสริม: 
  ```bash
  pip install pymodbus
  ```

### 2. การลงโปรแกรมสร้างแผนที่ (SLAM)

```bash
sudo apt update
sudo apt install ros-jazzy-slam-toolbox ros-jazzy-navigation2 ros-jazzy-nav2-bringup
```

### 3. การคอมไพล์โปรเจค (Build)

```bash
# อยู่ในโฟลเดอร์หลักของโปรเจค (carryall)
colcon build
source install/setup.bash
```

---

## 🗺️ ขั้นตอนการสร้างแผนที่ (Mapping Guide)

1. **เปิดระบบสร้างแผนที่**:
    ```bash
    ros2 launch carryall_navigation mapping.launch.py
    ```
    *คำสั่งนี้จะเปิดทั้งระบบควบคุม l, LiDAR Driver, และ SLAM Toolbox พร้อม RViz*

2. **การบังคับหุ่นยนต์**:
    * ใช้ Teleop (คีย์บอร์ด/จอย) บังคับรถให้เคลื่อนที่ "ช้าๆ" วนรอบพื้นที่โกดัง
    * ตรวจสอบใน RViz ว่าเส้นเลเซอร์เกาะผนังได้ดี ไม่กระโดดไปมา

3. **การบันทึกแผนที่**:
    * เมื่อสร้างเสร็จ ให้ไปที่แถบ **Slam Toolbox** ใน RViz แล้วกดปุ่ม **Save Map**

---

## 🛠️ การตั้งค่าระบบเครือข่ายแนะนำ (Internal Network)

เพื่อให้ทุกอุปกรณ์คุยกันได้เสถียร แนะนำให้ตั้ง IP ดังนี้:

* **MiniPC**: `192.168.1.50` (Static IP)
* **PLC FX5U**: `192.168.1.10`
* **Hinson LiDAR**: `192.168.1.88`
* *Subnet Mask: `255.255.255.0`*

---

## ⚠️ ระบบความปลอดภัย (Safety)

* **Watchdog**: มีระบบหยุดฉุกเฉินหาก ROS 2 ขัดข้องเกิน 0.5 วินาที
* **Calibration**: หากรถเลี้ยวไม่ตรง ให้ตรวจสอบค่า `poten_center_value` ใน `plc_params.yaml`

---

## 👨‍💻 ผู้ดูแลและซัพพอร์ต

จัดทำโดย: ทีมงาน CarryAll
เทคโนโลยี: ROS 2 + Modbus TCP + Mitsubishi FX5U + Hinson LiDAR
