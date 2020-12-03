 int btn=9; int a=13,b=12,c=11,d=10;
int x=0,n=0,d1;

void setup() 
{
  // put your setup code here, to run once:

  pinMode(btn,INPUT);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  

}

void loop()
  {
  // put your main code here, to run repeatedly:
  x=digitalRead(btn);
  if (x==HIGH)
  {
    n++;
  }
  if (n==100)
  {
    n=0;
  }
  d1=n;
  disp1(d1);
  }
  void disp1(int num)
{
    if (num==0)
    {
    digitalWrite(d,LOW);
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    }
    if (num==1)
    {
    digitalWrite(d,LOW);
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    }
    if (num==2)
    {
    digitalWrite(d,LOW);
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    }
}
