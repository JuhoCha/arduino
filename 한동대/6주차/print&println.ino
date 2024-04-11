void setup(){
  Serial.begin(9600);
  Serial.println("Hello"); /*println은 다음 줄로 바꿔서 프린트*/
}

byte data = 1;

void loop(){
  Serial.print("Data"); /*print는 그 라인만 프린트*/
  Serial.print(data,DEC); //10진수//
  Serial.print(" "); 
  Serial.println(data,HEX); //16진수// 
  delay(1000);
  data = data + 1;
}
