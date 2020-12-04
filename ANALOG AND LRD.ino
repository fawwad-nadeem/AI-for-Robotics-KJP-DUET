int x;
float   y;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  x=analogRead(A0);
  y=(x/1023.0)*5;
  Serial.println(y);
  delay(250);

}
