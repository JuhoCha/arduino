int motorPin = 3; 
int echoPin = 12;
int trigPin = 13;

void setup() {
	Serial.begin(9600);
  pinMode(motorPin, OUTPUT); 
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
}
void loop() {
	float duration, distance;
	
	digitalWrite(trigPin, HIGH);
	delay(10);
	digitalWrite(trigPin, LOW);
	
	duration = pulseIn(echoPin, HIGH); 
	distance = duration*34000/1000000/2;/*아두이노 초음파 센서 속도? 340m/s  거리를 구하려면 속력*시간이니까 */
	
  if(distance<10){
    analogWrite(motorPin, 255);
    
  }
  else{
   analogWrite(motorPin, 0);
  }

	Serial.print(distance);
	Serial.println("cm");
	delay(500);
}
