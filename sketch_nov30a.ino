//const int led = 13;
const int btn = 2, btn2 = 3 , btn3 = 4;

void setup() {
  // put your setup code here, to run once:
  //pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
/*  digitalWrite(LED_BUILTIN, HIGH)      
  Serial.print("LED ON");   
  digitalWrite(LED_BUILTIN, LOW);    
  Serial.println("LED OFF");*/
  bool state1 = digitalRead(btn);
  bool state2 = digitalRead(btn2);
  bool state3 = digitalRead(btn3);
  if ((btn, HIGH) and (btn2, HIGH)  and (btn3, HIGH))
  {
   Serial.println("ALL BUTTON ARE PRESSED");
  }
  else if ((btn, HIGH) and (btn2, LOW)  and (btn3, HIGH)){
    if((btn, HIGH) and (btn2, HIGH)  and (btn3, LOW))
  }
    (
    (btn, HIGH) and (btn2, LOW)  and (btn3, HIGH))or ( or ((btn, LOW) and (btn2, HIGH)  and (btn3, HIGH)))
  {
   Serial.println("TWO BUTTON ARE PRESSED"); 
  }
   else if(((btn, HIGH) and (btn2, LOW)  and (btn3, LOW))or ((btn, LOW) and (btn2, HIGH)  and (btn3, LOW)) or ((btn, LOW) and (btn2, LOW)  and (btn3, HIGH)))
  {
   Serial.println("ONE BUTTON IS PRESSED"); 
  }
  else
  {
   
   Serial.println("NONE IS PRESSSED"); 

  }
  
  
  


}
