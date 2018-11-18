const int buzzer=13;     // pin 3 is the buzzer output
const int HASOBSTRACLE=A0; // pin 4 is the pushbutton input
void setup() 
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
 pinMode(buzzer,OUTPUT);    //configure pin 4 as OUTPUT
  pinMode(A0,INPUT); //configure pin 4 as INPUT

}
void loop()
{
  int sensor1_value=analogRead(A0);   //read the output of both sensors and compare to the threshold value
  if (sensor1_value>400&&analogRead (A0)== HIGH)
  {
    while(true)
    {
       digitalWrite(13,HIGH);       //sets the alarm ON
      if(analogRead (A0)== HIGH)
      
      
      break;
    }
  } 
  else
  analogWrite(13,LOW); //turn off alarm 

{
  digitalWrite(2,HIGH);

digitalWrite(3,LOW);

digitalWrite(4,HIGH);

digitalWrite(5,LOW);

delay(2000);
digitalWrite(2,LOW);

digitalWrite(3,HIGH);

digitalWrite(4,LOW);

digitalWrite(5,HIGH);
delay(20000);}
}
