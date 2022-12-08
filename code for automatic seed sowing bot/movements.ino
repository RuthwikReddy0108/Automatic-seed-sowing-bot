int IN1 = 2;
int IN2 = 3;
int IN3 = 4;
int IN4 = 5;

void setup()  
{  
      
pinMode(2,OUTPUT);  
pinMode(3,OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
     
}  
void loop()  
{  
//Forward      
digitalWrite(2,HIGH);   
digitalWrite(3,LOW);
digitalWrite(4,LOW);  
digitalWrite(5,HIGH);
delay(10000);
//Right
digitalWrite(2,LOW); 
digitalWrite(3,HIGH);
digitalWrite(4,LOW);   
digitalWrite(5,HIGH);
delay(700);
//Forward
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,LOW);   
digitalWrite(5,HIGH);   
delay(700);
//RIGHT
digitalWrite(2,LOW);
digitalWrite(3,HIGH); 
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(700); 
//FORWARD
digitalWrite(2,HIGH); 
digitalWrite(3,LOW);
digitalWrite(4,LOW);   
digitalWrite(5,HIGH); 
delay(10000); 
//LEFT
digitalWrite(5,LOW); 
digitalWrite(4,HIGH);
digitalWrite(2,HIGH); 
digitalWrite(3,LOW);
delay(700);
//FORWARD  
digitalWrite(5,HIGH);
digitalWrite(4,LOW);
digitalWrite(2,HIGH); 
digitalWrite(3,LOW);  
delay(700);
//LEFT
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
digitalWrite(2,HIGH); 
digitalWrite(3,LOW);  
delay(700);
}
