const int a=13;
char x='0';

void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    x=Serial.read();
  }
  if(x=='1')
  {
    digitalWrite(a,HIGH);
   
  }
  else if(x=='0')
  {
    digitalWrite(a,LOW);
  }
  else if (x!='1' and x!='0')
  {
    digitalWrite(a,LOW);
    delay(100);
    digitalWrite(a,HIGH);
    delay(100);
  }
 
  

}
