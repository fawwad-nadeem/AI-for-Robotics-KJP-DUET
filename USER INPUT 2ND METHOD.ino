char data1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    data1=Serial.read();
   
  }
  Serial.print(data1);
  delay(1000);
}
