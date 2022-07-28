 int led1=13;
 int led2=12;
 int led3=10;
 int led4=9;
 int led5=8;
 int led6=7;
 int led7=6;
 int led8=3;

void setup() 
{
 //pinMode(pin,mode);
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(3,OUTPUT);
  
}

void loop()
{
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led2,HIGH);
  delay(900);
  digitalWrite(led3,HIGH);
  delay(800);
  digitalWrite(led4,HIGH);
  delay(700);
  digitalWrite(led5,HIGH);
  delay(600);
  digitalWrite(led6,HIGH);
  delay(500);
  digitalWrite(led7,HIGH);
  delay(400);
  digitalWrite(led8,HIGH);
  delay(300);
  digitalWrite(led1,LOW);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(900);
  digitalWrite(led3,LOW);
  delay(800);
  digitalWrite(led4,LOW);
  delay(700);
   digitalWrite(led5,LOW);
  delay(600);
  digitalWrite(led6,LOW);
  delay(500);
  digitalWrite(led7,LOW);
  delay(400);
  digitalWrite(led8,LOW);
  delay(300);
  
 }
