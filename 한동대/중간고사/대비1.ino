void setup( ) { //setup 잘 적기
	pinMode(13, OUTPUT);
}
void loop ( ) {
	digitalWrite(13, LOW);
  	delay(70);
  	digitalWrite(13, HIGH);
  	delay(50);
}
