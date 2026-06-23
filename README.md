# arduino-robotics-code

## English

This repository is a collection of code I wrote with Arduino for microcontroller experiments.

The examples are grouped by module so you can quickly pick a sketch for LEDs, sound, motor/relay behavior, sensor event logic, serial command, and movement basics.

### How to use

1. Install Arduino IDE (or Arduino CLI).
2. Open one `.ino` file.
3. Select the target board and COM port.
4. Wire pins according to each sketch, then upload.
5. Use the serial monitor if the sketch has communication output.

### Detailed file catalog

#### actuators
- `actuators/input-triggered-blink.ino`  
  Reads `pin 2` and outputs a three-pulse blink pattern on an LED (`pin 3`) only while input is high. Works as an edge-triggered actuator trigger demo.
- `actuators/led-timed-sequence-a.ino`  
  Time-sequenced LED order across pins `8/9/10`: long-on, short-on, and long-on patterns. Good for delay-based stage lights.
- `actuators/led-timed-sequence-b.ino`  
  Duplicate-style delayed sequence with the same three pins, intended as a second pattern variant.
- `actuators/pwm-fade-light.ino`  
  Uses two buttons to increase/decrease PWM value and write it to an LED output, including saturation clamp (`0..255`).
- `actuators/seven-segment-shape-loop.ino`  
  Drives a seven-segment display with fixed segment patterns while a switch is active, showing different digits/shapes in a loop.
- `actuators/rgb-dual-strip-pattern-a.ino`  
  Defines two RGB outputs and alternates paired color values with `analogWrite`. Useful for learning RGB pin mapping and color timing.
- `actuators/rgb-dual-strip-pattern-b.ino`  
  Another dual RGB pattern implementation with separate helper for second strip. Intended for quickly comparing color pairs.
- `actuators/servo-gripper-baseline.ino`  
  Servo initialization and one-position write call to build a minimal servo baseline. Useful as a starting point for gripper or simple actuator scripts.

#### audio
- `audio/multi-tone-keyboard.ino`  
  Maps several input pins to different frequencies and plays short tones on one buzzer pin. Good for keypad-style tone testing.

#### locomotion
- `locomotion/tank-spin-drive.ino`  
  Differential drive with PWM output for both wheels. Useful as a tank-spin style base movement skeleton.
- `locomotion/left-right-drive-fixed.ino`  
  Static direction pin setup and one timed motor action pattern with fixed output states.
- `locomotion/direct-drive-forward.ino`  
  Direct forward H-bridge control without PWM modulation. Useful for checking basic direction wiring.
- `locomotion/line-rf-or-state-drive.ino`  
  Uses line-state and extra control pins to switch between straight and alternate states, with a servo object placeholder for extendability.
- `locomotion/sensor-dependent-drive-state.ino`  
  Reads a single digital signal and switches between two movement states, each with different left/right logic.
- `locomotion/straight-drive-forward.ino`  
  Minimal forward movement routine matching differential output configuration.

#### sensors
- `sensors/edge-trigger-led-blink.ino`  
  LED blinks when a digital edge/signal condition is met. This is an input-conditioned LED response test.
- `sensors/sound-triggered-output.ino`  
  Digital sound/input detection switches a digital output with simple debounce-free behavior.
- `sensors/input-led-buzz-alert.ino`  
  Reads one input and drives two outputs for light+buzzer-style alert. Suitable for alarm mock tests.

#### serial
- `serial/serial-echo-story.ino`  
  Serial receiver waits for `'r'`, then prints a fixed long text sequence. Useful for serial timing output demo.
- `serial/serial-read-print-ascii.ino`  
  Reads raw bytes and prints decimal values on serial output. Useful for binary/ASCII input learning.
- `serial/serial-rgb-command.ino`  
  Serial command parser for simple RGB-ish control (`r`/`g`/`b` style values) and corresponding output pin switching.

### License

This repository is released under the MIT License. See [`LICENSE`](./LICENSE).

### Author note

All code in this repository is my own.

---

## 中文

这是我编写的 Arduino 单片机代码合集，按功能模块分类，方便你快速定位实验用途。

### 使用方法

1. 安装 Arduino IDE（或 Arduino CLI）。
2. 打开任意 `.ino` 文件。
3. 选择开发板和串口。
4. 按代码中的引脚定义接线。
5. 上传后按需观察输出（如有串口可在串口监视器验证）。

### 文件详细说明

#### actuators（执行器）
- `actuators/input-triggered-blink.ino`  
  当输入脚为高时，在 LED 上输出三段闪烁，低电平时熄灭。
- `actuators/led-timed-sequence-a.ino`  
  三个引脚按固定时序循环亮灭，适合演示延时控制和顺序灯效。
- `actuators/led-timed-sequence-b.ino`  
  与 A 源码逻辑接近的第二套时序方案。
- `actuators/pwm-fade-light.ino`  
  通过两路按钮改变 PWM 亮度变量并做边界保护。
- `actuators/seven-segment-shape-loop.ino`  
  七段数码管引脚映射+图形模式轮播示例。
- `actuators/rgb-dual-strip-pattern-a.ino`  
  双路 RGB 分别封装颜色函数，按秒级时序轮换色值。
- `actuators/rgb-dual-strip-pattern-b.ino`  
  与 A 文件同类的双路 RGB 色彩演示。
- `actuators/servo-gripper-baseline.ino`  
  最小舵机初始化+写值示例，适合抓手/机械臂实验起点。

#### audio（声音）
- `audio/multi-tone-keyboard.ino`  
  多按键输出多个固定音调，适合做按键音频输入映射实验。

#### locomotion（运动）
- `locomotion/tank-spin-drive.ino`  
  H 桥输出 + PWM 的坦克式动力示例。
- `locomotion/left-right-drive-fixed.ino`  
  左右电机方向与使能引脚的固定动作演示。
- `locomotion/direct-drive-forward.ino`  
  无 PWM 的前进模式骨架。
- `locomotion/line-rf-or-state-drive.ino`  
  通过输入引脚切换两种运动状态，并保留伺服对象扩展点。
- `locomotion/sensor-dependent-drive-state.ino`  
  数字传感输入驱动的状态切换驱动模型。
- `locomotion/straight-drive-forward.ino`  
  基础直行驱动例子。

#### sensors（传感）
- `sensors/edge-trigger-led-blink.ino`  
  条件触发 LED 反馈。
- `sensors/sound-triggered-output.ino`  
  声音/输入触发输出端口控制。
- `sensors/input-led-buzz-alert.ino`  
  输入触发 LED + 蜂鸣器类联动。

#### serial（串口）
- `serial/serial-echo-story.ino`  
  接收到特定字符后按步发送固定字符串，适合串口节奏教学。
- `serial/serial-read-print-ascii.ino`  
  接收并打印 ASCII 码十进制数值。
- `serial/serial-rgb-command.ino`  
  按字符命令控制不同 IO 输出。

### 开源许可

本仓库使用 MIT 协议，详见 [`LICENSE`](./LICENSE)。

### 作者说明

本仓库全部代码由本人编写。
