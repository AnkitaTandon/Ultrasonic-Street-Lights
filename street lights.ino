const int trigPin = 3;
const int echoPin = 2;
int ledPin1 =9;
int ledPin2 =10;
int ledPin3 =11;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;

  Serial.print("Distance:");
  Serial.println(distance);  

  if(distance<25)
  {
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,LOW);
  }
  else if(distance<20)
  {
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin3,HIGH);
  }
  else if(distance<15)
  {
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,HIGH);
  }
  else
  {
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
  }
}
