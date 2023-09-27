const int ledPin = 2; // GPIO2
void setup() {
pinMode(ledPin, OUTPUT);
}
void loop() {
digitalWrite(ledPin, HIGH);
delay(1000); // Wait for 1 second
digitalWrite(ledPin, LOW);
delay(1000); // Wait for 1 second
}
