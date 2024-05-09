const int LED = 7;
void setup() {
  Serial.begin(9600);
  Serial.println("Input number: ");
  pinMode(LED, OUTPUT);
}

int mos[10][5]{/*몇번째 행인지 열인지 알려줌*/
/*1*/{300, 600, 600, 600, 600},
/*2*/{300, 300, 600, 600, 600},
/*3*/{300, 300, 300, 600, 600},
/*4*/{300, 300, 300, 300, 600},
/*5*/{300, 300, 300, 300, 300},
/*6*/{600, 300, 300, 300, 300},
/*7*/{600, 600, 300, 300, 300},
/*8*/{600, 600, 600, 300, 300},
/*9*/{600, 600, 600, 600, 300},
/*0*/{600, 600, 600, 600, 600},
};

void loop() {
int input = 0;
int dummy = 0;

  if (Serial.available() > 0) {
    input = Serial.parseInt();
    dummy = Serial.parseInt();
    Serial.println(input);
      for(int k = 0; k<5; k++){
        digitalWrite(7, 1);
        delay(mos[input][k]);
        digitalWrite(7, 0);
        delay(mos[input][k]);
    }
  }
}
