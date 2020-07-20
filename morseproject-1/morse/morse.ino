int ledout = 4;
int touchin = 3;
int durum = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledout,OUTPUT);
  pinMode(touchin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  durum = digitalRead(touchin);
  if(durum == HIGH){
    morse(1,2,0,0,0);
  }
}
void morse(int d1,int d2, int d3, int d4, int d5){
  digitalWrite(ledout,HIGH);
  delay(d1*500);
  digitalWrite(ledout,LOW);
  delay(100);
  digitalWrite(ledout,HIGH);
  delay(d2*500);
  digitalWrite(ledout,LOW);
  delay(100);
  digitalWrite(ledout,HIGH);
  delay(d3*500);
  digitalWrite(ledout,LOW);
  delay(100);
  digitalWrite(ledout,HIGH);
  delay(d4*500);
  digitalWrite(ledout,LOW);
  delay(100);
  digitalWrite(ledout,HIGH);
  delay(d5*500);
  digitalWrite(ledout,LOW);
  delay(100);
}
