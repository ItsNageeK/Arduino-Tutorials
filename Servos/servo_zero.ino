/* Sweep
 by Keegan Walsh

 modified 15 October 2016
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myservo.write(0);     //0 deg
  delay(1500);

}

