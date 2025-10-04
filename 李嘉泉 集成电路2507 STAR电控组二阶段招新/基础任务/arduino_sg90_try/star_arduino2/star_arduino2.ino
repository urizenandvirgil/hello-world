#include <Servo.h>

int pos=0;
Servo myservo;

void setup(){
  myservo.attach(9);
}

void loop(){
  while(pos>=0){
    pos=0;
    myservo.write(pos);
    delay(1000);
    pos=30;
    myservo.write(pos);
     delay(1000);
    pos=45;
    myservo.write(pos);
     delay(1000);
    pos=90;
    myservo.write(pos);
     delay(1000);
    pos=135;
    myservo.write(pos);
     delay(1000);


  }
}