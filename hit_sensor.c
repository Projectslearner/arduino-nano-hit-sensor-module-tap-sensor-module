/*
    Project name : Hit sensor module Tap Sensor Module
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-hit-sensor-module-tap-sensor-module
*/

const int sensorPin = 2; // Digital pin connected to the tap sensor module
bool tapped = false;     // Flag to indicate if the sensor is tapped

void setup() {
  pinMode(sensorPin, INPUT); // Set sensor pin as input
  Serial.begin(9600);        // Initialize serial communication
}

void loop() {
  int sensorValue = digitalRead(sensorPin); // Read sensor value
  
  // Check if the sensor is tapped
  if (sensorValue == HIGH) {
    tapped = true;
  } else {
    if (tapped) {
      Serial.println("Tap detected!");
      tapped = false; // Reset the flag after detecting the tap
    }
  }
  
  delay(10); // Delay for stability
}
