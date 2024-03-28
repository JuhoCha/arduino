// the setup function runs once when you press reset or power the board
const int LEDpin = 13;
int timeDelay = 1000;
int value = HIGH;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.]
  pinMode(LEDpin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int del;
  del = timeDelay;
    while(del < timeDelay*4){
  digitalWrite(LEDpin, LOW);  // turn the LED on (HIGH is the voltage level)
  delay(del);                      // wait for a second
  digitalWrite(LEDpin, HIGH);
  delay(del);
  del = del + timeDelay;
  }
}
