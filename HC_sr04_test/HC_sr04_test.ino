int trigpin = 12;
int echopin = 13;
long duration = 0;
int distance = 0;

void setup(){
  Serial.begin(115200);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
}

void loop(){
  digitalWrite(trigpin, LOW);
  delay(200);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  duration = pulseIn(echopin, HIGH);
  distance = duration*0.034/2;
  Serial.print("Distance: ");
  Serial.println(distance);
}
  
