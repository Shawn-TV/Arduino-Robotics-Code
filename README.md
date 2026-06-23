# arduino-robotics-code

## English

This repository collects my Arduino microcontroller programs for teaching, training, and quick reuse.

## What’s in this repository

### Core idea

The folder is organized by module and each sketch is kept as a small standalone example. Most files target physical boards with relays/LEDs/motors/sensors and are kept minimal so they are easy to adapt.

### How to use

1. Open one `.ino` or `.txt` file.
2. Match the pin definitions in the file to your wiring.
3. Select the target board and port in Arduino IDE.
4. Upload and observe output (LED, serial monitor, servo movement, motor behavior, or buzzer tone).
5. Most files are intentionally compact and can be used as baseline templates.

### Detailed catalog (English)

#### actuators
- `actuators/input-triggered-blink.ino` — Reads an input on pin 2. While the input is HIGH, pin 3 outputs a repeated blink cycle (HIGH/LOW with 1s pauses).
- `actuators/led-timed-sequence-a.ino` — Performs a fixed LED timing pattern on pins 10→9→8 (`HIGH` then `LOW`) with 10s, 5s, and 10s dwell intervals.
- `actuators/led-timed-sequence-b.ino` — Similar to sequence-a: another variation of the same three-pin fixed delay LED cycle.
- `actuators/pwm-fade-light.ino` — Uses two buttons on pins 2 and 3 to increase/decrease a PWM variable (`a`) on pin 11 in increments of 5, with bounds limited to 0–255.
- `actuators/rgb-dual-strip-pattern-a.ino` — Defines two RGB channels and cycles through multi-color combinations on two sets of outputs using analog write.
- `actuators/rgb-dual-strip-pattern-b.ino` — Same dual-RGB concept as `-a`, with helper functions for `color()` and `color1()` color updates.
- `actuators/servo-fixed-angle.ino` — Attaches a servo on pin 9 and continuously writes a fixed angle each loop (basic hold-position pattern).
- `actuators/servo-gripper-baseline.ino` — Minimal servo setup for future gripper-style experiments, attaching servo to pin 2.
- `actuators/seven-segment-shape-loop.ino` — Sets pins 2–8 as seven-segment segment controls and cycles a set of digit/shape patterns when pin 12 is LOW.

#### audio
- `audio/multi-tone-keyboard.ino` — Maps several digital input pins (2–8) to tone frequencies and plays short buzzer tones on pin 12.

#### locomotion
- `locomotion/direct-drive-forward.ino` — Minimal forward-drive skeleton using left/right motor control pins with direct direction writes.
- `locomotion/left-right-drive-fixed.ino` — Sets fixed motor outputs and sensor pins, then drives a long timed action sequence repeatedly.
- `locomotion/line-rf-or-state-drive.ino` — Reads line/rf-related input pins and changes drive mode; includes a servo object for state-based extension.
- `locomotion/motor-direction-cycle.ino` — Performs a simple timed direction toggling pattern by swapping high/low outputs on two motor control pins.
- `locomotion/sensor-dependent-drive-state.ino` — Changes motor directions based on a digital sensor input (`DO`), with PWM speed control on ENA/ENB.
- `locomotion/straight-drive-forward-pwm.ino` — Fixed pin-constant definitions for an H-bridge setup with PWM forward-speed control on both sides.
- `locomotion/straight-drive-forward.ino` — Basic direct-forward routine for dual motor channels with fixed pin mapping and no speed modulation.
- `locomotion/tank-spin-drive.ino` — Differential drive base pattern with PWM on both sides for tank-style movement.
- `locomotion/ultrasonic-obstacle-avoidance.ino` — Reads ultrasonic distance (Trig/Echo), then executes obstacle-response behavior: stop/push/turn sequence when distance is below threshold.

#### sensors
- `sensors/edge-trigger-led-blink.ino` — Edge-like conditional blink: when input is HIGH, pin 3 blinks with 1-second intervals.
- `sensors/input-led-buzz-alert.ino` — Reads an input and turns LED/alert outputs on/off together to form a very compact buzzer/alert indicator style signal.
- `sensors/sound-triggered-output.ino` — Simple sound/logic-trigger output: when digital input is HIGH, output pin 5 is driven high for a very short pulse.

#### serial
- `serial/serial-api-cheatsheet.txt` — Notes file listing common `Serial` APIs; useful as a quick reference while testing.
- `serial/serial-echo-story.ino` — On receiving `'r'`, prints a predefined text sequence with 1-second pacing in a storytelling style.
- `serial/serial-read-print-ascii.ino` — Reads raw serial bytes when available and prints numeric decimal values.
- `serial/serial-rgb-command.ino` — Receives ASCII command chars and sets output pins for RGB-style light signaling, with default off state in the `else` path.

### Auxiliary notes

- `serial/serial-api-cheatsheet.txt` and ultrasonic `.txt` files are documentation/resources, not executable `.ino` sketches.
- Some programs in this repository come from class material and may use legacy pin names or incomplete condition blocks; they are kept for preservation and future cleanup.

## 版权与授权（License）

This repository is released under the MIT License. See [`LICENSE`](./LICENSE).

## 中文

这是我自己的 Arduino 单片机代码合集，按模块分类，方便教学演示与快速复用。

## 仓库结构说明

每个文件都是独立小示例，覆盖执行器、声音、运动、传感器、串口 5 大类。适合课程里“单点功能演示”和课程后快速复用。

## 使用方式

1. 打开一个 `.ino` 或 `.txt` 文件。
2. 按文件内注释和引脚定义完成接线。
3. 在 Arduino IDE 选择开发板和串口。
4. 上传运行并观察 LED、串口、舵机或电机行为。

## 详细目录（中文）

### 执行器（actuators）
- `actuators/input-triggered-blink.ino` — 读取2号输入脚。输入为高时3号脚按1秒间隔循环闪烁，低电平则熄灭。
- `actuators/led-timed-sequence-a.ino` — 对10、9、8脚按固定时序循环点亮与熄灭，停留时长为10秒、5秒、10秒。
- `actuators/led-timed-sequence-b.ino` — 和A文件同样的三灯顺序示例，作为另一版时序参考。
- `actuators/pwm-fade-light.ino` — 用2号和3号输入按步修改11号脚PWM值，范围限制在0~255。
- `actuators/rgb-dual-strip-pattern-a.ino` — 双路RGB颜色演示，通过辅助函数持续输出多组颜色。
- `actuators/rgb-dual-strip-pattern-b.ino` — 与A文件一致的双路RGB样例，便于对照理解。
- `actuators/servo-fixed-angle.ino` — 单舵机固定角度稳定输出示例，适合作为抓取机构基线测试。
- `actuators/servo-gripper-baseline.ino` — 最小舵机夹爪起手模板，仅保留初始化和固定动作。
- `actuators/seven-segment-shape-loop.ino` — 七段码段码引脚定义并按固定顺序循环输出不同形状。

### 声音（audio）
- `audio/multi-tone-keyboard.ino` — 多按键映射到多个音调，12号脚发声。

### 运动（locomotion）
- `locomotion/direct-drive-forward.ino` — 不带PWM调速的基础前进骨架。
- `locomotion/left-right-drive-fixed.ino` — 固定引脚、固定时长输出的两路运动演示。
- `locomotion/line-rf-or-state-drive.ino` — 用传感器状态和舵机对象控制两种行驶状态切换。
- `locomotion/motor-direction-cycle.ino` — 通过定时循环切换正反转和停顿。
- `locomotion/sensor-dependent-drive-state.ino` — 按DO输入在两种运动状态间切换，带PWM速度控制。
- `locomotion/straight-drive-forward-pwm.ino` — 左右电机通道定义后的PWM直行模板。
- `locomotion/straight-drive-forward.ino` — 基础直行控制例程。
- `locomotion/tank-spin-drive.ino` — 坦克式底盘运动模板。
- `locomotion/ultrasonic-obstacle-avoidance.ino` — 超声波避障逻辑：低于阈值时执行避障分支，高于阈值保持前进。

### 传感器（sensors）
- `sensors/edge-trigger-led-blink.ino` — 条件输入控制的固定周期LED闪烁。
- `sensors/input-led-buzz-alert.ino` — 传感输入触发两路告警输出。
- `sensors/sound-triggered-output.ino` — 声音事件触发的短脉冲输出示例。

### 串口（serial）
- `serial/serial-api-cheatsheet.txt` — 串口常见指令备忘，便于调试。
- `serial/serial-echo-story.ino` — 收到 `r` 后按延时逐段输出文本。
- `serial/serial-read-print-ascii.ino` — 读取串口并打印字节十进制编码。
- `serial/serial-rgb-command.ino` — 用字符命令控制多个输出通道，适合互动教学。

## 开源许可

本仓库采用 MIT 协议。详见 [`LICENSE`](./LICENSE)。
