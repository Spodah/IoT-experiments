// servo1 controls the arm to push the page up. servo2 controls the arm to catch and flip the page.
// servo1 is connected to digital pin 7 and servo2 to digital pin 8. Both of them are additionally connected to 5V power and ground pins.

int servo1pin = 7;
int servo1left = 1550;
int servo1right = 700;
int servo2pin = 8;
int servo2left = 1850;
int servo2right = 500;
int turncycles = 60;

void setup(){
  Serial.begin(115200);
  pinMode(servo1pin, OUTPUT);
  pinMode(servo2pin, OUTPUT);
}

void loop(){

  delay(1000);
  turnLeft();
  delay(100);
  spinLeft(); 
  delay(100); 
  spinRight();
  delay(100);
  turnRight();
}

void turnRight(){
  for(int i=0; i<turncycles; i++){
    digitalWrite(servo1pin, HIGH);
    delayMicroseconds(servo1right);
    digitalWrite(servo1pin, LOW);
    delayMicroseconds(20000-servo1right);
  }
  Serial.println("right");
}

void turnLeft(){
  for(int i=0; i<turncycles; i++){
    digitalWrite(servo1pin, HIGH);
    delayMicroseconds(servo1left);
    digitalWrite(servo1pin, LOW);
    delayMicroseconds(20000-servo1left);
  }
  Serial.println("left");
}

void spinRight(){
  for(int i=0; i<turncycles; i++){
    digitalWrite(servo2pin, HIGH);
    delayMicroseconds(servo2right);
    digitalWrite(servo2pin, LOW);
    delayMicroseconds(20000-servo2right);
  }
  Serial.println("spinright");
}

void spinLeft(){
  for(int i=0; i<turncycles; i++){
    digitalWrite(servo2pin, HIGH);
    delayMicroseconds(servo2left);
    digitalWrite(servo2pin, LOW);
    delayMicroseconds(20000-servo2left);
  }
  Serial.println("spinleft");
}
