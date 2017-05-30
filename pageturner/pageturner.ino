// servo1 has a screw, servo2 currently doesn't. Mark them with tape?

int servo1pin = 7;
int servo1left = 1550;
int servo1right = 700;
int servo2pin = 8;
int servo2left = 1850;
int servo2right = 500;

void setup(){
  Serial.begin(115200);
  pinMode(servo1pin, OUTPUT);
  pinMode(servo2pin, OUTPUT);
}

void loop(){
  spinRight(2000);
  spinLeft(2000);
  delay(100);
}

void turnRight(int multiple){
  for(int i=0; i<multiple; i++){
    digitalWrite(servo1pin, HIGH);
    delayMicroseconds(servo1right);
    digitalWrite(servo1pin, LOW);
    delayMicroseconds(20000-servo1right);
  }
  Serial.println("right");
}

void turnLeft(int multiple){
  for(int i=0; i<multiple; i++){
    digitalWrite(servo1pin, HIGH);
    delayMicroseconds(servo1left);
    digitalWrite(servo1pin, LOW);
    delayMicroseconds(20000-servo1left);
  }
  Serial.println("left");
}

void spinRight(int multiple){
  for(int i=0; i<multiple; i++){
    digitalWrite(servo2pin, HIGH);
    delayMicroseconds(servo2right);
    digitalWrite(servo2pin, LOW);
    delayMicroseconds(20000-servo2right);
  }
  Serial.println("spinright");
}

void spinLeft(int multiple){
  for(int i=0; i<multiple; i++){
    digitalWrite(servo2pin, HIGH);
    delayMicroseconds(servo2left);
    digitalWrite(servo2pin, LOW);
    delayMicroseconds(20000-servo2left);
  }
  Serial.println("spinleft");
}
