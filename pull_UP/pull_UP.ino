// The input pin
int Pin_Input = 2;
// The LED pin
int Led_Output = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(Pin_Input, INPUT);
  pinMode(Led_Output, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // read the voltage at the Input Pin
  int Sensor_Value = digitalRead(Pin_Input);

  // display the value at the sensor
  Serial.println(Sensor_Value);

  // turn on the LED if the input pin is HIGH, else turn it off
  if (Sensor_Value == HIGH) {
    digitalWrite(Led_Output, HIGH);
  } else {
    digitalWrite(Led_Output, LOW);
  }
}
