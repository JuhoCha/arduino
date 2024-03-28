//점점 빨리 꺼졌다가 점점 느리게 꺼져야함 보너스문제 2024.03.28 아직 완성 x if문 사용법

const int LEDpin = 13;
int timeDelay = 1000;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.]
  pinMode(LEDpin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  int del = 3*timeDelay;
  if(del < 3*timeDelay){
    while(0 < del < 4*timeDelay){ //
      digitalWrite(LEDpin, LOW);  // turn the LED on 
      delay(del);                      // wait for a second
      digitalWrite(LEDpin, HIGH);
      delay(del);
      del = del - timeDelay;
    }
  } 
  else
    while(del > 4*timeDelday){
      digitalWrite(LEDpin, LOW);  // turn the LED on 
      delay(del);                      // wait for a second
      digitalWrite(LEDpin, HIGH);
      delay(del);
    }
}
