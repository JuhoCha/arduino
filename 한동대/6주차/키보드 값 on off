 const int LED = 13;


void setup(){
  Serial.begin(9600);
  Serial.println("Hello"); /*println은 다음 줄로 바꿔서 프린트*/
  pinMode(LED, OUTPUT);
}

byte data = 0;
int blinking = 0;

void loop(){
  int data_left;
  byte msg;

  data_left = Serial.available();
  if(data_left > 0){
    msg = Serial.read();
    if(msg == '1'){
      blinking = 1;
      Serial.print(msg);
      Serial.println(": on");
    }

    else if(msg == '2'){
      blinking = 0;
      Serial.print(msg);
      Serial.println(": off");
    }
  }

  if(blinking == 1){
    blinking_1();
  }

  if(blinking == 0){
    blinking_2();
  }
}

void blinking_1()
{
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}

void blinking_2()
{
  digitalWrite(13, LOW);
}
