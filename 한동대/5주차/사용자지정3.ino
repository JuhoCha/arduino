const int LEDpin = 13;
int timeDelay = 1000;
  int value = HIGH;

void setup(){
  pinMode(LEDpin, OUTPUT);
}

void loop(){
  write_delay(value);
}

void write_delay(int v){
  digitalWrite(LEDpin, v);
  delay(timeDelay);
 value = !v;
}
