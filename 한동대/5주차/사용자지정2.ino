const int LEDpin = 13;
int value;

void setup(){
  pinMode(LEDpin, OUTPUT);
  value = HIGH;
}

void loop(){
  const int timeDelay = 1000;
  write_delay(LEDpin, value, timeDelay);
  value = !value;
  write_delay(LEDpin, value, timeDelay);
}

void write_delay(int port_id, int v, int d){
  digitalWrite(LEDpin, v);
  delay(d);
}
