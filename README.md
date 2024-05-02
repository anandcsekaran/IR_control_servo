# Arduino IR Remote Controlled Servo

This Arduino project allows you to control two servos using an IR remote control. It uses the IRremote library to receive IR signals and the Servo library to control the servos. The code is designed to respond to specific IR commands to open and close the servos.

## Hardware Requirements

- Arduino board (e.g., Arduino Uno)
- IR receiver module
- IR remote control
- Two servo motors
- Jumper wires

## Installation and Setup

1. Download and install the [IRremote library](https://github.com/Arduino-IRremote/Arduino-IRremote).
2. Connect the IR receiver module to pin 11 of your Arduino board. 
3. Connect two servo motors to pins 9 and 6 of your Arduino board.
4. Upload the provided sketch (`IR_Moves_Servo.ino`) to your Arduino board using the Arduino IDE.

## Usage

1. Power up your Arduino board.
2. Point your IR remote control towards the IR receiver module.
3. Press the corresponding buttons on your remote control to control the servo motors:
   - Rewind  : Opens servo motor 1 (connected to pin 9).
   - Forward : Closes servo motor 1.
   - VOL-    : Opens servo motor 2 (connected to pin 6).
   - VOL+    : Closes servo motor 2.

## Circuit Diagram

Schematic circuit will be uploaded soon.

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

## License

[MIT](https://choosealicense.com/licenses/mit/)

---
