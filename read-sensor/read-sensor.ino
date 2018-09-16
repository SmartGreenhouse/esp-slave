/*******************
 * Sensor YL-69    *
 * Output: 0-1024  *
 *******************/
 
int sensor_pin = A0; 
int humidity=0; 

void setup() { 
  Serial.begin(115200); 
} 

void loop() { 
humidity= analogRead(sensor_pin); 

  Serial.print("Humidity : "); 
  Serial.print(humidity); 
  Serial.print("\n"); 
  delay(1000); 
}
