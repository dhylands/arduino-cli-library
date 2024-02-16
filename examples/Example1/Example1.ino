#include <Arduino.h>

#include "MyLib.h"

void setup() {
    Serial.begin();
}

void loop() {
    Serial.println("About to call MyLibFunc");
    MyLibFunc();
    Serial.println("After calling MyLibFunc");
}