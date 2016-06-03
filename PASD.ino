//IO Constants
int MIC_DIGITAL_IN = 3;
int LED = 13;

//Values
int MIC_DIGITAL_VALUE = 0;

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
}
