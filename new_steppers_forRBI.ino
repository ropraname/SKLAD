#include<AccelStepper.h>

#define motorPin1  3 // IN1 на 1-м драйвере ULN2003
#define motorPin2  6 // IN2 на 1-м драйвере ULN2003
#define motorPin3  2 // IN3 на 1-м драйвере ULN2003
#define motorPin4  5 // IN4 на 1-м драйвере ULN2003

AccelStepper stepper_x(1, 3, 6);//красный (2 слева)
AccelStepper stepper_y(1, 2, 5);

void setup() {
  stepper_x.setMaxSpeed(6400.0);
  stepper_x.setAcceleration(6400.0);
  stepper_x.setSpeed(6400);
  
  stepper_y.setMaxSpeed(6400.0);
  stepper_y.setAcceleration(6400.0);
  stepper_y.setSpeed(6400);
}

void loop() {
  stepper_x.moveTo(40000);
  stepper_x.run();
  stepper_y.moveTo(40000);
  stepper_y.run();
}

// step_x = 3 dir_x = 6 step_y = 2 dir_y = 5

  
   
