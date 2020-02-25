
#include <Servo.h>

Servo myservo; //spliff launcher
Servo dome; //lighter protector

int cnt;
int pos = 0;    

void setup() {
  myservo.attach(9);
  dome.attach(8);
  pinMode(2,INPUT);
}

void loop() {
  if(digitalRead(3)==HIGH)
  {
    for (pos = 0; pos <= 90; pos += 1) { //loop to make the dome go up
    dome.write(pos);               
   delay(1000);
  }
}
  if(digitalRead(2)==HIGH)
  {
  for (pos = 0; pos <= 40; pos += 1) { 
    // in steps of 1 degree
    myservo.write(pos);              //loop to make the spliff launcher go up, wait for a few seconds and then go down
    delay(30);                       
  }
  delay(5000);
  
  for (pos = 40; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(30);                      
  }
}
}
