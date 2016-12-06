#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"
#include <Servo.h> 


Adafruit_MotorShield AFMS = Adafruit_MotorShield(); //sheild initialization

Adafruit_DCMotor *myMotor = AFMS.getMotor(3);//dc motor 1 initialization
//Adafruit_DCMotor *myMotor = AFMS.getMotor(2);

Adafruit_StepperMotor *myStepper = AFMS.getStepper(200, 2); //stepper in

Servo servo1;
Servo servo2;
void setup() {

AFMS.begin();
myStepper->setSpeed(10); 
servo1.attach(10);
servo2.attach(9);
myMotor->setSpeed(110);
myMotor->run(RELEASE);
}

void loop() {
  
  myStepper->step(20, BACKWARD, DOUBLE); 
  servo1.write(90);
  servo2.write(90);
  delay(100);
  myStepper->step(40, FORWARD, SINGLE);
  servo1.write(0);
  //servo2.write(0);
  delay(1000);
  myMotor->run(FORWARD);
}
