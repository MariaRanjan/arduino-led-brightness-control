# 🎛️ Arduino LED Brightness Control using Potentiometer

This project demonstrates how to control the brightness of an LED using a potentiometer and Arduino.
By rotating the potentiometer, the LED brightness changes smoothly in real time.
This project helps in understanding analog inputs and PWM outputs.

---

## 🧰 Components Used
- Arduino Uno / Nano
- 1 × LED
- 1 × 220Ω resistor
- 1 × Potentiometer (10kΩ)
- Breadboard
- Jumper wires

---

## 🔌 Pin Configuration

### Potentiometer
| Pin | Connection |
|----|-----------|
| Left | GND |
| Middle (Wiper) | A0 |
| Right | 5V |

### LED
| Component | Arduino Pin |
|----------|-------------|
| LED (+) | D9 (PWM) |
| LED (–) | GND |

⚠️ LED is connected with a 220Ω resistor for safety.

---

## ⚙️ Working Principle
- The potentiometer provides an analog value (0–1023)
- Arduino reads this value using `analogRead()`
- The value is mapped to a PWM range (0–255)
- LED brightness changes according to potentiometer rotation

---

## 💻 Arduino Code
```cpp
int potPin = A0;
int ledPin = 9;
int potValue = 0;
int brightness = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin);
  brightness = map(potValue, 0, 1023, 0, 255);
  analogWrite(ledPin, brightness);
}
