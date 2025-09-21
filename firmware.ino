// firmware.ino
void setup() {
  Serial.begin(9600);
  // Initialize temperature sensor
}

void loop() {
  // Read temperature
  float temperature = 25.0; // Placeholder
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");
  delay(1000);
}