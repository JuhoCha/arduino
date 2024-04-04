// C++ code
//
void setup()
{
 for(int i=9; i<12; i++){
 	pinMode(i, OUTPUT);
  }
}

void loop()
{
  int value = analogRead(A0);
  
  if(value >= 256){
    digitalWrite(9, HIGH);
  }
  else{
    digitalWrite(9,LOW);
  }
  if(value >= 512){
    digitalWrite(10, HIGH);
  }
  else{
    digitalWrite(10, LOW);
  }
  if(value >= 768){
    digitalWrite(11, HIGH);
  }
  else{
    digitalWrite(11, LOW);
  }
}
