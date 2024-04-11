void setup(){
  Serial.begin(9600);
  Serial.println("Hello"); /*println은 다음 줄로 바꿔서 프린트*/
}

byte data = 0;

void loop(){
  get_msg();
}

void get_msg(){
    int data_left;
    byte msg;

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

    else if((msg > 5 || msg <2) && msg != 10){
      Serial.print(msg);
      Serial.println(": out of range");
      get_msg();
    }
  }
}
  
