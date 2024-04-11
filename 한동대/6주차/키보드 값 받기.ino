 const int LED = 13;

void setup(){
  Serial.begin(9600);
  Serial.println("Hello"); /*println은 다음 줄로 바꿔서 프린트*/
  pinMode(LED, OUTPUT);
}

void loop(){
  byte data;
  if(Serial.available()>0){//도달했는가//
    data = Serial.read(); //바이트 단위로 읽어옴//
    Serial.write(data); 
    if(data == 'H')
      digitalWrite(LED, HIGH);
    else if(data == 'L')
      digitalWrite(LED, LOW);
  }
}
