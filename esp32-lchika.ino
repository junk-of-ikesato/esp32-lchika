void setup() {
  Serial.begin(115200);
  pinMode(12, OUTPUT);
}

void loop() {
  Serial.write("Hello!\n");
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
}
