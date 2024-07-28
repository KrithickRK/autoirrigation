#include <Arduino.h>
#include "irrigation_control.h"

// Define pins
const int tensiometerPin = A0; // Analog pin for tensiometer
const int relayPin = 7;        // Digital pin for relay

void setup() {
    Serial.begin(9600);
    pinMode(relayPin, OUTPUT);
    digitalWrite(relayPin, LOW); // Start with relay off
}

void loop() {
    int sensorValue = analogRead(tensiometerPin);
    float moistureLevel = map(sensorValue, 0, 1023, 0, 100); // Map value to percentage

    Serial.print("Moisture Level: ");
    Serial.println(moistureLevel);

    if (moistureLevel < 30) { // Threshold for irrigation
        digitalWrite(relayPin, HIGH); // Turn on irrigation
    } else {
        digitalWrite(relayPin, LOW); // Turn off irrigation
    }

    delay(10000); // Wait 10 seconds before the next read
}
