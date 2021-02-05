#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;

void setup() {
   Serial.begin(9600);
   delay(1000);
   Serial.println("cm");
}

void loop() {
   a=sr04.Distance();
   Serial.println("cm");
   delay(250);
}
