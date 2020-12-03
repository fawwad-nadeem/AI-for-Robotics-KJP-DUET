const int btn1=4, btn2=3, btn3=4;
void setup() {
  // put your setup code here, to run once:
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(btn3, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  bool state1= digitalRead(btn1);
  bool state2= digitalRead(btn2);
  bool state3= digitalRead(btn3);
 /* else if(((btn1, LOW) and (btn2,HIGH) and (btn3,HIGH)) or ((btn1, HIGH) and (btn2,LOW) and (btn3,HIGH)) or ((btn1, HIGH) and (btn2,HIGH) and (btn3,LOW)))
  {
    Serial.println("TWO BUTTON ARE PRESSED");
  }
  else if(((btn1, LOW) and (btn2,LOW) and (btn3,HIGH)) or ((btn1, HIGH) and (btn2,LOW) and (btn3,LOW)) or ((btn1, LOW) and (btn2,HIGH) and (btn3,LOW)))
  {
   Serial.println("ONE BUTTON IS PRESSED");
  }
  else
  {
    Serial.println("NO BUTTON IS PRESSED");
  }*/
   if (state1 and !state2 and !state3)
  {
    Serial.println("ONE BUTTON IS PRESSED");
  }
   else if (!state1 and state2 and !state3)
  {
    Serial.println("ONE BUTTON IS PRESSED");
  }
   else if (!state1 and !state2 and state3)
  {
    Serial.println("ONE BUTTON IS PRESSED");
  }
   else if (!state1 and state2 and state3)
  {
    Serial.println("TWO BUTTON ARE PRESSED");
  }
   else if (state1 and !state2 and state3)
  {
    Serial.println("TWO BUTTON ARE PRESSED");
  }
   else if (state1 and state2 and !state3)
  {
    Serial.println("TWO BUTTON ARE PRESSED");
  }
   else if (state1 and state2 and state3)
  {
    Serial.println("ALL BUTTON ARE PRESSED");
  }
  else
  {
    Serial.println("NO BUTTON IS PRESSED");
  }
  delay(100);
}
