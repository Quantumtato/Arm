#include <Servo.h>
Servo wrist;
Servo elbow;
int val;
void setup() {
  // put your setup code here, to run once:
  wrist.attach(10);
  elbow.attach(11);
  int val = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  wrist.write(60);
  //delay(1000);
 
  val = analogRead(0);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
   elbow.write(val);
  delay(15);
}
