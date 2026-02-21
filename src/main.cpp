#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Charvi Mittal
 * @date 2026-02-08
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

int ldrPin = A0;
void setup() {
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);

}

void loop() {
    int ldrValue = analogRead(ldrPin);


}
