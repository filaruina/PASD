//IO Constants
int MIC_DIGITAL_IN = 3;
int MIC_ANALOG_IN = A0;
int LED = 13;

//Values
int MIC_DIGITAL_VALUE = 0;
int MIC_ANALOG_VALUE = 0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  MIC_DIGITAL_VALUE = digitalRead(MIC_DIGITAL_IN);
  if (MIC_DIGITAL_VALUE == HIGH) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
  MIC_ANALOG_VALUE = analogRead(MIC_ANALOG_IN);
  Serial.println(MIC_ANALOG_VALUE, DEC);
}
