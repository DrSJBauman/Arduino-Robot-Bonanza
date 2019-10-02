/* Teachbot ServoTest modified by DrSJBauman
 *  Tests servos of robot by moving them in different directions
 *  Requires Arduino IDE version 1.0 or later
 */

#include <Servo.h>
Servo servoLeft;        // Define left servo object of class Servo
Servo servoRight;       // "" right servo object ""

void setup() {
  servoLeft.attach(9);   // Set the left servo to digital pin 9
  servoRight.attach(10);  // Set the right servo to digital pin 10
}

void loop() {           // Loop through the motion tests
  forward();            //Example: move forward
  delay(2000);          //Wait 2 seconds
  reverse();
  delay(2000);
  turnRight();
  delay(2000);
  turnLeft();
  delay(2000);
  stopRobot();
  delay(2000);
}

// Motion routines for forward, reverse, turns, and stop
void forward() {
  servoLeft.write(180);
  servoRight.write(0);
}

void reverse() {
  servoLeft.write(0);
  servoRight.write(180);
}

void turnRight() {
  servoLeft.write(180);
  servoRight.write(180);
}

void turnLeft() {
  servoLeft.write(0);
  servoRight.write(0);
}

void stopRobot() {
  servoLeft.write(90);
  servoRight.write(90);
}
