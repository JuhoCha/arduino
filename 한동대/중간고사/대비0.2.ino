int I = 0;
int LEDpin = 13;
int timeDelay = 1000;
void setup(){
	pinMode(LEDpin, OUTPUT);
}

void loop() {
I = I + 1;
  if(I%2 == 1 ){
  	digitalWrite(LEDpin, HIGH);}
  else{ 
    digitalWrite(LEDpin, LOW); 
  }
delay(timeDelay);
}
