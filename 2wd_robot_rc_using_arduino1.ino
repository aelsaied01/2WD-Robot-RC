int ena=5;
int enb=10;
int rm1=7;
int rm2=6;
int lm1=9;
int lm2=8;
void setup()
{
 for(int i=5;i<11;i++)
 {pinMode(i, OUTPUT);}
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()>0){
char reading=Serial.read();
switch(reading)
{case 'f':
 analogWrite(ena,155);
  digitalWrite(rm1,1);
  digitalWrite(rm2,0);
  analogWrite(enb,155);
  digitalWrite(lm1,1);
  digitalWrite(lm2,0);
  break;
  
 case 'b':
 analogWrite(ena,155);
  digitalWrite(rm1,0);
  digitalWrite(rm2,1);
  analogWrite(enb,155);
  digitalWrite(lm1,0);
  digitalWrite(lm2,1);
  break;
 
 case 'r':
 analogWrite(ena,0);
  digitalWrite(rm1,0);
  digitalWrite(rm2,0);
  analogWrite(enb,155);
  digitalWrite(lm1,1);
  digitalWrite(lm2,0);
  break;
 
 case 'l':
 analogWrite(ena,155);
  digitalWrite(rm1,1);
  digitalWrite(rm2,0);
  analogWrite(enb,0);
  digitalWrite(lm1,0);
  digitalWrite(lm2,0);
  break;
 
 case 's':
 analogWrite(ena,155);
  digitalWrite(rm1,0);
  digitalWrite(rm2,0);
  analogWrite(enb,155);
  digitalWrite(lm1,0);
  digitalWrite(lm2,0);
  break;
}
}
}