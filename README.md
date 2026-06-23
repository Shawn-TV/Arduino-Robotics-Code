# Arduino Robotics Module Sketches

## English

This repository contains standalone Arduino robotics sketches for small classroom modules and quick robot experiments. The files are grouped by function: actuators, audio, locomotion, sensors, and serial communication.

Short description: Standalone Arduino robotics sketches for motors, LEDs, servos, sensors, sound, serial control, and simple drive behavior.

## What is included

- `actuators/` covers LEDs, RGB outputs, PWM brightness, servos, and seven-segment displays.
- `audio/` contains buzzer or tone examples.
- `locomotion/` contains simple two-motor drive, H-bridge, and obstacle-avoidance examples.
- `sensors/` contains input-triggered output examples.
- `serial/` contains Serial Monitor input/output examples and command-style control.

## How to use these sketches

1. Install the Arduino IDE.
2. Pick one `.ino` file. Each sketch is meant to run by itself, so open only one sketch at a time.
3. If Arduino IDE asks to place the sketch in a folder with the same name, accept that prompt.
4. Read the pin constants and `pinMode(...)` lines near the top of the file.
5. Wire your LEDs, motors, buttons, sensors, servo, or buzzer to match the pins in that sketch.
6. In Arduino IDE, choose your board from **Tools > Board** and choose the USB port from **Tools > Port**.
7. Click **Verify** first. If it compiles, click **Upload**.
8. For serial examples, open **Tools > Serial Monitor** and use `9600` baud unless the sketch says otherwise.
9. For motor sketches, test with wheels lifted first so a wiring mistake does not make the robot drive away.

## Beginner notes

- Most examples assume Arduino Uno-style digital/PWM pins.
- Motor examples usually assume an H-bridge or motor driver. Do not connect DC motors directly to Arduino pins.
- PWM examples need PWM-capable pins such as 3, 5, 6, 9, 10, or 11 on an Arduino Uno.
- If an input pin behaves randomly, add a pull-down resistor, pull-up resistor, or change the code to use `INPUT_PULLUP`.
- The `.txt` files are reference notes, not sketches to upload.

## Sketch catalog

### actuators

- `actuators/input-triggered-blink.ino`
  - Reads a digital input on pin 2. When the input is HIGH, pin 3 blinks in a repeated one-second on/off pattern.
- `actuators/led-timed-sequence-a.ino`
  - Runs a fixed three-LED timing pattern on pins 10, 9, and 8 with long delay intervals.
- `actuators/led-timed-sequence-b.ino`
  - A second copy of the same timed three-LED sequence, useful for comparing or modifying timing without touching the first version.
- `actuators/pwm-fade-light.ino`
  - Uses two buttons on pins 2 and 3 to raise or lower a PWM brightness value on pin 11.
- `actuators/rgb-dual-strip-pattern-a.ino`
  - Drives two RGB output groups through a repeated color pattern using `analogWrite(...)`.
- `actuators/rgb-dual-strip-pattern-b.ino`
  - A cleaner dual-RGB pattern version that uses named pin constants for the RGB channels.
- `actuators/servo-fixed-angle.ino`
  - Attaches a servo to pin 9 and holds it at 90 degrees.
- `actuators/servo-gripper-baseline.ino`
  - Minimal servo/gripper baseline. It attaches a servo to pin 2 and writes a 90-degree hold angle.
- `actuators/seven-segment-shape-loop.ino`
  - Controls a seven-segment display through pins 2-8 and cycles through multiple segment shapes while the switch on pin 12 is LOW.

### audio

- `audio/multi-tone-keyboard.ino`
  - Maps digital input pins 2-8 to different buzzer frequencies on pin 12, forming a simple button keyboard.

### locomotion

- `locomotion/direct-drive-forward.ino`
  - Basic two-channel motor direction example without PWM speed control.
- `locomotion/left-right-drive-fixed.ino`
  - Drives two motor outputs for a fixed timed interval.
- `locomotion/motor-direction-cycle.ino`
  - Alternates motor direction, reverse direction, and stop using timed output changes.
- `locomotion/sensor-dependent-drive-state.ino`
  - Reads a digital sensor on pin 2 and switches the drive outputs between two movement states.
- `locomotion/sensor-state-servo-drive.ino`
  - Uses a sensor state to switch drive behavior and servo attachment. This is a mixed drive/servo experiment rather than a finished robot chassis program.
- `locomotion/straight-drive-forward.ino`
  - Simple forward-drive routine with left and right motor direction pins.
- `locomotion/straight-drive-forward-pwm.ino`
  - Forward-drive routine with PWM speed pins for both motor channels.
- `locomotion/tank-spin-drive.ino`
  - Differential-drive example using left and right motor channels with PWM.
- `locomotion/ultrasonic-obstacle-avoidance.ino`
  - Measures distance with an ultrasonic sensor and runs a stop/back/turn style obstacle response when the object is too close.
- `locomotion/ultrasonic-robot-example-full.txt`
  - Reference notes for the ultrasonic robot example.
- `locomotion/ultrasonic-robot-example-notes.txt`
  - Shorter notes for ultrasonic robot setup and behavior.

### sensors

- `sensors/digital-input-led-blink.ino`
  - Reads pin 2 and blinks pin 3 while the input is HIGH.
- `sensors/input-led-buzz-alert.ino`
  - Reads an input on pin 2 and turns alert outputs on pins 12 and 13 on or off.
- `sensors/sound-triggered-output.ino`
  - Reads a digital sound/input trigger on pin 3 and sends a short pulse on pin 5.

### serial

- `serial/serial-api-cheatsheet.txt`
  - Quick notes for common Serial APIs.
- `serial/serial-read-print-ascii.ino`
  - Reads incoming serial bytes and prints their decimal ASCII values.
- `serial/serial-rgb-command.ino`
  - Reads serial commands: `r` turns on pin 9, `g` turns on pin 11, and `b` turns on pin 10.
- `serial/serial-status-message-demo.ino`
  - When the Serial Monitor sends `r`, the board prints a short status-message sequence.

## License

This repository is released under the MIT License. See [`LICENSE`](./LICENSE).

## 中文

这个仓库存放的是 Arduino 机器人小模块代码。每个 `.ino` 都是独立小实验，按功能分成执行器、声音、运动、传感器和串口通信。

短描述：Arduino 机器人模块示例，覆盖电机、LED、舵机、传感器、声音、串口控制和简单底盘行为。

## 仓库里有什么

- `actuators/`：LED、RGB、PWM 亮度、舵机、七段显示等输出模块。
- `audio/`：蜂鸣器和音调示例。
- `locomotion/`：双电机、H 桥、电机方向、超声波避障等运动示例。
- `sensors/`：由输入触发输出的传感器小例子。
- `serial/`：串口监视器输入输出和命令控制示例。

## 如何使用这些代码

1. 安装 Arduino IDE。
2. 选择一个 `.ino` 文件。每个文件都是独立程序，一次只打开一个。
3. 如果 Arduino IDE 提示要把文件放进同名文件夹，点同意。
4. 先看文件顶部的引脚常量和 `pinMode(...)`。
5. 按代码里的引脚，把 LED、电机、按键、传感器、舵机或蜂鸣器接好。
6. 在 Arduino IDE 里通过 **Tools > Board** 选择开发板，通过 **Tools > Port** 选择 USB 串口。
7. 先点 **Verify** 编译检查，通过后再点 **Upload** 上传。
8. 串口示例需要打开 **Tools > Serial Monitor**，一般使用 `9600` 波特率。
9. 电机类程序第一次测试时，建议把轮子架空，避免接线方向错导致机器人直接跑走。

## 新手注意

- 大多数例子默认是 Arduino Uno 风格的数字脚/PWM 脚。
- 电机程序通常需要 H 桥或电机驱动板，不要把直流电机直接接到 Arduino 引脚。
- PWM 示例要接支持 PWM 的引脚，例如 Uno 上的 3、5、6、9、10、11。
- 如果输入脚读数乱跳，需要加上拉/下拉电阻，或者把代码改成 `INPUT_PULLUP`。
- `.txt` 是参考笔记，不是可以上传的 Arduino 程序。

## 程序目录

### 执行器（actuators）

- `actuators/input-triggered-blink.ino`
  - 读取 2 号数字输入脚。输入为 HIGH 时，3 号脚按 1 秒亮、1 秒灭的节奏闪烁。
- `actuators/led-timed-sequence-a.ino`
  - 在 10、9、8 号脚上运行固定三灯时序，延时较长。
- `actuators/led-timed-sequence-b.ino`
  - 同一个三灯时序的第二份版本，方便对照修改时间。
- `actuators/pwm-fade-light.ino`
  - 用 2、3 号按钮控制 11 号脚 PWM 亮度增减。
- `actuators/rgb-dual-strip-pattern-a.ino`
  - 用 `analogWrite(...)` 控制两组 RGB 输出，循环显示颜色组合。
- `actuators/rgb-dual-strip-pattern-b.ino`
  - 更清晰的双 RGB 版本，使用命名引脚常量。
- `actuators/servo-fixed-angle.ino`
  - 舵机接 9 号脚，并保持在 90 度。
- `actuators/servo-gripper-baseline.ino`
  - 最小舵机/夹爪基线程序。舵机接 2 号脚，保持 90 度。
- `actuators/seven-segment-shape-loop.ino`
  - 用 2-8 号脚控制七段显示，在 12 号开关为 LOW 时循环不同段码形状。

### 声音（audio）

- `audio/multi-tone-keyboard.ino`
  - 把 2-8 号输入脚映射成不同音高，通过 12 号脚发声，做成简单按键键盘。

### 运动（locomotion）

- `locomotion/direct-drive-forward.ino`
  - 不带 PWM 调速的双路电机方向控制示例。
- `locomotion/left-right-drive-fixed.ino`
  - 左右两路电机按固定时间运行。
- `locomotion/motor-direction-cycle.ino`
  - 按时间在正转、反转、停止之间循环切换。
- `locomotion/sensor-dependent-drive-state.ino`
  - 读取 2 号传感输入，根据状态切换两种电机输出。
- `locomotion/sensor-state-servo-drive.ino`
  - 根据传感器状态切换电机行为和舵机连接，是一个混合驱动/舵机实验。
- `locomotion/straight-drive-forward.ino`
  - 左右电机方向脚的基础直行程序。
- `locomotion/straight-drive-forward-pwm.ino`
  - 带左右 PWM 调速脚的直行程序。
- `locomotion/tank-spin-drive.ino`
  - 使用左右电机通道和 PWM 的差速/坦克式运动示例。
- `locomotion/ultrasonic-obstacle-avoidance.ino`
  - 用超声波测距，距离太近时执行停止、后退、转向式避障动作。
- `locomotion/ultrasonic-robot-example-full.txt`
  - 超声波机器人示例的完整参考笔记。
- `locomotion/ultrasonic-robot-example-notes.txt`
  - 超声波机器人设置和行为的简短笔记。

### 传感器（sensors）

- `sensors/digital-input-led-blink.ino`
  - 读取 2 号脚，输入为 HIGH 时让 3 号脚闪烁。
- `sensors/input-led-buzz-alert.ino`
  - 读取 2 号输入，用 12、13 号输出做提示/告警。
- `sensors/sound-triggered-output.ino`
  - 读取 3 号声音/数字触发输入，在 5 号脚输出一个短脉冲。

### 串口（serial）

- `serial/serial-api-cheatsheet.txt`
  - 常见 Serial API 速查笔记。
- `serial/serial-read-print-ascii.ino`
  - 读取串口字节并打印十进制 ASCII 数值。
- `serial/serial-rgb-command.ino`
  - 读取串口命令：`r` 点亮 9 号脚，`g` 点亮 11 号脚，`b` 点亮 10 号脚。
- `serial/serial-status-message-demo.ino`
  - 串口监视器发送 `r` 后，开发板输出一组简短状态消息。

## 开源许可

本仓库使用 MIT 协议，详见 [`LICENSE`](./LICENSE)。
