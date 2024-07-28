// src/main.c

// Define pins
#define TENSIOMETER_PIN A0 // Analog pin connected to the tensiometer
#define PUMP_PIN 8         // Digital pin connected to the relay module controlling the water pump

// Threshold for soil moisture level to start irrigation
#define MOISTURE_THRESHOLD 500 // Adjust this value based on your tensiometer's range and calibration

void setup() {
  // Initialize the serial communication
  Serial.begin(9600);
  
  // Set pump pin as output
  pinMode(PUMP_PIN, OUTPUT);
  
  // Start with the pump turned off
  digitalWrite(PUMP_PIN, LOW);
}

void loop() {
  // Read the soil moisture level from the tensiometer
  int soilMoisture = analogRead(TENSIOMETER_PIN);
  
  // Print the soil moisture level to the serial monitor
  Serial.print("Soil Moisture Level: ");
  Serial.println(soilMoisture);
  
  // Check if soil moisture level is below the threshold
  if (soilMoisture < MOISTURE_THRESHOLD) {
    // Turn on the pump
    digitalWrite(PUMP_PIN, HIGH);
    Serial.println("Pump ON");
  } else {
    // Turn off the pump
    digitalWrite(PUMP_PIN, LOW);
    Serial.println("Pump OFF");
  }
  
  // Wait for a short period before the next reading
  delay(1000); // 1 second delay
}
