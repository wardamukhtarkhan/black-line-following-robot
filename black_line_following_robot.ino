#define RightMotorReverse 2
#define RightMotorForward 3
#define LeftMotorReverse 4
#define LeftMotorForward 5
#define leftIR 6
#define rightIR 7

void setup() {
  pinMode(RightMotorReverse,OUTPUT);
  pinMode(RightMotorForward,OUTPUT);
  pinMode(LeftMotorReverse,OUTPUT);
  pinMode(LeftMotorForward,OUTPUT);
  pinMode(rightIR ,INPUT);
  pinMode(leftIR,INPUT);

  Serial.begin(9600);
}

void loop() {
  if (digitalRead(rightIR) == LOW && digitalRead(leftIR) == HIGH )  //RIGHT
  {
    digitalWrite(LeftMotorForward, LOW);
    digitalWrite(RightMotorForward, HIGH);
  }
  else if (digitalRead(rightIR) == HIGH && digitalRead(leftIR) == LOW )  //LEFT
  {
    digitalWrite(LeftMotorForward, HIGH);
    digitalWrite(RightMotorForward,LOW);
  }
  else if (digitalRead(rightIR) == HIGH && digitalRead(leftIR) == HIGH )  //STOP
  {
    digitalWrite(LeftMotorForward,LOW);
    digitalWrite(RightMotorForward,LOW);
  }
  else if (digitalRead(rightIR) == LOW && digitalRead(leftIR) == LOW )  //FORWARD
  {
    digitalWrite(LeftMotorForward,HIGH);
    digitalWrite(RightMotorForward,HIGH);
  }
  

}
