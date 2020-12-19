#include <Arduino.h>

const int clockPin = 2;
const int dataPin = 3;

unsigned long clockCounter = 0;
int bitCounter = 0;
byte data = 0;

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  
  pinMode(clockPin, INPUT);
  pinMode(dataPin, INPUT);

  attachInterrupt(digitalPinToInterrupt(clockPin), readBit, FALLING);
}

void loop() {
  if (millis() - 5 > clockCounter) {
    if (data != 0 && bitCounter == 9) {
      Serial.println(data, HEX);    
    }
    bitCounter=0;
    data=0;
    clockCounter = millis();
  }
}

void readBit(){
    data = data << 1; // Left shift the bits
    data ^= digitalRead(dataPin);  // Apply mask to last bit.
    clockCounter = millis();
    bitCounter++;
}