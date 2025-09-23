#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  while (!Serial);
  Serial.println("nRF52840 Feather Serial OK!");
}

void loop() {
  Serial.println("온도와 습도를 출력할 준비 완료!");
  delay(1000);
}
