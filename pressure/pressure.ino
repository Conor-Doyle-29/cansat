unsigned long i=0, time, timeStart;
float timeStamp;
int pressureValue; 
float pressure; 
int sensorValue;
float voltage;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4, OUTPUT);pinMode(3, OUTPUT);  // only needed for this demo
  digitalWrite(3,HIGH);//vcc
  digitalWrite(4,LOW);//gnd
  timeStart = micros();// start the internal clock
  time = micros();// read time now
  timeStamp = (time-timeStart)/1e6;
}

void loop() {
  // put your main code here, to run repeatedly:
  pressureValue = analogRead (A1);
  sensorvalue=analogRead(A0);
  volage= sensorVaule*(5.0/1023)
  pressure = ((pressureValue / 1024.0) + 0.095) / 0.0009;
  
  Serial.print(timeStamp); Serial.print(",\t");
  Serial.print(pressure); Serial.print(",\t");
  Serial.print(temperature); Serial.print(",\t");
  Serial.println(i); // counter for number of time we loop
  delay(10); 

}
