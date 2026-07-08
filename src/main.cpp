#include <Arduino.h>


void setup() {
  // Well I guess we have to start from somewhere
  pinMode(13,OUTPUT);
}

void loop() {
  // Here trying to replicate the strobe lights of Airbus aircraft
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(50);
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(1500);
}

