# Fire Fighting Robot 🤖🔥

This is an **Arduino-based Fire Fighting Robot** project. It detects fire using a flame sensor and automatically stops its motors, turns on a relay to activate a fire-extinguishing system, and moves a servo to spray.

---

## 🛠️ Components Used
- Arduino Uno
- Flame/Fire sensor (digital output to A0)
- Relay module (A2)
- Servo motor (D9)
- Motor driver (L293D or L298N) with 2 DC motors:
  - Motor 1: D10, D11
  - Motor 2: D12, D13
- 16x2 LCD display:
  - RS: D2
  - EN: D3
  - D4–D7: D4–D7

---

## ⚡ Circuit Connections

| Component      | Arduino Pin |
|----------------|--------------|
| Fire Sensor    | A0           |
| Relay Module   | A2           |
| Servo Motor    | D9           |
| Motor1         | D10, D11     |
| Motor2         | D12, D13     |
| LCD RS         | D2           |
| LCD EN         | D3           |
| LCD D4-D7      | D4, D5, D6, D7 |

---

## 🚀 How to Upload

1. Connect your Arduino Uno to your PC via USB.
2. Open `FireFightingRobot.ino` in Arduino IDE.
3. Select the correct board (`Arduino Uno`) and port.
4. Click **Upload**.
5. Power the motors separately if needed.

---

## 📷 Block Diagram

<img width="506" height="692" alt="Screenshot 2024-12-18 at 7 00 59 PM" src="https://github.com/user-attachments/assets/e2fd33bc-b0fe-4188-9d18-9fc65d818172" />


---

## 📜 License

This project is open source under the [MIT License](./LICENSE).

---

Happy building! 🤖🔥

