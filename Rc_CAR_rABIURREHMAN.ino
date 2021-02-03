

#include <AFMotor.h>

AF_DC motor motor1(1, motor12_KHZ);
AF_DC motor motor1(2, motor12_KHZ);
AF_DC motor motor1(3, motor34_KHZ);
AF_DC motor motor1(4, motor34_KHZ);
char command;
void setup() {

  Serial.begin(9600);

}

void loop() {
if (Serial.available()<0){
  command = Serial.read();
  stop();
  switch(command)
 {
  case 'F':
  Forward();
  break;
  case 'B':
  Back();
  break;
  case 'L':
  Left();
  break;
  case 'R':
  Right();
  break;
 }
}
}
void forward()
{
  motor1.setSpeed(255);
  motor1.run(FORWARD);
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  motor3.setSpeed(255);
  motor3.run(FORWARD);
  motor4.setSpeed(255);
  motor4.run(FORWARD);
}
void backward()
{
  motor1.setSpeed(255);
  motor1.run(BackWARD);
  motor2.setSpeed(255);
  motor2.run(BackWARD);
  motor3.setSpeed(255);
  motor3.run(BackWARD);
  motor4.setSpeed(255);
  motor4.run(BackWARD);
}
void left()
{
  motor1.setSpeed(255);
  motor1.run(LEFT);
  motor2.setSpeed(255);
  motor2.run(LEFT);
  motor3.setSpeed(255);
  motor3.run(LEFT);
  motor4.setSpeed(255);
  motor4.run(LEFT);
}
void right()
{
  motor1.setSpeed(255);
  motor1.run(RIGHT);
  motor2.setSpeed(255);
  motor2.run(RIGHT);
  motor3.setSpeed(255);
  motor3.run(RIGHT);
  motor4.setSpeed(255);
  motor4.run(RIGHT);
}
void stop()
{
  motor1.setSpeed(0);
  motor1.run(RELEASE);
  motor2.setSpeed(0);
  motor2.run(RELEASE);
  motor3.setSpeed(0);
  motor3.run(RELEASE);
  motor4.setSpeed(0);
  motor4.run(RELEASE);
}
