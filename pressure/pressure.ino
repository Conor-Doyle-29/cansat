unsigned long i = 0, timeStart;
float timeStamp;
int pressureValue;
float pressure;
int sensorValue;
float voltage;

void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  digitalWrite(3, HIGH);  //vcc
  digitalWrite(4, LOW);   //gnd
  timeStart = micros();   // start the internal clock
}

void loop() {
  timeStart = micros();  // Reset the timeStart value

  // Read sensor values
  pressureValue = analogRead(A1);
  sensorValue = analogRead(A0);

  // Convert sensor value to voltage
  voltage = sensorValue * (5.0 / 1023);

  // Convert pressure value to pressure
  pressure = ((pressureValue / 1024.0) + 0.095) / 0.0009;

  // Calculate timestamp
  timeStamp = (micros() - timeStart) / 1000000.0;

  // Print values
  Serial.print(timeStamp);
  Serial.print(",\t");
  Serial.print(pressure);
  Serial.print(",\t");
  Serial.print(voltage);   // send over serial 
  Serial.print(",\t");
  Serial.println(i);

  // Increment loop counter
  i++;

  delay(10);  // Delay for stability
}
