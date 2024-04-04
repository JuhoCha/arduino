int value;

void setup(){
  pinMode(13, OUTPUT);
  value = HIGH;
}

void loop(){
  write_delay(13, value, 1000);
  write_delay(13, !value, 1000);
}

void write_delay(int port_id, int v, int d){
  digitalWrite(13, v);
  delay(d);
}
