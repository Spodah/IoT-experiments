// servo1 controls the arm to push the page up. servo2 controls the arm to catch and flip the page.
// servo1 is connected to digital pin 7 and servo2 to digital pin 8. Both of them are additionally connected to 5V power and ground pins.

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

  delay(1000);
  turnLeft(60);
  delay(100);
  spinLeft(60); 
  delay(100); 
  spinRight(60);
  delay(100);
  turnRight(60);
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
