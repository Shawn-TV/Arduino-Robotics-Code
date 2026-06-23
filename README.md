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

### Detailed catalog (English then Chinese per file)

#### actuators
- `actuators/input-triggered-blink.ino` — EN: Reads an input on pin 2. While the input is HIGH, pin 3 outputs a repeated blink cycle (HIGH/LOW with 1s pauses). CN: 读取2号输入脚；当高电平时，3号脚输出高低重复闪烁（每次停顿约1秒），低电平时熄灭。
- `actuators/led-timed-sequence-a.ino` — EN: Performs a fixed LED timing pattern on pins 10→9→8 (`HIGH` then `LOW`) with 10s, 5s, and 10s dwell intervals. CN: 在10、9、8号脚上按固定顺序执行高低电平时序，停留时长为10秒、5秒、10秒。
- `actuators/led-timed-sequence-b.ino` — EN: Similar to sequence-a: another variation of the same three-pin fixed delay LED cycle. CN: 与A类程序同类，提供第二版固定时序点灯逻辑。
- `actuators/pwm-fade-light.ino` — EN: Uses two buttons on pins 2 and 3 to increase/decrease a PWM variable (`a`) on pin 11 in increments of 5, with bounds limited to 0–255. CN: 通过2、3号脚按键对PWM变量加减，控制11号脚亮度，并限制取值在0到255。
- `actuators/rgb-dual-strip-pattern-a.ino` — EN: Defines two RGB channels and cycles through multi-color combinations on two sets of outputs using analog write. CN: 定义双路RGB输出引脚，循环设置多个颜色组合并输出。
- `actuators/rgb-dual-strip-pattern-b.ino` — EN: Same dual-RGB concept as `-a`, with helper functions for `color()` and `color1()` color updates. CN: 与A文件同类，使用两个颜色函数分别驱动两组RGB灯条。
- `actuators/servo-fixed-angle.ino` — EN: Attaches a servo on pin 9 and continuously writes a fixed angle each loop (basic hold-position pattern). CN: 在9号脚挂载舵机，并持续写入固定角度（固定角度基准测试模板）。
- `actuators/servo-gripper-baseline.ino` — EN: Minimal servo setup for future gripper-style experiments, attaching servo to pin 2. CN: 最小化舵机/夹爪起步例程，先完成舵机初始化和固定动作。 
- `actuators/seven-segment-shape-loop.ino` — EN: Sets pins 2–8 as seven-segment segment controls and cycles a set of digit/shape patterns when pin 12 is LOW. CN: 将2~8号脚配置为七段码段控制引脚，检测12号输入条件后循环显示一组段码。

#### audio
- `audio/multi-tone-keyboard.ino` — EN: Maps several digital input pins (2–8) to tone frequencies and plays short buzzer tones on pin 12. CN: 用多键位输入（2到8脚）映射多个音调，在12号脚发声，做按键音示例。

#### locomotion
- `locomotion/direct-drive-forward.ino` — EN: Minimal forward-drive skeleton using left/right motor control pins with direct direction writes. CN: 直接控制左右驱动方向的最简前进底盘模板。
- `locomotion/left-right-drive-fixed.ino` — EN: Sets fixed motor outputs and sensor pins, then drives a long timed action sequence repeatedly. CN: 固定接线定义后进行长时段的电机定值运行循环。
- `locomotion/line-rf-or-state-drive.ino` — EN: Reads line/rf-related input pins and changes drive mode; includes a servo object for state-based extension. CN: 按输入状态切换行驶动作，并保留了舵机对象用于联动扩展。
- `locomotion/motor-direction-cycle.ino` — EN: Performs a simple timed direction toggling pattern by swapping high/low outputs on two motor control pins. CN: 通过两个输出口周期性切换高低电平，形成双向电机运动轮换。
- `locomotion/sensor-dependent-drive-state.ino` — EN: Changes motor directions based on a digital sensor input (`DO`), with PWM speed control on ENA/ENB. CN: 根据数字输入`DO`切换两种运动状态，同时用ENA/ENB输出PWM速度。
- `locomotion/straight-drive-forward-pwm.ino` — EN: Fixed pin-constant definitions for an H-bridge setup with PWM forward-speed control on both sides. CN: 使用左/右电机控制针脚和PWM引脚实现直行推进的PWM版本。
- `locomotion/straight-drive-forward.ino` — EN: Basic direct-forward routine for dual motor channels with fixed pin mapping and no speed modulation. CN: 双通道直驱前进底盘基线示例。
- `locomotion/tank-spin-drive.ino` — EN: Differential drive base pattern with PWM on both sides for tank-style movement. CN: 坦克底盘式差速驱动模式模板，包含速度输出。
- `locomotion/ultrasonic-obstacle-avoidance.ino` — EN: Reads ultrasonic distance (Trig/Echo), then executes obstacle-response behavior: stop/push/turn sequence when distance is below threshold. CN: 超声波测距（Trig/Echo）后进行避障动作：检测到近障碍时切换电机行为并转向。

#### sensors
- `sensors/edge-trigger-led-blink.ino` — EN: Edge-like conditional blink: when input is HIGH, pin 3 blinks with 1-second intervals. CN: 条件触发闪烁示例，当输入高电平时3号脚按1秒周期闪烁。
- `sensors/input-led-buzz-alert.ino` — EN: Reads an input and turns LED/alert outputs on/off together to form a very compact buzzer/alert indicator style signal. CN: 输入触发警报输出示例，同时驱动两类提示端口。
- `sensors/sound-triggered-output.ino` — EN: Simple sound/logic-trigger output: when digital input is HIGH, output pin 5 is driven high for a very short pulse. CN: 简单声音/输入事件触发示例，高电平时5号输出短脉冲点亮。

#### serial
- `serial/serial-api-cheatsheet.txt` — EN: Notes file listing common `Serial` APIs; useful as a quick reference while testing. CN: 串口API快速备忘清单，便于上传/调试时快速查找。
- `serial/serial-echo-story.ino` — EN: On receiving `'r'`, prints a predefined text sequence with 1-second pacing in a storytelling style. CN: 串口收到 `r` 时，以1秒节奏逐步输出一段固定字符串。
- `serial/serial-read-print-ascii.ino` — EN: Reads raw serial bytes when available and prints numeric decimal values. CN: 串口有可读字节时读取并以十进制格式输出。
- `serial/serial-rgb-command.ino` — EN: Receives ASCII command chars and sets output pins for RGB-style light signaling, with default off state in the `else` path. CN: 通过输入字符`r/g/b`控制不同输出口，未匹配时复位为全灭。

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

## 详细目录（先英文后中文）

### 执行器（actuators）
- `actuators/input-triggered-blink.ino` — EN: Reads an input on pin 2. While the input is HIGH, pin 3 outputs a repeated blink cycle (HIGH/LOW with 1s pauses), otherwise pin 3 stays LOW. CN: 读取2号输入脚。输入为高时3号脚按1秒间隔循环闪烁，低电平则熄灭。
- `actuators/led-timed-sequence-a.ino` — EN: Performs a fixed LED timing pattern on pins 10, 9, and 8 with 10s/5s/10s dwell intervals. CN: 对10、9、8脚按固定时序循环点亮与熄灭，停留时长为10秒、5秒、10秒。
- `actuators/led-timed-sequence-b.ino` — EN: Same structure as sequence-a, providing a second variant of that sequence. CN: 和A文件同样的三灯顺序示例，作为另一版时序参考。
- `actuators/pwm-fade-light.ino` — EN: Uses two digital inputs to raise/lower PWM value on pin 11 in step size 5, with clamping at 0 and 255. CN: 用2号和3号输入按步修改11号脚PWM值，范围限制在0~255。
- `actuators/rgb-dual-strip-pattern-a.ino` — EN: Dual RGB channel pattern demo with helper functions for color output. CN: 双路RGB颜色演示，通过辅助函数持续输出多组颜色。
- `actuators/rgb-dual-strip-pattern-b.ino` — EN: Same color demo logic as pattern-a with equivalent output sequence and helper function decomposition. CN: 与A文件一致的双路RGB样例，便于对照理解。
- `actuators/servo-fixed-angle.ino` — EN: Attaches one servo and repeatedly writes a fixed angle for baseline hold testing. CN: 单舵机固定角度稳定输出示例，适合作为抓取机构基线测试。
- `actuators/servo-gripper-baseline.ino` — EN: Baseline gripper/servo starter; minimal attach + fixed write behavior. CN: 最小舵机夹爪起手模板，仅保留初始化和固定动作。
- `actuators/seven-segment-shape-loop.ino` — EN: Seven-segment pin setup and shape-drawing loop controlled by switch pin 12. CN: 七段码段码引脚定义并按固定顺序循环输出不同形状。

### 声音（audio）
- `audio/multi-tone-keyboard.ino` — EN: Maps keys on input pins 2–8 to different tone frequencies on buzzer pin 12. CN: 多按键映射到多个音调，12号脚发声。

### 运动（locomotion）
- `locomotion/direct-drive-forward.ino` — EN: Direct output pin forward movement skeleton without PWM modulation. CN: 不带PWM调速的基础前进骨架。
- `locomotion/left-right-drive-fixed.ino` — EN: Sets motor and input pins then executes a fixed motion timing loop. CN: 固定引脚、固定时长输出的两路运动演示。
- `locomotion/line-rf-or-state-drive.ino` — EN: Uses line/sensor inputs and a servo placeholder to switch between two drive states. CN: 用传感器状态和舵机对象控制两种行驶状态切换。
- `locomotion/motor-direction-cycle.ino` — EN: Alternates direction and stop states in a repeated timed sequence. CN: 通过定时循环切换正反转和停顿。
- `locomotion/sensor-dependent-drive-state.ino` — EN: Sensor-based dual-state drive logic with PWM, typically for line-following/threshold demos. CN: 按DO输入在两种运动状态间切换，带PWM速度控制。
- `locomotion/straight-drive-forward-pwm.ino` — EN: PWM-based straight-forward routine with explicit left/right bridge pins. CN: 左右电机通道定义后的PWM直行模板。
- `locomotion/straight-drive-forward.ino` — EN: Basic straight forward H-bridge routine with pin mapping and continuous command. CN: 基础直行控制例程。
- `locomotion/tank-spin-drive.ino` — EN: Tank-style differential movement using PWM and direction control. CN: 坦克式底盘运动模板。
- `locomotion/ultrasonic-obstacle-avoidance.ino` — EN: Ultrasonic obstacle avoidance demo combining distance measurement and conditional motor behavior. CN: 超声波避障逻辑：低于阈值时执行避障分支，高于阈值保持前进。

### 传感器（sensors）
- `sensors/edge-trigger-led-blink.ino` — EN: Input-gated LED blink on pin 3 with fixed period timing. CN: 条件输入控制的固定周期LED闪烁。
- `sensors/input-led-buzz-alert.ino` — EN: Input-state-driven dual-output alert pattern for indicator and alarm style demos. CN: 传感输入触发两路告警输出。
- `sensors/sound-triggered-output.ino` — EN: Output pulse on sound/event input for simple acoustic trigger behavior. CN: 声音事件触发的短脉冲输出示例。

### 串口（serial）
- `serial/serial-api-cheatsheet.txt` — EN: Quick cheat sheet for common serial operations (`begin`, `end`, `available`, `read`, `print`). CN: 串口常见指令备忘，便于调试。
- `serial/serial-echo-story.ino` — EN: Plays back a fixed delayed text story after receiving the `r` command. CN: 收到 `r` 后按延时逐段输出文本。
- `serial/serial-read-print-ascii.ino` — EN: Reads serial bytes and prints ASCII/decimal values in numeric form. CN: 读取串口并打印字节十进制编码。
- `serial/serial-rgb-command.ino` — EN: Uses serial input characters to control LED channel outputs for simple interactive experiments. CN: 用字符命令控制多个输出通道，适合互动教学。

## 开源许可

本仓库采用 MIT 协议。详见 [`LICENSE`](./LICENSE)。
