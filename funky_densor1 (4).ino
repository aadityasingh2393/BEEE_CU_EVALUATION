void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, INPUT);
  int value=analogRead(A0);
  if(value<=500)
  {
    int switch_state=digitalRead(7);
    if(switch_state==HIGH)
    {
      digitalWrite(13,HIGH);
      delay(500);
      digtalWrite(13,LOW);
      delay(500);
       digitalWrite(12,HIGH);
      delay(500);
      digtalWrite(12,LOW);
      delay(500);
       digitalWrite(11,HIGH);
      delay(500);
      digtalWrite(11,LOW);
      delay(500);
       digitalWrite(10,HIGH);
      delay(500);
      digtalWrite(10,LOW);
      delay(500);
       digitalWrite(9,HIGH);
      delay(500);
      digtalWrite(9,LOW);
      delay(500);
       digitalWrite(8,HIGH);
      delay(500);
      digtalWrite(8,LOW);
      delay(500);
    }
   else
   { digitalWrite(13,HIGH);
      delay(1000);
      digtalWrite(13,LOW);
      delay(500);
       digitalWrite(12,HIGH);
      delay(1000);
      digtalWrite(12,LOW);
      delay(500);
       digitalWrite(11,HIGH);
      delay(1000);
      digtalWrite(11,LOW);
      delay(500);
       digitalWrite(10,HIGH);
      delay(1000);
      digtalWrite(10,LOW);
      delay(500);
       digitalWrite(9,HIGH);
      delay(1000);
      digtalWrite(9,LOW);
      delay(500);
       digitalWrite(8,HIGH);
      delay(1000);
      digtalWrite(8,LOW);
      delay(500);
   }
  }
    
      
}