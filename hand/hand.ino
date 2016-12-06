#include <Servo.h>
Servo hand;
int i;
void setup() {
  // put your setup code here, to run once:
  hand.attach(9);
  int i;
}

void loop() {
  // put your main code here, to run repeatedly:
 // for(0 < i; i < 103;)
  hand.write(77);
  delay(1000);
  hand.write(140);
   delay(1000);
  
}
