int turnerpin = 7;
int servo1right = 1800;
int servo1left = 550;

void setup(){
  Serial.begin(115200);
  pinMode(turnerpin, OUTPUT);
}

void loop(){
  turnRight();
  turnLeft();
}

void turnRight(){
  int multiple = 2000;
  for(int i=0; i<multiple; i++){
    digitalWrite(turnerpin, HIGH);
    delayMicroseconds(servo1right);
    digitalWrite(turnerpin, LOW);
    delayMicroseconds(20000-servo1right);
  }
  Serial.println("right");
}

void turnLeft(){
  int multiple = 2000;
  for(int i=0; i<multiple; i++){
    digitalWrite(turnerpin, HIGH);
    delayMicroseconds(servo1left);
    digitalWrite(turnerpin, LOW);
    delayMicroseconds(20000-servo1left);
  }
  Serial.println("left");
}
