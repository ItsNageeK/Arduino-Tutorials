/* 
 Purpose:
 Simple program to calibrate/understand your servo.
 
 modified 13 Oct 2016
 by Keegan Walsh
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  //Testing for 0 deg ->90 deg -> 180 deg
  myservo.write(0);
  delay(1500);
  myservo.write(90);  //change value if not actually 90 deg on servo
  delay(1500);
  myservo.write(180); //change value if not actually 180 deg on servo
  delay(1500);
}

