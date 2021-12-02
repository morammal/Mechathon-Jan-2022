#include <AFMotor.h>

AF_DCMotor FR(1);
AF_DCMotor FL(2);
AF_DCMotor BR(3);
AF_DCMotor BL(4);

void setSpeed(int speed){
  FR.setSpeed(speed);
  FL.setSpeed(speed);
  BR.setSpeed(speed);
  BL.setSpeed(speed);
}

void drive(int direction){
  FR.run(direction);
  FL.run(direction);
  BR.run(direction);
  BL.run(direction);
}

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  setSpeed(255);
  drive(FORWARD);
  delay(2000);
  drive(RELEASE);
  delay(2000);
  drive(BACKWARD);
  delay(2000);
  drive(RELEASE);
  delay(2000);
}
