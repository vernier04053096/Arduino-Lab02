const byte LEDs[] = {0,1,2,3,4,5,6,7};
const byte total = sizeof(LEDs);
const byte button=13;


void setup(){
// ±N¨C­Ó Pin ³]©w¦¨¿é¥X
for (byte i=0;i<total;i++) {
pinMode(LEDs[i], OUTPUT);
}
  pinMode(button, INPUT);
    for(int i=0;i<8;i++)
  {
    digitalWrite(LEDs[i],LOW);

    
  }
}

void loop() {

 
  if(digitalRead(button)==0)
  {
  
     
  	for(int i=0;i<8;i++)
  	{
      if(digitalRead(button)==0){
    	digitalWrite(LEDs[i],HIGH);
    	delay(500);
     	digitalWrite(LEDs[i],LOW);
      }
      else
      {
      	break;
      }
      
 	 }

 	 for(int i=8;i>=0;--i)
  	{
       if(digitalRead(button)==0){
   	 	digitalWrite(LEDs[i],HIGH);
   		delay(500);
    	digitalWrite(LEDs[i],LOW);
       }
       else
       {
       	break;
       }
  	}
  }
  else
  {
  for(int i=8;i>=0;--i)
  {
    digitalWrite(LEDs[i],HIGH);
  }
    delay(500);
    for(int i=8;i>=0;--i)
  {
    digitalWrite(LEDs[i],LOW);
  }
    delay(500);
    for(int i=8;i>=0;--i)
  {
    digitalWrite(LEDs[i],HIGH);
  }
    delay(500);
    for(int i=8;i>=0;--i)
  {
    digitalWrite(LEDs[i],LOW);
  }
    delay(500);
  
  }
 }
