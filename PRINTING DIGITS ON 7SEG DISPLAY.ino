const int a= 13, b=12, c=11, d=10, e=9, f=8, g=7;
char x;
void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 /* digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);*/
 /* if(Serial.available())
  {
    x=Serial.read();
  }
  if(x=='1')
  {
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
  
  }
  else if( x== '2')
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(d,HIGH);
  }*/
  if(Serial.available())
  {
    x=Serial.read();
  }
  switch (x)
  {
  case '1':{
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH); 
   digitalWrite(a,LOW); 
   digitalWrite(d,LOW); 
   digitalWrite(e,LOW); 
   digitalWrite(f,LOW); 
   digitalWrite(g,LOW); 
   break; }
   case '2':
  { 
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(g,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(f,LOW); 
   digitalWrite(c,LOW); 
   break;
  }
  case '3':
  { 
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(g,HIGH);
   digitalWrite(e,LOW);
   digitalWrite(d,HIGH);
   digitalWrite(f,LOW); 
   digitalWrite(c,HIGH); 
   break;
  }
  case '4':
  { 
   digitalWrite(a,LOW);
   digitalWrite(b,HIGH);
   digitalWrite(g,HIGH);
   digitalWrite(e,LOW);
   digitalWrite(d,LOW);
   digitalWrite(f,HIGH); 
   digitalWrite(c,HIGH); 
   break;
  }
  case '5':
  { 
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
   digitalWrite(g,HIGH);
   digitalWrite(e,LOW);
   digitalWrite(d,HIGH);
   digitalWrite(f,HIGH); 
   digitalWrite(c,HIGH); 
   break;
  }
  }
}
