const byte LEDs[] = {0,1,2,3,4,5,6,7};
const byte total = sizeof(LEDs);



void setup(){
// ±N¨C­Ó Pin ³]©w¦¨¿é¥X
for (byte i=0;i<total;i++) {
pinMode(LEDs[i], OUTPUT);
}
    for(int i=0;i<8;i++)
  {
    digitalWrite(LEDs[i],LOW);

    
  }
}

void loop() {

  for(int i=0;i<8;i++)
  {
    digitalWrite(LEDs[i],HIGH); 
  }
  delay(500);
  for(int i=0;i<8;i++)
  {
    digitalWrite(LEDs[i],LOW); 
  }
  delay(500);
  for(int i=0;i<8;i++)
  {
    digitalWrite(LEDs[i],HIGH); 
  }
  delay(500);
  for(int i=0;i<8;i++)
  {
    digitalWrite(LEDs[i],LOW); 
  }
  delay(500);
  
  for(int i=0;i<8;i++)
  {
    digitalWrite(LEDs[i],HIGH);
    delay(500);
     digitalWrite(LEDs[i],LOW);
    
  }

  for(int i=0;i<8;i++)
  {
    digitalWrite(LEDs[i],HIGH); 
  }
  delay(500);
  for(int i=0;i<8;i++)
  {
    digitalWrite(LEDs[i],LOW); 
  }
  delay(500);
   for(int i=0;i<8;i++)
  {
    digitalWrite(LEDs[i],HIGH); 
  }
  delay(500);
  for(int i=0;i<8;i++)
  {
    digitalWrite(LEDs[i],LOW); 
  }
  delay(500);
 
  for(int i=8;i>=0;--i)
  {
    digitalWrite(LEDs[i],HIGH);
    delay(500);
     digitalWrite(LEDs[i],LOW);
   
  }
  delay(300);
  
}
