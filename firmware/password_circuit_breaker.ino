# Arduino Password-Based Circuit Breaker (Proteus Simulation)

## Overview
This project simulates a password-protected circuit breaker using an Arduino UNO. Access is granted via a 4x4 keypad, status is displayed on a 16x2 LCD, and a relay controls the load. The implementation is validated in **Proteus** (simulation).

## Features
- Password entry via 4x4 matrix keypad
- LCD prompts and status feedback
- Relay ON/OFF control based on authentication
- Clear separation of firmware and simulation assets

## Simulation Setup (Proteus)
- Arduino UNO
- 16x2 LCD (4-bit or 8-bit mode depending on wiring)
- 4x4 keypad
- 5V relay + load

Schematic:
![Proteus schematic](images/proteus-schematic.png)

## Firmware
The Arduino sketch is located at:
- `firmware/password_circuit_breaker.ino`

## How to Run
1. Open the Proteus project in `hardware/proteus/` (if provided).
2. Compile/upload the Arduino sketch to the UNO in Proteus (or attach the HEX if you generate one).
3. Run the simulation and enter the password using the keypad.

## Future Improvements
- EEPROM-stored password
- Lockout after 3 failed attempts
- Buzzer/alert indication
- Current sensing for overload detection
