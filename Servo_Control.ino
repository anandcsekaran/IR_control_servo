#include <Servo.h>

//Define servo
Servo myS1;
//Servo myS2;

//Servo position in degrees
int serPos = 0;
int pos = 0;
int val;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myS1.attach(9);
  myS1.write(0);
}

void loop(){
  if(Serial.available()){
    val = Serial.read();
    if(val == 'a')
    {
//      pos += 1;
      myS1.write(30);
    }
    if(val == 'd')
    {
//      pos -= 1;
      myS1.write(0);
    }
  }
}
