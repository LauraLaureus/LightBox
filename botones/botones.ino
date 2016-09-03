
void setup()  
{
Serial.begin(9600);
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
digitalWrite(2,HIGH); 
digitalWrite(3,HIGH); 
digitalWrite(4,HIGH); 
}

void loop() 
{
 if(digitalRead(2) == LOW) Serial.println("Boton 1");
 if(digitalRead(3) == LOW) Serial.println("Boton 2");
 if(digitalRead(4) == LOW) Serial.println("Boton 3");
 delay(300);
}
