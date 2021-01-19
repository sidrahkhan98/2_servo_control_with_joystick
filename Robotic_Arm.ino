#include <Servo.h>
#define Servo_arm 9
#define Servo_elbow 10
#define JX_pin 0
#define JY_pin 1

Servo arm, elbow;
int joyX_in;
int joyY_in; 
int elbow_angle;
int arm_angle;

void setup() {
  arm.attach(9);
  elbow.attach(10);
}

void loop() {
  joyX_in = analogRead(JX_pin);
  arm_angle = map(joyX_in, 0, 1023, 0,180); 
  arm.write(arm_angle);
  joyY_in = analogRead(JY_pin);
  elbow_angle = map(joyY_in, 0, 1023, 0,180); 
  elbow.write(elbow_angle);
}
