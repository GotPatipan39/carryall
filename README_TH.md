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

## ⚙️ วิธีการติดตั้ง (Setup Guide for New Machine)

> ทดสอบบน **Ubuntu 24.04 LTS** + **ROS 2 Jazzy Jalisco**

### ขั้นที่ 1: ติดตั้ง ROS 2 Jazzy

```bash
# ตั้งค่า Locale
sudo apt update && sudo apt install locales -y
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8

# เพิ่ม ROS 2 Repository
sudo apt install software-properties-common curl -y
sudo add-apt-repository universe
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null

# ติดตั้ง ROS 2 Desktop Full
sudo apt update
sudo apt install ros-jazzy-desktop -y
```

### ขั้นที่ 2: ติดตั้งเครื่องมือ Build และ Library

```bash
# Colcon (Build Tool) และ pip
sudo apt install python3-colcon-common-extensions python3-pip -y

# Library สำหรับคุยกับ PLC (Modbus TCP)
pip install pymodbus --break-system-packages

# SLAM และ Navigation
sudo apt install ros-jazzy-slam-toolbox ros-jazzy-navigation2 ros-jazzy-nav2-bringup -y
```

### ขั้นที่ 3: ตั้งค่า Git และ SSH Key

```bash
# ตั้งค่า Git
git config --global user.name "GotPatipan39"
git config --global user.email "patipan.nae@gmail.com"

# สร้าง SSH Key (สำหรับ GitHub)
ssh-keygen -t ed25519 -C "patipan.nae@gmail.com"
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519

# แสดง Public Key เพื่อเอาไปใส่ใน GitHub → Settings → SSH Keys
cat ~/.ssh/id_ed25519.pub

# ทดสอบ
ssh -T git@github.com
```

### ขั้นที่ 4: Build โปรเจกต์

```bash
# อยู่ในโฟลเดอร์หลักของโปรเจค (carryall/)
source /opt/ros/jazzy/setup.bash
colcon build --symlink-install
source install/setup.bash
```

---

## 📡 การทดสอบ LiDAR (Hinson LE-50821FA)

### 1. ตรวจสอบการเชื่อมต่อ
```bash
ping 192.168.1.88
```

### 2. รัน Driver
```bash
source /opt/ros/jazzy/setup.bash
source install/setup.bash
ros2 launch hins_le_ros2 hins_le_launch.py
```
ถ้าเห็น `Lidar connect success` และ `SyncWrite kStartCapture done` แสดงว่า LiDAR ทำงานปกติ ✅

### 3. ดูข้อมูลที่ส่งออกมา (Terminal)
```bash
# เปิด Terminal ใหม่
source /opt/ros/jazzy/setup.bash && source install/setup.bash
ros2 topic list         # ดูว่ามี topic อะไรบ้าง
ros2 topic hz /scan     # เช็ค Frequency ของข้อมูล
```

### 4. ดูใน RViz (ต้องรันบนเครื่องโดยตรง ไม่ใช่ SSH)
```bash
ros2 run rviz2 rviz2
```
> ⚠️ **หมายเหตุ**: RViz ไม่สามารถรันผ่าน SSH แบบปกติได้ ต้องนั่งหน้าเครื่อง MiniPC หรือใช้ `ssh -X` เพื่อเปิดใช้ X11 Forwarding


## 🗺️ ขั้นตอนการสร้างแผนที่ (Mapping Guide)

### 📦 Option 1: Handheld Mapping (ยังไม่มีรถ) ← **ใช้อยู่ตอนนี้**

สร้างแผนที่โดยแบก LiDAR เดินวนรอบโกดัง โดยไม่ต้องรอตัวรถ AGV เสร็จ

```bash
# Terminal 1: รัน SLAM + LiDAR
source /opt/ros/jazzy/setup.bash && source install/setup.bash
ros2 launch carryall_navigation handheld_mapping.launch.py

# Terminal 2: เปิด RViz ดูแผนที่ (ต้องนั่งหน้าเครื่องโดยตรง)
ros2 run rviz2 rviz2
```

> 📖 **ดูคู่มือละเอียด**: [doc/handheld_mapping_guide.md](doc/handheld_mapping_guide.md)

### 🚛 Option 2: Full Robot Mapping (รถพร้อมแล้ว)

```bash
ros2 launch carryall_navigation mapping.launch.py
```

1. **การบังคับหุ่นยนต์**:
    * ใช้ Teleop (คีย์บอร์ด/จอย) บังคับรถให้เคลื่อนที่ "ช้าๆ" วนรอบพื้นที่โกดัง
    * ตรวจสอบใน RViz ว่าเส้นเลเซอร์เกาะผนังได้ดี ไม่กระโดดไปมา

2. **การบันทึกแผนที่**:
    ```bash
    ros2 run nav2_map_server map_saver_cli \
      -f src/carryall_navigation/maps/warehouse_map
    ```

---

## 🛠️ การตั้งค่าระบบเครือข่ายแนะนำ (Internal Network)

เพื่อให้ทุกอุปกรณ์คุยกันได้เสถียร แนะนำให้ตั้ง IP ดังนี้:

| อุปกรณ์ | IP Address | หมายเหตุ |
| :--- | :--- | :--- |
| **MiniPC** | `192.168.1.50` | Static IP |
| **PLC FX5U** | `192.168.1.10` | Modbus TCP Port 502 |
| **Hinson LiDAR** | `192.168.1.88` | TCP Port 8080 |

*Subnet Mask: `255.255.255.0`*

---

## 🐛 Known Issues & Fixes

* **`carryall_description` Build Error**: โฟลเดอร์ `meshes/` ถูกลบออกจาก `CMakeLists.txt` เพราะยังไม่มีไฟล์ 3D Model ของหุ่นยนต์ (ใช้ Primitive Shapes แทนในตอนนี้)
* **`carryall_msgs` Build Error**: คอมเมนต์ `rosidl_generate_interfaces()` ไว้ก่อน เพราะยังไม่มี `.msg` หรือ `.srv` ในโปรเจกต์
* **RViz ไม่ขึ้นผ่าน SSH**: ต้องรันบน Physical Display หรือใช้ `ssh -X` เท่านั้น
* **LiDAR frame_id**: ใช้ชื่อ `lidar_link` (แก้แล้วใน `hins_le_launch.py`) เพื่อให้ตรงกับ URDF

---

## ⚠️ ระบบความปลอดภัย (Safety)

* **Watchdog**: มีระบบหยุดฉุกเฉินหาก ROS 2 ขัดข้องเกิน 0.5 วินาที
* **Calibration**: หากรถเลี้ยวไม่ตรง ให้ตรวจสอบค่า `poten_center_value` ใน `plc_params.yaml`

---

## 📚 เอกสารเพิ่มเติม (Documentation)

| ไฟล์ | เนื้อหา |
|:---|:---|
| [AGV_SETUP_GUIDE.md](AGV_SETUP_GUIDE.md) | คู่มือ Calibrate PLC และ Kinematics |
| [doc/handheld_mapping_guide.md](doc/handheld_mapping_guide.md) | คู่มือสร้างแผนที่แบบ Handheld (ไม่มีรถ) |

---

## 👨‍💻 ผู้ดูแลและซัพพอร์ต

จัดทำโดย: ทีมงาน CarryAll  
เทคโนโลยี: ROS 2 Jazzy + Modbus TCP + Mitsubishi FX5U + Hinson LiDAR LE-50821FA

