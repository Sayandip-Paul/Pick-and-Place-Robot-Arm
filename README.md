# Pick-and-Place Robotic Arm using Arduino

## Overview
This project demonstrates a **pick-and-place robotic arm** controlled by an **Arduino Uno**. The robotic arm has **5 degrees of freedom** and uses **servo motors** for precise movement. It is ideal for assembly tasks and can be programmed for automation.

## Features
- **Controlled by Arduino Uno** for smooth and accurate operation.
- **5 Degrees of Freedom** for versatile movements.
- **3D Printed Parts** designed using Solidworks and manufactured with FDM technology.
- **Manual and Automated Control** options for flexibility in operations.
- Pre-programmed motions for pick-and-place tasks.

## Components Used
- **Arduino Uno** (1 unit)
- **MG996R Servo Motors** (3 units) for waist, shoulder, and elbow.
- **SG90 Servo Motors** (3 units) for wrist rotation, pitch, and gripper.
- **3D Printed Parts** (PLA material) for the arm structure.
- **Power Supply** providing 5V and minimum 2A current.
- **Nut and Bolts** for assembly.

## Working Principle
1. **Design and Printing**: The robotic arm parts were modeled in Solidworks and printed using a Creality Ender 3 printer.
2. **Assembly**: The printed parts were assembled along with servo motors and secured using screws.
3. **Programming**: The Arduino was programmed to control servo positions for predefined movements.
4. **Manual Control**: Hardcoded values were used to control the arm for pick-and-place tasks.

## Circuit Diagram
- Each servo motor is connected to **PWM pins** on the Arduino.
- An **external power supply** provides sufficient current for the servos.
- The circuit ensures precise movement and avoids overloading the Arduino.

## Code Overview
- **Setup**: Initializes servo positions.
- **Loop**: Executes a predefined pick-and-place sequence.
- **Functions**: Smoothly moves each servo to a target position with adjustable speed.

### Example Operations
1. **Pick Object**:
   - Move to the object's location.
   - Close gripper to grab the object.
2. **Place Object**:
   - Move to the target location.
   - Open gripper to release the object.
3. **Return to Start Position**:
   - Moves back to initial position.

## Applications
- **Industrial Automation**: Material handling, packaging, and assembly tasks.
- **Education**: Robotics and automation training.
- **Prototyping**: Experimentation with servo-controlled systems.

## Future Scope
- **Bluetooth Control**: Integrating HC-05 module for wireless control via smartphone.
- **Computer Vision**: Implementing object detection for autonomous operation.
- **Multi-Gripper Design**: Handling multiple tasks simultaneously.

## Requirements
- **Software**: Arduino IDE
- **Hardware**:
  - Arduino Uno
  - Servos (MG996R, SG90)
  - Power Supply (5V, 2A)
  - 3D Printed Parts

## How to Use
1. **Connect Components**: Assemble the parts and wire servos to Arduino.
2. **Upload Code**: Flash the provided code to Arduino using the Arduino IDE.
3. **Run Program**: Power up the system to execute the pick-and-place sequence.
4. **Modify Code**: Customize positions and movements by editing hardcoded values.

## Authors
- **Piyush Sharma**  
- **Sayandip Paul**  
- **Prathamesh Bhumkar**   

## License
This project is licensed under the **MIT License**.

## Acknowledgments
- **Symbiosis Institute of Technology (SIT), Pune** for guidance and resources.
- Special thanks to **Ms. Priya Jadhav** for mentoring the project.
