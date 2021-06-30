/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/USER/Desktop/lab1_2/src/lab12.ino"
void setup();
void loop();
#line 1 "c:/Users/USER/Desktop/lab1_2/src/lab12.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
 pinMode(D5, OUTPUT);
}

void loop() {
digitalWrite(D5, HIGH);
delay(1000);
digitalWrite(D5, LOW);
delay(1000);
}