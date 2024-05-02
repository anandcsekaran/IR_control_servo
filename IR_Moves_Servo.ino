#include <IRremote.h>
#include <Servo.h>

const int IRpin = 11;
IRrecv getIR(IRpin);
decode_results results;
Servo myS1;
Servo myS2;

void setup(){
  Serial.begin(9600);
  //Serial.println("Enabling IR.");
  getIR.enableIRIn();
  //Serial.println("Enabled IR.");
  myS1.attach(9);
  myS2.attach(6);
  myS1.write(0);
  myS2.write(0);
}

void loop(){
  if(getIR.decode()){
    Serial.println(getIR.decodedIRData.decodedRawData, DEC);   
    getIR.resume();
    if(getIR.decodedIRData.decodedRawData == 3158572800){
      //Serial.println("Open");
      myS1.write(30);
      delay(15);
    }
    if(getIR.decodedIRData.decodedRawData == 3208707840){
      //Serial.println("Close");
      myS1.write(0);
      delay(15);
    }

    if(getIR.decodedIRData.decodedRawData == 4127850240){
      //Serial.println("Close");
      myS2.write(30);
      delay(15);
    }
    if(getIR.decodedIRData.decodedRawData == 3927310080){
      //Serial.println("Close");
      myS2.write(0);
      delay(15);
    }
  }
}
