#include <DHT.h>  
#define DHTPIN 2       // Pin where the DHT sensor is connected
#define DHTTYPE DHT11  // Type of DHT sensor (DHT11 or DHT22)

// Create DHT sensor object
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);  // Start serial communication
  dht.begin();         // Initialize the DHT sensor
}

void loop() {
  // Read temperature and humidity
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // If reading fails, print an error
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read sensor!");
    return;
  }

  // Print values to the Serial Monitor
  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.print(" C, Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(2000);  // Wait 2 seconds before taking another reading
}
