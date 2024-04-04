// the setup function runs once when you press reset or power the board
const int LEDpin = 13;
int timeDelay = 1000;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.]
  pinMode(LEDpin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  int del = 3*timeDelay;
    while(0 < del < 4*timeDelay){ //
  digitalWrite(LEDpin, LOW);  // turn the LED on 
  delay(del);                      // wait for a second
  digitalWrite(LEDpin, HIGH);
  delay(del);
  del = del - timeDelay;
  }
}
