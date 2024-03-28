// C++ code
//

const int echoPin = 12;
const int trigPin = 13;


void setup()
{
  for(int i=5; i<=11; i++){
  pinMode(i, OUTPUT);
  }
  pinMode(2, OUTPUT);
  Serial.begin(115200);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); // Wait for 1000 millisecond(s)
  digitalWrite(trigPin, LOW);
  
  long timeDistance = pulseIn(echoPin, HIGH);
  long distance = (timeDistance/2) / 29.1;
  
  Serial.print(distance);
  Serial.println("cm");
  
  if (distance < 50){
    for(int i = 5; i <= 11; i++){
    	  analogWrite(i, 0);
      
    }
  }
  else if (distance < 125){
    for(int i = 5; i <= 11; i++){	
    analogWrite(i, 125);
     
    }
  }
  else if (distance < 250){
   for(int i = 5; i <= 11; i++){
    	  analogWrite(i, 250);
   
   }
  }
}
  
 
