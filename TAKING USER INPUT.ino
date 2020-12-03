int btn1=2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(btn1, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  bool state1=digitalRead(btn1);
  Serial.println(state1);

}
