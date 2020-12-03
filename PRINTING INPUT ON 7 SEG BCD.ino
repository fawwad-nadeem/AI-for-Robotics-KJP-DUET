const int a=13,b=12,c=11,d=10 ;
char x;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    x=Serial.read();
    
  }
  if(x=='1')
  {
    digitalWrite(d,HIGH);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
  }
   if(x=='2')
  {
    digitalWrite(d,LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
  }
   if(x=='3')
  {
    digitalWrite(d,HIGH);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
  }
   if(x=='4')
  {
    digitalWrite(d,LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
  }

}
