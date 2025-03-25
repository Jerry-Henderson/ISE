#include <Servo.h>
Servo myservo;
int buttonstate = 0;
int doorstate;
int pos;
int lastbuttonstate;



void setup() {
  // put your setup code here, to run once:3
  pinMode(11, OUTPUT);
  pinMode(4,INPUT);
  myservo.attach(11);
  myservo.write(90);
  doorstate = "closed";
  pos = 90;
}

void loop() {
buttonstate = digitalRead(4);
if (buttonstate == HIGH && doorstate == "closed"){
     myservo.write(200);
     delay(250);
     doorstate = "open";
     }
     else if (buttonstate == HIGH && doorstate == "open"){
      myservo.write(90);
      delay(250);
      doorstate = "closed";
     }
     
}
