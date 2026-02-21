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

    // TODO 5:
    // Read analog value from LDR

    // TODO 6:
    // Print raw ADC value

    // TODO 7:
    // Apply threshold logic (Bright / Dark detection)

    // TODO 8:
    // Print brightness status

    // TODO 9:
    // Add delay (500ms or 1 second)
}
