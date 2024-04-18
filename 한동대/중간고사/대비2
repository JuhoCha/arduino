  	int t = 70;
  	int v = LOW;
void setup(){
	pinMode(13, OUTPUT);
	t = 70;
  	v = LOW;
}

void loop(){
	digitalWrite(13, v);
  	delay(t);
  if(v == LOW){
    digitalWrite(13, !v);
    delay(t);
  }else{
  	digitalWrite(13, !v);
  	delay(t-20);
    }
}
