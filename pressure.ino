int pressureValue; 
float pressure; 
int sensorValue;
float voltage;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pressureValue = analogRead (A1);
  sensorvalue=analogRead(A0);
  volage= sensorVaule*(5.0/1023)
  pressure = ((pressureValue / 1024.0) + 0.095) / 0.0009;
  Serial.print("Bensat 1");
  Serial.print("Pressure = ");
  Serial.print(pressure);
  Serial.println (" millibars");
  delay (500);

}
