#include <HCSR04.h>

HCSR04 sensorDistancia(2 ,3); //portas trig e echo

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(sensorDistancia()/100);
  delay(1000);

}
