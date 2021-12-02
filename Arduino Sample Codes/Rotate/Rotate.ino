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

void drive(int DFR, int DFL, int DBL, int DBR){
  FR.run(DFR);
  FL.run(DFL);
  BL.run(DBL);
  BR.run(DBR);
}

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  setSpeed(255);
  // go forward
  drive(FORWARD, FORWARD, FORWARD, FORWARD);
  delay(1000);
  // go right by keeping left side forward and right side backwards
  drive(BACKWARD, BACKWARD, FORWARD, FORWARD);
  delay(5000);
  // go forward
  drive(FORWARD, FORWARD, FORWARD, FORWARD);
  delay(1000);
  // go left by keeping right side forward and left side backwards
  drive(FORWARD, FORWARD, BACKWARD, BACKWARD);
  delay(5000);
}
