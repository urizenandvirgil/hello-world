#include <Servo.h>
int pos=0;
Servo myservo;
int Serialdate=0;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (1){
  //Serial.println("请输入角度");
  //pos = Serial.parseInt();
  Serialdate=Serial.parseInt();
  if(Serialdate==1){
    Serial.print(Serialdate);
    pos=0;
    myservo.write(pos);
  }else if(Serialdate==2){
    Serial.print(Serialdate);
    pos=45;
    myservo.write(pos);
  }else if(Serialdate==3){
    Serial.print(Serialdate);
    pos=90;
    myservo.write(pos);
  }else if(Serialdate==4){
    Serial.print(Serialdate);
    pos=180;
    myservo.write(pos);
  }
    
  }
  Serial.print(Serialdate);


}
