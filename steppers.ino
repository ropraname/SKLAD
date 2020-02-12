#include <Stepper.h>

//Stepper step_y = Stepper(400, 3, 6);
Stepper step_x = Stepper(400, 3, 6);


void setup() {
  Serial.begin(9600);
  step_x.setSpeed(60);
}

void loop() {
  int n_stl = 0;
  int n_str = 0;
  if (Serial.available() > 0) {
    int incomingByte = Serial.read();
    incomingByte &= 0x007;
    Serial.println(incomingByte);
    if (incomingByte % 3 == 0) {
      n_stl = 3;
      n_str = incomingByte / 3;
    }
    else {
      n_stl = incomingByte % 3;
      n_str = (incomingByte / 3) + 1;
    }
    Serial.println(n_stl);
    Serial.println(n_str);
    
    int kol_st_x = n_stl * 400 * 15;
    Serial.println(kol_st_x);
    //long kol_st_y = n_str * 2500 * 15;
    //Serial.println(kol_st_y);
    step_x.step(kol_st_x);
    //step_y.step(kol_st_y);
    //delay(2000);
    //step_x.step(-kol_st_x);
    //step_y.step(-kol_st_y);
    delay(1500);
  }

}
