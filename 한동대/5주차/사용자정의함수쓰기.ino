const int LEDpin = 13;
int value;

void setup(){
  pinMode(LEDpin, OUTPUT);
  value = HIGH;
}

void loop(){
  const int timeDelay = 1000;
  write_delay(value, timeDelay);
  value = !value;
  write_delay(value, timeDelay);
}

void write_delay(int v, int d){
  digitalWrite(LEDpin, v);
  delay(d);
}
