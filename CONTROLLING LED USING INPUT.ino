const int led1=12, led2=13, led3=11, led4=10;
char a;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);  
  pinMode(led4, OUTPUT); 
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    a= Serial.read();  
  }
   if (a=='1')
  {
    digitalWrite(led1, HIGH);
    Serial.println(a);
  }
   if (a=='2')
  {
    digitalWrite(led2, HIGH);
    Serial.println(a);
  }
   if (a=='3')
  {
    digitalWrite(led3, HIGH);
    Serial.println(a);
  }
   if (a=='4')
  {
    digitalWrite(led4, HIGH);
    Serial.println(a);
  }
  else if(a=='0')
  {
    Serial.println("OFF");  
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    
  }
  delay(1000);
}
