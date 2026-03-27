# 🗺️ คู่มือสร้างแผนที่แบบ Handheld (ยังไม่มีตัวรถ)

> **เป้าหมาย**: สร้างแผนที่โกดังโดยใช้เฉพาะ **LiDAR** (แบกด้วยมือ) โดยไม่ต้องรอให้ตัวรถ AGV เสร็จ
> 
> **สิ่งที่ต้องมี**: MiniPC ที่ติดตั้ง ROS 2 Jazzy + LiDAR Hinson LE-50821FA เชื่อมต่อผ่าน LAN

---

## 📋 ข้อกำหนดก่อนเริ่ม (Prerequisites)

| สิ่งที่ต้องเตรียม | สถานะ | หมายเหตุ |
|:---|:---:|:---|
| LiDAR เชื่อมต่อ LAN | ✅ | IP: `192.168.1.88` |
| MiniPC ติดตั้ง ROS 2 Jazzy | ✅ | Ubuntu 24.04 |
| Build โปรเจกต์เสร็จแล้ว | ✅ | `colcon build` |
| Foxglove Bridge ติดตั้งแล้ว | ✅ | `sudo apt install ros-jazzy-foxglove-bridge -y` |
| ทดสอบ Ping: `ping 192.168.1.88` | ✅ | ต้อง 0% packet loss |

---

## 🚀 ขั้นตอนการสร้างแผนที่

### ขั้นที่ 1: รัน SLAM + LiDAR + Foxglove Bridge

```bash
# ผ่าน SSH หรือนั่งหน้าเครื่องก็ได้ครับ
cd ~/Documents/sw/carryall
source /opt/ros/jazzy/setup.bash && source install/setup.bash

ros2 launch carryall_navigation handheld_mapping.launch.py
```

✅ รอจนเห็น log เหล่านี้:
```
[hins_le_ros2_node-1] [INFO] ... Lidar connect success.
[hins_le_ros2_node-1] [INFO] ... SyncWrite kStartCapture done
[foxglove_bridge-1]   [INFO] ... Listening on port 8765
```

---

### ขั้นที่ 2: เปิดดูแผนที่ผ่าน Foxglove Studio 🦊

**บนเครื่องคุณ (ไม่ต้องนั่งหน้า MiniPC!):**

1. เปิด Browser ไปที่: **https://app.foxglove.dev**
2. กด **"Open Connection"**
3. เลือก **"Foxglove WebSocket"**
4. ใส่ URL: `ws://192.168.1.50:8765` *(IP ของ MiniPC)*
5. กด **"Open"**

**ตั้งค่า Layout ใน Foxglove:**
1. กด **"+"** เพิ่ม Panel → เลือก **"Map"** → Topic: `/map`
2. กด **"+"** เพิ่ม Panel → เลือก **"3D"** → เพิ่ม `/scan` และ `/tf`
3. กด **"+"** เพิ่ม Panel → เลือก **"Log"** ดู log ของ Node

> *(ทางเลือก)* ถ้าอยู่หน้าเครื่อง MiniPC ก็ยังใช้ RViz ได้เช่นเดิมครับ:
> ```bash
> ros2 run rviz2 rviz2
> ```

---

### ขั้นที่ 3: เดินสำรวจพื้นที่ 🚶

> ⚠️ **สำคัญมาก**: ยึด LiDAR ให้นิ่ง ห้ามเอียงหรือหมุน และเดิน**ช้าๆ** เสมอ

**เทคนิคการเดินสำรวจ:**
- เดินตามเส้นทาง **วนรอบรูปตัว U** หรือวนรอบห้อง
- รักษาระยะห่างจากผนังอย่างน้อย **0.5 เมตร**
- เดินด้วยความเร็วไม่เกิน **0.5 เมตร/วินาที** (~ก้าวช้าๆ)
- **อย่าหมุนตัวเร็ว** เพราะ Scan Matching จะ Error ได้
- พยายาม **กลับมาจุดเริ่มต้น** เพื่อให้ Loop Closure ทำงาน

**ตรวจสอบใน RViz ระหว่างเดิน:**
- เส้นสีแดง (LaserScan) ต้องเกาะผนังชัดเจน ไม่กระโดดไปมา
- แผนที่สีเทา (Map) ต้องขยายออกตามทิศทางที่คุณเดิน
- ถ้าแผนที่ "กระโดด" ให้หยุดนิ่งสักครู่แล้วเดินช้าลง

---

### ขั้นที่ 4: บันทึกแผนที่

#### วิธีที่ 1: บันทึกผ่าน Terminal (แนะนำ)
```bash
# เปิด Terminal ใหม่
source /opt/ros/jazzy/setup.bash && source install/setup.bash

ros2 run nav2_map_server map_saver_cli \
  -f ~/Documents/sw/carryall/src/carryall_navigation/maps/warehouse_map \
  --ros-args -p save_map_timeout:=5.0
```

#### วิธีที่ 2: บันทึกผ่าน RViz Panel
1. ใน RViz ให้กดที่แถบ **"SlamToolbox"** (ด้านซ้าย)
2. กรอกชื่อไฟล์ใน Map Name: `warehouse_map`
3. กดปุ่ม **"Save Map"**

แผนที่จะถูกบันทึกเป็น 2 ไฟล์:
- `warehouse_map.pgm` → รูปภาพแผนที่
- `warehouse_map.yaml` → ข้อมูล Resolution และ Origin

---

## 🏗️ โครงสร้างของ Launch File (handheld_mapping.launch.py)

```
handheld_mapping.launch.py
├── static_tf: map → odom          # จำลอง frame (ไม่มี GPS/Odom จริง)
├── static_tf: odom → base_link    # จุดกำเนิดหุ่นยนต์อยู่ที่จุดเริ่มต้น
├── static_tf: base_link → lidar_link  # ตำแหน่ง LiDAR บน Body (+0.2m หน้า, +0.3m สูง)
├── hins_le_ros2_node              # Driver LiDAR → publish /scan
└── async_slam_toolbox_node        # SLAM → subscribe /scan → publish /map
```

---

## 🐛 การแก้ปัญหาที่พบบ่อย

### แผนที่ไม่ขยาย / หยุดนิ่ง
- เดินเร็วเกินไป → ช้าลง
- หมุนตัวเร็ว → หยุดนิ่ง แล้วค่อยหันช้าๆ

### LiDAR Disconnect บ่อยๆ
- ตรวจสอบสาย LAN ระหว่าง LiDAR กับ MiniPC
- รัน `ping 192.168.1.88 -c 10` แล้วดูว่า packet loss เกิน 0% หรือเปล่า

### แผนที่บิดเบี้ยว (Distorted Map)
- เดินเร็วเกินไป
- มีการสะท้อน / กระจกในพื้นที่ → เพิ่ม `filter_level` ใน `hins_le_launch.py`

### RViz ไม่ขึ้น (ถ้า Remote SSH)
- ต้องนั่งหน้าเครื่อง MiniPC โดยตรง
- หรือใช้ `ssh -X user@<ip>` แล้วรัน rviz2 ใหม่

---

## ✅ เมื่อรถ AGV เสร็จแล้ว (อัปเกรดจาก Handheld)

เมื่อต่อ PLC เสร็จ ให้เปลี่ยนไปใช้ `mapping.launch.py` แทนครับ ซึ่งจะมี:
- Odometry จาก Encoder จริง → แผนที่แม่นยำขึ้นมาก
- ควบคุมรถได้ผ่าน Teleop
- Static TF จะถูกแทนที่ด้วย TF จาก Robot State Publisher โดยอัตโนมัติ

```bash
# คำสั่งสำหรับ Mapping แบบเต็มรูปแบบ (ใช้เมื่อรถพร้อม)
ros2 launch carryall_navigation mapping.launch.py
```

---

*จัดทำโดย: ทีมงาน CarryAll | อัปเดต: มีนาคม 2026*
