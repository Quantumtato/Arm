// Run a A4998 Stepstick from an Arduino UNO.
// Paul Hurley Aug 2015
int x; 
#define BAUD (9600)

void setup() 
{
  Serial.begin(BAUD);
  pinMode(6,OUTPUT); // Enable
  pinMode(5,OUTPUT); // Step
  pinMode(4,OUTPUT); // Dir
  digitalWrite(6,LOW); // Set Enable low
  int dirr = HIGH;
}

void loop() 
{
  int dirr = digitalRead(4);
  delay(10000);
  digitalWrite(6,HIGH); // Set Enable low
  digitalWrite(4, !dirr);
  //digitalWrite(4,HIGH); // Set Dir high
  Serial.println("Loop 20000 steps (1 rev)");
  for(x = 0; x < 600; x++) // Loop 200 times
  {
    
    digitalWrite(5,HIGH); // Output high
    delay(10); // Wait
    digitalWrite(5,LOW); // Output low
    delay(100); // Wait
    Serial.print(x);
  }
  //Serial.println("Pause");
  //delay(1000); // pause one second
}
