int s1;
int s2;
int s3;
int s4;
//2,5,8,11----green
//3,6,9.12----Blue
//4,7,10,13---red
void setup() {
  // put your setup code here, to run once:

pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);

pinMode(34,INPUT);
pinMode(35,INPUT);
pinMode(36,INPUT);
pinMode(37,INPUT);

Serial.begin(9600);

}

void loop() 
{

//SENSOR VALUES

s1=digitalRead(34);
s2=digitalRead(35);
s3=digitalRead(36);
s4=digitalRead(37);
Serial.println(s1);
Serial.println(s2);
Serial.println(s3);
Serial.println(s4);

// FIXED TIME

// nothing detected

if(s1==1 & s2==1 &  s3==1 & s4==1)
{
  Serial.println("fixed time");
   delay(5000);
  
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);

 
  

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,LOW);
  
 

   delay(5000);
}

//all detected

if(s1==0 & s2==0 &  s3==0 & s4==0)
{
  Serial.println("fixed time");
  digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);

   delay(4000);
  
   digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);
  
    delay(8000);

   digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);

   digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH); 
   
   delay(4000);

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(8000);

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH); 

   delay(4000);

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH); 

   delay(8000);

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,HIGH);
   digitalWrite(13,LOW);

   delay(4000);

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,HIGH);
   digitalWrite(12,LOW);
   digitalWrite(13,LOW);

   delay(8000);

   digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,HIGH);
   digitalWrite(12,LOW);
   digitalWrite(13,LOW);

   delay(5000);
}

//s1 detects high

else if(s1==0 & s2==1 &  s3==1 & s4==1)
{
  Serial.println("s1 detects high");
   digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);

   delay(4000);
  
   digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(5000);
}

//s2 detects high

else if(s1==1 & s2==0 &  s3==1 & s4==1)
{
   Serial.println("s2 detects high");
   digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(7,LOW);

   delay(4000);
  

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(5000);
}

//s3 detects high

else if(s1==1 & s2==1 &  s3==0 & s4==1)
{
    Serial.println("s3 detects high");
    digitalWrite(8,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);

   delay(4000);
  

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(5000);
}

//s4 detects high

else if(s1==1 & s2==1 &  s3==1 & s4==0)
{
    Serial.println("s4 detects high");
    digitalWrite(11,LOW);
   digitalWrite(12,HIGH);
   digitalWrite(13,LOW);

   delay(4000);
  

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,HIGH);
   digitalWrite(12,LOW);
   digitalWrite(13,LOW);

   delay(5000);
}

// s1 and s2

else if(s1==0 & s2==0 &  s3==1 & s4==1)
{
    Serial.println("s1 and s2 detects high");
    digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);

   delay(4000);
  

   digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(8000);
   
   digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);

   digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(4000);

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(5000);


}

// S2 AND S3

else if(s1==1 & s2==0 &  s3==0 & s4==1)
{
  Serial.println("s2 and s3 detects high");
  digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(7,LOW);

   delay(4000);
  
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(8000);
   
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(4000);

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(5000);

}

// S3 AND S4

else if(s1==1 & s2==1 &  s3==0 & s4==0)
{
  Serial.println("s3 and s4 detects high");
  digitalWrite(8,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);

   delay(4000);
  
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(8000);
   
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,HIGH);
   digitalWrite(13,LOW);

   delay(4000);

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,HIGH);
   digitalWrite(12,LOW);
   digitalWrite(13,LOW);

   delay(5000);

}

// S1 AND S4

else if(s1==0 & s2==1 &  s3==1 & s4==0)
{
  Serial.println("s1 and s4 detects high");
  digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);

   delay(4000);
  
   digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(8000);
   
   digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,HIGH);
   digitalWrite(13,LOW);

   delay(4000);

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,HIGH);
   digitalWrite(12,LOW);
   digitalWrite(13,LOW);

   delay(5000);

}

// S1 AND S3

else if(s1==0 & s2==1 &  s3==0 & s4==1)
{
  Serial.println("s1 and s3 detects high");
  digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);

   delay(4000);
  
   digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(8000);
   
   digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(4000);

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(5000);

}

// S2 AND S4

else if(s1==1 & s2==0 &  s3==1 & s4==0)
{
  Serial.println("s2 and s4 detects high");
  digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(7,LOW);

   delay(4000);
  
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(8000);
   
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,HIGH);
   digitalWrite(13,LOW);

   delay(4000);

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,HIGH);
   digitalWrite(12,LOW);
   digitalWrite(13,LOW);

   delay(5000);

}

// S1 , S2 AND S3

else if(s1==0 & s2==0 &  s3==0 & s4==1)
{
  Serial.println("s1 and s2 and s3 detects high");
  digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);

  delay(4000);

   digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(8000);
   
   digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);

   digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(4000);

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(8000);
  
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(4000);
  
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(5000);
}

// S2 S3 AND S4

else if(s1==1 & s2==0 &  s3==0 & s4==0)
{
  Serial.println("s2 and s3 and s4 detects high");
  digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(7,LOW);

   delay(4000);
  
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(8000);
   
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(4000);

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(8000);
  
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,HIGH);
   digitalWrite(13,LOW);

   delay(4000);
  
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,HIGH);
   digitalWrite(12,LOW);
   digitalWrite(13,LOW);

   delay(5000);
}

// S3,S4 AND S1

else if(s1==0 & s2==1 &  s3==0 & s4==0)
{
  Serial.println("s3 and s4 and s1 detects high");
  digitalWrite(8,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);

   delay(4000);
  
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(8000);
   
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);

   digitalWrite(11,LOW);
   digitalWrite(12,HIGH);
   digitalWrite(13,LOW);

   delay(4000);

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,HIGH);
   digitalWrite(12,LOW);
   digitalWrite(13,LOW);

   delay(8000);
  
   digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,HIGH);
   digitalWrite(12,LOW);
   digitalWrite(13,LOW);

   delay(4000);
  
   digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(5000);
}

// S1 S4 AND S2

else if(s1==0 & s2==0 &  s3==1 & s4==0)
{
  Serial.println("s1 and s4 and s2 detects high");
  digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);

   delay(4000);
  
   digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(8000);
   
   digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,HIGH);
   digitalWrite(13,LOW);

   delay(4000);

   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,HIGH);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,HIGH);
   digitalWrite(12,LOW);
   digitalWrite(13,LOW);

   delay(8000);
  
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,HIGH);
   digitalWrite(12,LOW);
   digitalWrite(13,LOW);

   delay(4000);
  
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,HIGH);

   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);

   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,HIGH);

   delay(5000);
}


}
