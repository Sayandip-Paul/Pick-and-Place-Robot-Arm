#include <Servo.h>

// Declare servo objects
Servo servo01;
Servo servo02;
Servo servo03;
Servo servo04;
Servo servo05;
Servo servo06;

// Define initial positions for each servo
int servo1Pos = 90;   // Waist
int servo2Pos = 150;  // Shoulder
int servo3Pos = 35;   // Elbow
int servo4Pos = 140;  // Wrist
int servo5Pos = 85;   // Grip rotation
int servo6Pos = 80;   // Grip open/close

void setup() {
  // Attach servos to pins
  servo01.attach(5);
  servo02.attach(6);
  servo03.attach(7);
  servo04.attach(8);
  servo05.attach(9);
  servo06.attach(10);

  // Set initial positions
  servo01.write(servo1Pos);
  servo02.write(servo2Pos);
  servo03.write(servo3Pos);
  servo04.write(servo4Pos);
  servo05.write(servo5Pos);
  servo06.write(servo6Pos);

  delay(500);  // Allow servos to reach positions
}

void loop() {
  // Perform pick-and-place operation

  // Move to pick position
  moveServo(servo01, 90, 20);  // Waist rotation
  moveServo(servo02, 120, 20); // Shoulder down
  moveServo(servo03, 60, 20);  // Elbow down
  moveServo(servo04, 130, 20); // Wrist angle
  moveServo(servo05, 85, 20);  // Grip rotation

  // Close grip to pick the object
  moveServo(servo06, 40, 10);  // Close grip
  delay(500);

  // Move to place position
  moveServo(servo02, 150, 20); // Raise shoulder
  moveServo(servo03, 35, 20);  // Adjust elbow
  moveServo(servo01, 180, 20); // Rotate waist to place position

  // Open grip to release the object
  moveServo(servo06, 80, 10);  // Open grip
  delay(500);

  // Return to initial position
  moveServo(servo01, 90, 20);
  moveServo(servo02, 150, 20);
  moveServo(servo03, 35, 20);
  moveServo(servo04, 140, 20);
  moveServo(servo05, 85, 20);
  moveServo(servo06, 80, 20);

  delay(2000);  // Pause before repeating
}

// Function to smoothly move servo to desired position
void moveServo(Servo &servo, int target, int speedDelay) {
  int currentPos = servo.read();
  if (currentPos < target) {
    for (int pos = currentPos; pos <= target; pos++) {
      servo.write(pos);
      delay(speedDelay);
    }
  } else {
    for (int pos = currentPos; pos >= target; pos--) {
      servo.write(pos);
      delay(speedDelay);
    }
  }
}
