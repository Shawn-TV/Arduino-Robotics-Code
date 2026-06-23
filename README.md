# arduino-robotics-code

## English

This repository is a collection of my personal Arduino robotics programs.

The project files are grouped by hardware role so each sketch can be reused for education demos, sensor experiments, and mechanism control.

### How to use

1. Install Arduino IDE (or Arduino CLI).
2. Open one `.ino` file from a folder matching your target module.
3. Select the target board and COM port.
4. Check pin assignments in the file and connect hardware accordingly.
5. Upload and test in the same serial monitor/logic setup you normally use.

### How these files are organized

#### actuators
- `actuators/input-triggered-blink.ino`  
  Blink pattern triggered by input conditions.
- `actuators/led-timed-sequence-a.ino`  
  Timed LED sequence example A.
- `actuators/led-timed-sequence-b.ino`  
  Timed LED sequence example B.
- `actuators/pwm-fade-light.ino`  
  PWM fade light control.
- `actuators/seven-segment-shape-loop.ino`  
  Seven-segment shape animation loop.
- `actuators/rgb-dual-strip-pattern-a.ino`  
  RGB dual strip pattern routine A.
- `actuators/rgb-dual-strip-pattern-b.ino`  
  RGB dual strip pattern routine B.
- `actuators/servo-gripper-baseline.ino`  
  Basic servo gripper control baseline.

#### audio
- `audio/multi-tone-keyboard.ino`  
  Multi-tone keyboard/music demonstration.

#### locomotion
- `locomotion/tank-spin-drive.ino`  
  Tank-spin and simple rotation movement demo.
- `locomotion/left-right-drive-fixed.ino`  
  Left-right fixed-drive pattern.
- `locomotion/direct-drive-forward.ino`  
  Direct forward motion controller.
- `locomotion/line-rf-or-state-drive.ino`  
  State-oriented line/rf-or style drive flow.
- `locomotion/sensor-dependent-drive-state.ino`  
  Sensor-dependent drive state switching.
- `locomotion/straight-drive-forward.ino`  
  Stable straight-line forward movement.

#### sensors
- `sensors/edge-trigger-led-blink.ino`  
  Edge-triggered LED response for sensor events.
- `sensors/sound-triggered-output.ino`  
  Sound-trigger response demo.
- `sensors/input-led-buzz-alert.ino`  
  Input event -> LED + buzzer alert.

#### serial
- `serial/serial-echo-story.ino`  
  Serial echo communication sample.
- `serial/serial-read-print-ascii.ino`  
  Read and print ASCII data over serial.
- `serial/serial-rgb-command.ino`  
  Serial control protocol for RGB output behavior.

### License

This repository is released under the MIT License. See [`LICENSE`](./LICENSE).

### Author note

All code in this repository is my own and intended for learning, prototyping, and classroom demonstrations.

---

## 中文

本仓库是我个人整理的 Arduino 机器人代码合集，按模块分类，方便快速复用到课程演示、传感器实验和机构驱动场景。

### 使用方法

1. 安装 Arduino IDE（或 Arduino CLI）。
2. 选择对应文件夹里的 `.ino` 进入工程。
3. 选择开发板和 COM 口。
4. 按文件中的引脚定义接线。
5. 上传后在串口监视器/实验环境下验证效果。

### 文件归类与作用

#### actuators（执行器）
- `actuators/input-triggered-blink.ino`  
  输入触发的闪烁控制。
- `actuators/led-timed-sequence-a.ino`  
  定时 LED 灯序列示例 A。
- `actuators/led-timed-sequence-b.ino`  
  定时 LED 灯序列示例 B。
- `actuators/pwm-fade-light.ino`  
  PWM 呼吸/渐变灯光控制。
- `actuators/seven-segment-shape-loop.ino`  
  七段数码管图形动画循环。
- `actuators/rgb-dual-strip-pattern-a.ino`  
  RGB 双灯带效果 A。
- `actuators/rgb-dual-strip-pattern-b.ino`  
  RGB 双灯带效果 B。
- `actuators/servo-gripper-baseline.ino`  
  基础机械手抓取舵机逻辑。

#### audio（音频）
- `audio/multi-tone-keyboard.ino`  
  多音调按键/小音乐响应用例。

#### locomotion（运动）
- `locomotion/tank-spin-drive.ino`  
  坦克式旋转/自旋运动示例。
- `locomotion/left-right-drive-fixed.ino`  
  左右驱动固定比例运动示例。
- `locomotion/direct-drive-forward.ino`  
  直驱前进基本模板。
- `locomotion/line-rf-or-state-drive.ino`  
  线路/状态混合驱动流程示例。
- `locomotion/sensor-dependent-drive-state.ino`  
  传感器条件切换的驱动行为。
- `locomotion/straight-drive-forward.ino`  
  直线前进示例。

#### sensors（传感）
- `sensors/edge-trigger-led-blink.ino`  
  边沿触发 LED 反馈。
- `sensors/sound-triggered-output.ino`  
  声音触发输出示例。
- `sensors/input-led-buzz-alert.ino`  
  输入联动 LED 与蜂鸣器提示。

#### serial（串口）
- `serial/serial-echo-story.ino`  
  串口回显示例。
- `serial/serial-read-print-ascii.ino`  
  读取并输出 ASCII 字符流。
- `serial/serial-rgb-command.ino`  
  通过串口下发 RGB 控制命令。

### 开源许可

仓库使用 MIT 协议，详见 [`LICENSE`](./LICENSE)。

### 作者说明

本仓库代码均由本人编写，主要用于学习、硬件原型开发和课堂实验。
