# Arduino-Robotics-Code

[中文说明点这里](#中文)

## English

This repository collects Arduino microcontroller code I wrote for small robotics experiments. Most files are short standalone sketches, organized by module: actuators, audio, locomotion, sensors, and serial communication.

## What devices this is for

These programs are for Arduino-style microcontroller boards, especially Arduino Uno-style boards. Different files use different hardware:

- LEDs or RGB LEDs
- push buttons or digital input sensors
- servos
- buzzers
- seven-segment displays
- DC motors through a motor driver / H-bridge
- ultrasonic distance sensors
- the Arduino Serial Monitor

Do not connect DC motors directly to Arduino pins. Use a motor driver board for the motor examples.

## Quick start

1. Install Arduino IDE.
2. Open one `.ino` file. Each sketch is meant to be used by itself.
3. If Arduino IDE asks to put the file into a folder with the same name, choose yes.
4. Read the pin numbers in the sketch before wiring anything.
5. Connect the hardware to match the sketch.
6. Choose the board and port in Arduino IDE.
7. Click **Verify** first.
8. If it verifies, click **Upload**.
9. For serial examples, open Serial Monitor and use `9600` baud.
10. For motor programs, test with the wheels lifted first.

## Folder guide

- `actuators/` has LED, RGB, servo, PWM, and seven-segment examples.
- `audio/` has a buzzer tone example.
- `locomotion/` has simple motor and robot movement examples.
- `sensors/` has input-triggered output examples.
- `serial/` has Serial Monitor examples and notes.

## Programs

### `actuators/input-triggered-blink.ino`

This sketch reads a digital input on pin 2. When pin 2 is HIGH, it blinks pin 3 three times with one-second on/off delays. When pin 2 is LOW, pin 3 stays LOW.

Use this for a button-controlled LED or a simple digital sensor that triggers a visible output.

### `actuators/led-timed-sequence-a.ino`

This sketch controls three outputs on pins 10, 9, and 8. It turns on pin 10 for 10 seconds, then pin 9 for 5 seconds, then pin 8 for 10 seconds.

Use this as a very simple fixed timing sequence for LEDs or relay-style outputs.

### `actuators/pwm-fade-light.ino`

This sketch uses pin 11 as a PWM output. Pin 2 increases the brightness value by 5, and pin 3 decreases it by 5. The value is limited between 0 and 255.

Use this for LED brightness control, motor speed testing, or learning how `analogWrite()` changes an output gradually.

### `actuators/rgb-dual-strip-pattern-b.ino`

This is a similar dual-RGB pattern, but the pin names are cleaner: `R1/G1/B1` and `R2/G2/B2`.

Use this version if you want to understand or modify the RGB wiring more easily.

### `actuators/servo-fixed-angle.ino`

This sketch attaches a servo to pin 9 and keeps writing 90 degrees.

Use this to test whether a servo is connected correctly and can hold a middle position.

### `actuators/servo-gripper-baseline.ino`

This is a small servo baseline for a gripper-style mechanism. It attaches a servo to pin 2 and writes 90 degrees.

Use it as a starting point before adding open/close angles for a claw or gripper.

### `actuators/seven-segment-shape-loop.ino`

This sketch controls seven segment pins: A-G are pins 2-8. Pin 12 is used as a switch/input.

When pin 12 is LOW, the sketch quickly cycles through several segment patterns. Use this to test a seven-segment display wiring layout.

### `audio/multi-tone-keyboard.ino`

This sketch reads pins 2-8 as inputs and plays different tones on pin 12. Each input maps to a different frequency.

Use this for a simple buzzer keyboard or to test buttons with a buzzer.

### `locomotion/direct-drive-forward.ino`

This sketch sets four motor direction pins and drives both sides forward using only digital outputs. It uses pins 1, 2, 3, and 4.

Use this only with a proper motor driver. It is the simplest forward-drive example in the repo.

### `locomotion/left-right-drive-fixed.ino`

This sketch sets outputs on pins 5, 6, 10, and 11, then drives a fixed output state for 10 seconds.

Use this as a basic timed drive/output test for two motor channels.

### `locomotion/line-rf-or-state-drive.ino`

This sketch mixes drive outputs, digital sensor input, serial setup, and a servo object. It reads `Sensor3` on pin 12 and changes the motor output state depending on whether that input is HIGH or LOW.

Use it as an experiment for switching robot behavior based on a digital sensor. The servo is attached to pin 12 at setup and later re-attached to pin 6 in one branch, so check the wiring carefully before using it.

### `locomotion/motor-direction-cycle.ino`

This sketch uses pins 10 and 9 to switch direction states. It runs one direction for 2 seconds, the other direction for 2 seconds, then stops for 5 seconds.

Use this to test a motor driver direction input.

### `locomotion/sensor-dependent-drive-state.ino`

This sketch reads digital input `DO` on pin 2. When `DO` is HIGH, it sets one motor state. When `DO` is LOW, it sets another motor state. It also uses PWM speed pins `ENA` and `ENB`.

Use this for a robot that changes drive behavior based on a sensor module.

### `locomotion/straight-drive-forward.ino`

This is a basic forward-drive sketch using four direction pins: left motor pins 4 and 5, right motor pins 7 and 6.

Use it to test straight driving without PWM speed control.

### `locomotion/straight-drive-forward-pwm.ino`

This is a forward-drive sketch with PWM speed outputs. It uses direction pins 4, 5, 7, and 8, plus PWM pins 6 and 9.

Use it when your motor driver has direction pins plus enable/speed pins.

### `locomotion/tank-spin-drive.ino`

This sketch uses the same basic H-bridge style pins as the PWM forward example and drives both sides at PWM value 100.

Use it as a small tank-drive or two-motor drive test.

### `locomotion/ultrasonic-obstacle-avoidance.ino`

This sketch uses an ultrasonic sensor with Trig on pin 2 and Echo on pin 3. It measures distance in centimeters. If the distance is less than 10 cm, it runs a short obstacle response sequence. Otherwise, it drives forward.

Use this for a simple obstacle-avoidance robot with an ultrasonic sensor and a two-motor driver.

### `locomotion/ultrasonic-robot-example-full.txt`

This is a notes file for the ultrasonic robot example. It lists the pins, the distance formula, and basic safety notes.

It is not an Arduino sketch to upload.

### `sensors/edge-trigger-led-blink.ino`

This sketch reads pin 2. When pin 2 is HIGH, it blinks pin 3 once per second.

Despite the file name, it is more like a simple input-controlled blink than a true edge detector.

### `sensors/input-led-buzz-alert.ino`

This sketch reads an input on pin 2. When the input is HIGH, pin 12 turns on and pin 13 pulses briefly. When the input is LOW, both outputs stay LOW.

Use this for a basic alert output from a button, sound sensor, or other digital sensor.

### `sensors/sound-triggered-output.ino`

This sketch reads pin 3. When pin 3 is HIGH, it sends a very short HIGH pulse on pin 5.

Use this for a sound sensor or other digital trigger where you want a short output pulse.

### `serial/serial-api-cheatsheet.txt`

This is a small Serial API note file. It lists `Serial.begin`, `Serial.available`, `Serial.read`, `Serial.print`, and `Serial.println`.

It is for reference while writing or debugging serial sketches.

### `serial/serial-echo-story.ino`

This sketch starts Serial at 9600 baud. When Serial Monitor sends the character `r`, it prints three status lines with one-second delays.

Use this to test Serial input and output.

### `serial/serial-read-print-ascii.ino`

This sketch reads incoming serial bytes and prints their decimal value.

Use it to see what number Arduino receives when you type a character in Serial Monitor.

### `serial/serial-rgb-command.ino`

This sketch listens for serial commands. Sending `r` turns on pin 9, `g` turns on pin 11, and `b` turns on pin 10. Before each new command, it turns all three outputs off.

Use this for simple Serial Monitor control of LEDs or RGB channels.

## License

This repository uses the MIT License. See [`LICENSE`](./LICENSE).

## 中文

这个仓库存的是我自己写的一些 Arduino 单片机机器人小程序。大多数文件都是独立小例子，按模块分成执行器、声音、运动、传感器和串口通信。

## 这些代码给什么设备用

这些程序主要给 Arduino 风格的单片机板用，尤其是 Arduino Uno 这类板。不同文件会用到不同硬件：

- LED 或 RGB LED
- 按钮或数字传感器输入
- 舵机
- 蜂鸣器
- 七段数码管
- 通过电机驱动板 / H 桥控制的直流电机
- 超声波距离传感器
- Arduino 串口监视器

不要把直流电机直接接到 Arduino 引脚上。电机类示例需要电机驱动板。

## 快速开始

1. 安装 Arduino IDE。
2. 打开一个 `.ino` 文件。每个 sketch 基本都是单独使用的。
3. 如果 Arduino IDE 提示要放进同名文件夹，点同意。
4. 接线前先看程序里的引脚编号。
5. 按程序里的引脚接好硬件。
6. 在 Arduino IDE 里选择开发板和串口。
7. 先点 **Verify** 编译检查。
8. 通过后再点 **Upload** 上传。
9. 串口例子打开 Serial Monitor，一般用 `9600` 波特率。
10. 电机程序第一次测试时，把轮子架起来。

## 文件夹说明

- `actuators/`：LED、RGB、舵机、PWM、七段数码管。
- `audio/`：蜂鸣器音调。
- `locomotion/`：电机和机器人运动。
- `sensors/`：输入触发输出。
- `serial/`：串口监视器例子和笔记。

## 程序说明

### `actuators/input-triggered-blink.ino`

这个程序读取 2 号数字输入脚。2 号脚为 HIGH 时，3 号脚会按 1 秒亮、1 秒灭的节奏闪三次。2 号脚为 LOW 时，3 号脚保持 LOW。

可以用来做按钮控制 LED，或者数字传感器触发一个可见输出。

### `actuators/led-timed-sequence-a.ino`

这个程序控制 10、9、8 三个输出脚。它先让 10 号脚亮 10 秒，再让 9 号脚亮 5 秒，再让 8 号脚亮 10 秒。

适合做固定时间的三灯顺序演示，也可以改成继电器/输出模块的时序测试。

### `actuators/pwm-fade-light.ino`

这个程序用 11 号脚做 PWM 输出。2 号脚让亮度值每次加 5，3 号脚让亮度值每次减 5。数值限制在 0 到 255。

可以用来练习 LED 调光、电机速度测试，或者理解 `analogWrite()`。

### `actuators/rgb-dual-strip-pattern-b.ino`

这个程序和 A 版本类似，也是双路 RGB，不过引脚变量名更清楚，分成 `R1/G1/B1` 和 `R2/G2/B2`。

如果要改 RGB 颜色或接线，这个版本更容易看。

### `actuators/servo-fixed-angle.ino`

这个程序把舵机接在 9 号脚，并持续写入 90 度。

适合测试舵机有没有接对，能不能保持中间位置。

### `actuators/servo-gripper-baseline.ino`

这是一个很小的舵机/夹爪起始程序。舵机接 2 号脚，角度保持 90 度。

可以在这个基础上继续加夹爪打开、关闭角度。

### `actuators/seven-segment-shape-loop.ino`

这个程序控制七段数码管，A-G 分别接 2-8 号脚，12 号脚作为开关/输入。

当 12 号脚为 LOW 时，程序会快速切换多组段码形状。适合测试七段数码管接线。

### `audio/multi-tone-keyboard.ino`

这个程序读取 2-8 号输入脚，每个输入对应一个不同频率，蜂鸣器接 12 号脚。

可以做一个简单按键蜂鸣器，或者用来测试多个按钮和一个蜂鸣器。

### `locomotion/direct-drive-forward.ino`

这个程序用 1、2、3、4 四个方向脚控制左右电机向前。它没有 PWM 调速。

必须配合电机驱动板使用。它是这个仓库里最简单的前进测试。

### `locomotion/left-right-drive-fixed.ino`

这个程序设置 5、6、10、11 号脚，然后保持一个固定输出状态 10 秒。

适合用来测试两个电机通道的固定输出。

### `locomotion/line-rf-or-state-drive.ino`

这个程序混合了电机输出、数字传感器输入、串口初始化和舵机对象。它读取 12 号脚的 `Sensor3`，根据 HIGH/LOW 切换电机状态。

它更像一个“根据传感器状态切换运动”的实验。注意程序里舵机一开始 attach 到 12 号脚，某个分支里又 attach 到 6 号脚，所以使用前要认真检查接线。

### `locomotion/motor-direction-cycle.ino`

这个程序用 10 和 9 号脚切换电机方向。先一个方向 2 秒，再反方向 2 秒，然后停止 5 秒。

适合测试电机驱动板的方向控制脚。

### `locomotion/sensor-dependent-drive-state.ino`

这个程序读取 2 号脚 `DO`。`DO` 为 HIGH 时是一种电机状态，`DO` 为 LOW 时是另一种电机状态。程序还使用 `ENA`、`ENB` 作为 PWM 速度脚。

适合做传感器改变机器人运动状态的例子。

### `locomotion/straight-drive-forward.ino`

这是基础直行程序。左电机方向脚是 4、5，右电机方向脚是 7、6。

适合测试不带 PWM 的左右电机直行。

### `locomotion/straight-drive-forward-pwm.ino`

这是带 PWM 速度脚的直行程序。方向脚是 4、5、7、8，PWM 速度脚是 6 和 9。

适合使用带 enable/speed 引脚的电机驱动板。

### `locomotion/tank-spin-drive.ino`

这个程序使用和 PWM 直行类似的 H 桥接线，并把左右两边 PWM 都设成 100。

适合做两轮底盘或坦克式底盘的小测试。

### `locomotion/ultrasonic-obstacle-avoidance.ino`

这个程序用超声波传感器测距，Trig 接 2 号脚，Echo 接 3 号脚。程序把回波时间换算成厘米。如果距离小于 10 cm，就执行一段避障动作；否则保持前进。

适合做一个简单的超声波避障小车。

### `locomotion/ultrasonic-robot-example-full.txt`

这是超声波小车的说明笔记，里面写了引脚、距离公式和安全注意事项。

它不是要上传的 Arduino 程序。

### `sensors/edge-trigger-led-blink.ino`

这个程序读取 2 号脚。2 号脚为 HIGH 时，3 号脚按 1 秒节奏闪烁。

虽然文件名里有 edge-trigger，但实际更像一个普通的输入控制闪烁。

### `sensors/input-led-buzz-alert.ino`

这个程序读取 2 号输入脚。输入为 HIGH 时，12 号脚打开，13 号脚会短暂脉冲；输入为 LOW 时两个输出都关闭。

适合做按钮、声音传感器或数字传感器触发的提示输出。

### `sensors/sound-triggered-output.ino`

这个程序读取 3 号脚。3 号脚为 HIGH 时，5 号脚输出一个很短的 HIGH 脉冲。

适合声音传感器或其他数字触发模块。

### `serial/serial-api-cheatsheet.txt`

这是一个串口 API 小笔记，列了 `Serial.begin`、`Serial.available`、`Serial.read`、`Serial.print`、`Serial.println`。

写串口程序或调试时可以参考。

### `serial/serial-echo-story.ino`

这个程序用 9600 波特率打开串口。串口监视器发送字符 `r` 时，会每隔 1 秒打印三行状态文字。

适合测试串口输入和串口输出。

### `serial/serial-read-print-ascii.ino`

这个程序读取串口收到的字节，然后打印它的十进制数值。

适合看你在串口监视器里输入的字符，Arduino 实际收到的数字是多少。

### `serial/serial-rgb-command.ino`

这个程序读取串口命令。发送 `r` 会点亮 9 号脚，发送 `g` 会点亮 11 号脚，发送 `b` 会点亮 10 号脚。每次新命令前会先关掉三个输出。

适合用串口监视器控制 LED 或 RGB 通道。

## 开源许可

本仓库使用 MIT 协议，详见 [`LICENSE`](./LICENSE)。
