void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  digitalWrite(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    char a = Serial.read();
  if(a == 'a' or a == 'A'){
    morse(1,2,0,0,0,0);
  }
  else if(a == 'b' or a == 'B'){
    morse(2,1,1,1,0,0);
  }
  else if(a == 'c' or a == 'C'){
    morse(2,1,2,1,0,0);
  }
  else if(a == 'd' or a == 'D'){
    morse(2,1,1,0,0,0);
  }
  else if(a == 'e' or a == 'E'){
    morse(1,0,0,0,0,0);
  }
  else if(a == 'f' or a == 'F'){
    morse(1,1,2,1,0,0);
  }
  else if(a == 'g' or a == 'G'){
    morse(2,2,1,0,0,0);
  }
  else if(a == 'h' or a == 'H'){
    morse(1,1,1,1,0,0);
  }
  else if(a == 'i' or a == 'I'){
    morse(1,1,0,0,0,0);
  }
  else if(a == 'j' or a == 'J'){
    morse(1,2,2,2,0,0);
  }
  else if(a == 'k' or a == 'K'){
    morse(2,1,2,0,0,0);
  }
  else if(a == 'l' or a == 'L'){
    morse(1,2,1,1,0,0);
  }
  else if(a == 'm' or a == 'M'){
    morse(2,2,0,0,0,0);
  }
  else if(a == 'n' or a == 'N'){
    morse(2,1,0,0,0,0);
  }
  else if(a == 'o' or a == 'O'){
    morse(2,2,2,0,0,0);
  }
  else if(a == 'p' or a == 'P'){
    morse(1,2,2,1,0,0);
  }
  else if(a == 'q' or a == 'Q'){
    morse(2,2,1,2,0,0);
  }
  else if(a == 'r' or a == 'R'){
    morse(1,2,1,0,0,0);
  }
  else if(a == 's' or a == 'S'){
    morse(1,1,1,0,0,0);
  }
  else if(a == 't' or a == 'T'){
    morse(2,0,0,0,0,0);
  }
  else if(a == 'u' or a == 'U'){
    morse(1,1,2,0,0,0);
  }
  else if(a == 'v' or a == 'V'){
    morse(1,1,1,2,0,0);
  }
  else if(a == 'w' or a == 'W'){
    morse(1,2,2,0,0,0);
  }
  else if(a == 'x' or a == 'X'){
    morse(2,1,1,2,0,0);
  }
  else if(a == 'y' or a == 'Y'){
    morse(2,1,2,2,0,0);
  }
  else if(a == 'z' or a == 'Z'){
    morse(2,2,1,1,0,0);
  }
   else if(a == '1'){
    morse(1,2,2,2,2,0);
  }
   else if(a == '2'){
    morse(1,1,2,2,2,0);
  }
   else if(a == '3'){
    morse(1,1,1,2,2,0);
  }
   else if(a == '4'){
    morse(1,1,1,1,2,0);
  }
  else if(a == '5'){
    morse(1,1,1,1,1,0);
  }
   else if(a == '6'){
    morse(2,1,1,1,1,0);
  }
   else if(a == '7'){
    morse(2,2,1,1,1,0);
  }
   else if(a == '8'){
    morse(2,2,2,1,1,0);
  }
   else if(a == '9'){
    morse(2,2,2,2,1,0);
  }
   else if(a == '0'){
    morse(2,2,2,2,2,0);
  }
  
  }
}
void morse(int h1, int h2, int h3, int h4, int h5, int h6){
  digitalWrite(4,HIGH);
  delay(h1*500);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(4,HIGH);
  delay(h2*500);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(4,HIGH);
  delay(h3*500);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(4,HIGH);
  delay(h4*500);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(4,HIGH);
  delay(h5*500);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(4,HIGH);
  delay(h6*500);
  digitalWrite(4,LOW);
  delay(3000);
}
