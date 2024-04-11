void setup(){
  Serial.begin(9600);
  Serial.println("Hello"); /*println은 다음 줄로 바꿔서 프린트*/
}

byte data = 0;

void loop(){
  int data_left;
  byte msg;
}

void get_msg(){
  data_left = Serial.available();
  if(data_left > 0){
    msg = Serial.read();

    if(msg == 2){
      msg = msg -48;
      for (int m=1; m<=9; m++){
        Serial.print(msg);
        Serial.print(" * ");
        Serial.print(m);
        Serial.print(" = ");
        Serial.println(msg*m);
        }
    }


    else if(msg == 3){
      msg = msg -48;
      for (int m=1; m<=9; m++){
        Serial.print(msg);
        Serial.print(" * ");
        Serial.print(m);
        Serial.print(" = ");
        Serial.println(msg*m);
      }
    }

    else if(msg == 4){
      msg = msg -48;
      for (int m=1; m<=9; m++){
        Serial.print(msg);
        Serial.print(" * ");
        Serial.print(m);
        Serial.print(" = ");
        Serial.println(msg*m);
      }    
    }

    else if(msg == 5){
      msg = msg -48;
      for (int m=1; m<=9; m++){
        Serial.print(msg);
        Serial.print(" * ");
        Serial.print(m);
        Serial.print(" = ");
        Serial.println(msg*m);
      }
    }

    else if(msg > 5 || msg <2){
      Serial.print(msg);
      Serial.print(": out of range");
    }
  }
}
  

