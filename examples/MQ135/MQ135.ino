#include "MQ135.h"

#define ANALOGPIN A0    //  Define Analog PIN on Arduino Board

MQ135 gasSensor = MQ135(ANALOGPIN);

void setup()
{
  Serial.begin(9600);
  delay(3000);

  float rzero = gasSensor.getRZero();
//  gasSensor.setRZero(rzero);
  Serial.print("MQ135 #1 RZERO Calibration Value : ");
  Serial.println(rzero);
}

void loop() {
  float ppm = gasSensor.getPPM();
  Serial.print("CO2 ppm value: ");
  Serial.println(ppm);

  delay(1000);
}