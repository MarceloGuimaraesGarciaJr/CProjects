#include <Arduino.h>
void setup() {
pinMode(27, OUTPUT);

}

void loop() {
    digitalWrite(27, LOW);
    delay(2000);
    digitalWrite(27,HIGH);
    delay (1000);
}