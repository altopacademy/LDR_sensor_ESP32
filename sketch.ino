#define LDR_PIN 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(LDR_PIN, INPUT);
}

void loop() {
  if (digitalRead(LDR_PIN) == LOW) {
    Serial.println("Terang");
  } else {
    Serial.println("Gelap");
  }
  delay(100);
}
