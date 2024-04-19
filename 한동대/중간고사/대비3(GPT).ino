const int ledPin = 13; // LED 핀
int numBlinks = 0; // LED가 깜박일 횟수

void setup() {
  pinMode(ledPin, OUTPUT); // LED 핀을 출력으로 설정
  Serial.begin(9600); // 시리얼 통신 시작
}

void loop() {
  if (Serial.available() > 0) { // 시리얼 입력이 있을 때
    int inputValue = Serial.parseInt(); // 입력된 정수를 읽음

    // 입력된 정수만큼 LED를 깜박임
    for (int i = 0; i < inputValue; i++) {
      digitalWrite(ledPin, HIGH); // LED 켬
      delay(500); // 0.5초 대기
      digitalWrite(ledPin, LOW); // LED 끔
      delay(500); // 0.5초 대기
    }

    numBlinks = inputValue; // LED 깜박일 횟수 업데이트

    // 입력된 정수의 제곱 값을 계산하고 출력
    int squaredValue = inputValue * inputValue;
    Serial.print("Int's multiply is: ");
    Serial.println(squaredValue);
  }

  // LED 깜박임이 끝나면 초기화
  numBlinks = 0;
}
