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
  while (Serial.available()>0){
  Serial.println("请输入角度");
  pos = Serial.parseInt();
  Serial.print(pos);
  myservo.write(pos);
  }


}
