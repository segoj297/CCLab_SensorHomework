#define trigPin 13
#define echoPin 12
#define red 11
#define blue 8

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  long duration, distance;
  
  digitalWrite(trigPin, LOW); 
    delay(2000);
  digitalWrite(trigPin, HIGH);
    delay(1000);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  
  if (distance < 8) {  
  digitalWrite(red,LOW); 
  digitalWrite(blue,HIGH);
  
}
  else {

  digitalWrite(blue,LOW); 
    // S - first light

  digitalWrite(red, HIGH);
    delay(200);
  digitalWrite(red, LOW);
    delay(200);
  digitalWrite(red, HIGH);
    delay(200);
  digitalWrite(red, LOW);
    delay(200);
  digitalWrite(red, HIGH);
    delay(200);
  digitalWrite(red, LOW);
    delay(500);

  // O - second light

  digitalWrite(red, HIGH);
    delay(800);
  digitalWrite(red, LOW);
    delay(200);
  digitalWrite(red, HIGH);
    delay(800);
  digitalWrite(red, LOW);
    delay(200);
  digitalWrite(red, HIGH);
    delay(800);
  digitalWrite(red, LOW);
    delay(100);

  // S - first light

  digitalWrite(red, HIGH);
    delay(200);
  digitalWrite(red, LOW);
    delay(200);
  digitalWrite(red, HIGH);
    delay(200);
  digitalWrite(red, LOW);
    delay(200);
  digitalWrite(red, HIGH);
    delay(200);
  digitalWrite(red, LOW);
    delay(500);

 
  }
}
