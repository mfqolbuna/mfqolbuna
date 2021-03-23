int p=10;
int p1=9;
int p2=6;
int p3=5;

int led2=8;
int led3=7;
int led1=13;

int m1=A0;
int m2=A1;
int m3=A2;
int m4=A3;

void setup() {
pinMode (p, OUTPUT);
pinMode (p1, OUTPUT);
pinMode (p2, OUTPUT);
pinMode (p3, OUTPUT);
  
pinMode (led2, OUTPUT);
pinMode (led3, OUTPUT);
pinMode (led1, OUTPUT);

pinMode (m1, INPUT);
pinMode (m2, INPUT);
pinMode (m3, INPUT);
pinMode (m4, INPUT);
}

void loop () {
  if (digitalRead(m1)==1){
  digitalWrite(p,HIGH); // belok kiri
      digitalWrite(led2,HIGH);
      digitalWrite(led1,LOW);
      digitalWrite(led3,LOW);
  }
else if (digitalRead(m2)==1){
  digitalWrite(p1,HIGH); // maju
  digitalWrite(p2,HIGH);
        digitalWrite(led2,LOW);
        digitalWrite(led1,HIGH);
        digitalWrite(led3,LOW);
}
else if (digitalRead(m3)==1){
  digitalWrite(p,HIGH); // mundur
  digitalWrite(p3,HIGH);
        digitalWrite(led2,LOW);
        digitalWrite(led1,HIGH); 
        digitalWrite(led3,LOW);
}
else if (digitalRead(m4)==1){
  digitalWrite(p3,HIGH); // belok kanan
        digitalWrite(led2,LOW);
        digitalWrite(led1,LOW); 
        digitalWrite(led3,HIGH);
}
else {
  digitalWrite(p,LOW);
  digitalWrite(p1,LOW);
  digitalWrite(p2,LOW);
  digitalWrite(p3,LOW);
  }
}
