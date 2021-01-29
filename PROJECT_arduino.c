int count = 1;
int mode = 0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(A4, OUTPUT);
  
  pinMode(A3, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A0, OUTPUT);
  
}

void loop()
{
  if( mode == 0)
  {
  if(count == 1)
  {
  
 	//case-1
  
    digitalWrite(13, HIGH);
  	digitalWrite(10, HIGH);
  	digitalWrite(7, HIGH);
  	digitalWrite(2, HIGH);
  
  	delay(3000);
    
    digitalWrite(6, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    delay(300);
    digitalWrite(6, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    delay(300);
    digitalWrite(6, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    delay(300);


  


    count++;
 
  }
  
  else if(count == 2)
  {
  
  //case-2
    
     digitalWrite(7, LOW);
  	digitalWrite(13, HIGH);
  	digitalWrite(10, HIGH);
  	digitalWrite(5, HIGH);
  	digitalWrite(2, HIGH);
  
  	delay(3000);
  

  	digitalWrite(5, LOW);

  
  	delay(1000);
    
    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    digitalWrite(3, LOW);
    delay(300);
    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);
	delay(300);
    digitalWrite(6, LOW);
    digitalWrite(3, LOW);
    delay(300);
    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    digitalWrite(3, LOW);
    delay(300);



    
    
  	
    
    count++;
  }
  
  
  else if(count == 3)
  {
  
  //case-3
  	digitalWrite(2, LOW);
  	digitalWrite(13, HIGH);
  	digitalWrite(10, HIGH);
  	digitalWrite(7, HIGH);
  	digitalWrite(4, HIGH);
  
  	delay(3000);
  

  	digitalWrite(4, LOW);
  
  	delay(1000);
    
    digitalWrite(3, HIGH);
    digitalWrite(12, HIGH);
    delay(300);
    digitalWrite(3, LOW);
    digitalWrite(12, LOW);
    delay(300);
    digitalWrite(3, HIGH);
    digitalWrite(12, HIGH);
    delay(300);
    digitalWrite(3, LOW);
    digitalWrite(12, LOW);
    delay(300);
    digitalWrite(3, HIGH);
    digitalWrite(12, HIGH);
    delay(300);
    digitalWrite(3, LOW);
    digitalWrite(12, LOW);
    delay(300);
    
    count++;
  }
  
    else if(count == 4)
  {
  
  //case-4
  	digitalWrite(13, LOW);
  	digitalWrite(11, HIGH);
  	digitalWrite(10, HIGH);
  	digitalWrite(7, HIGH);
  	digitalWrite(2, HIGH);
  
  	delay(3000);
  
  	digitalWrite(11, LOW);

  
  	delay(1000);
    
    digitalWrite(12, HIGH);
    digitalWrite(9, HIGH);
    delay(300);
    digitalWrite(12, LOW);
    digitalWrite(9, LOW);
    delay(300);
    digitalWrite(12, HIGH);
    digitalWrite(9, HIGH);  
    delay(300);
    digitalWrite(12, LOW);
    digitalWrite(9, LOW);
    delay(300);
    digitalWrite(12, HIGH);
    digitalWrite(9, HIGH);
    delay(300);
    digitalWrite(12, LOW);
    digitalWrite(9, LOW);
    delay(300);
    
    count++;
  }
  
    else if(count == 5)
  {
  
  //case-5
      
      
    digitalWrite(10, LOW);
  	digitalWrite(13, HIGH);
  	digitalWrite(8, HIGH);
  	digitalWrite(7, HIGH);
  	digitalWrite(2, HIGH);
  
  	delay(3000);
  

  	digitalWrite(8, LOW);

  
  	delay(1000);
    
    digitalWrite(9, HIGH);
    delay(300);
    digitalWrite(9, LOW);
    delay(300);
    digitalWrite(9, HIGH);
    delay(300);
    digitalWrite(9, LOW);
    delay(300);
    digitalWrite(9, HIGH);
    delay(300);
    digitalWrite(9, LOW);
    delay(300);
    
    

   	mode++;
    count = 1; 
    
  }
  
  }
  
  else
  {
  
  if(count == 1)
  {
  
 	//case-1
  
    digitalWrite(13, HIGH);
  	digitalWrite(10, HIGH);
  	digitalWrite(7, HIGH);
  	digitalWrite(2, HIGH);
  	digitalWrite(A0, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, HIGH);
  	delay(3000);
  	
    
    digitalWrite(A0, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, HIGH);
   	delay(300);
    digitalWrite(A0, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A3, LOW);
    delay(300);
 	digitalWrite(A0, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, HIGH);
   	delay(300);
    digitalWrite(A0, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A3, LOW);   
    delay(300);
    digitalWrite(A0, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, HIGH);
   	delay(300);
    digitalWrite(A0, LOW);
    digitalWrite(A1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(A3, LOW);
    delay(300);

    count++;
 
  }
  
  else if(count == 2)
  {
  
  //case-2
    digitalWrite(A0, HIGH);
  	digitalWrite(7, HIGH);
  	digitalWrite(13, HIGH);
  	digitalWrite(10, HIGH);
  	digitalWrite(5, HIGH);
    digitalWrite(A5, HIGH);
    digitalWrite(2, HIGH);
  
  	delay(3000);
    
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    delay(300);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    delay(300);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    delay(300);
    
    digitalWrite(7, LOW);
    digitalWrite(A5, LOW);
    digitalWrite(A4, HIGH);
    
    delay(3000);
    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    digitalWrite(3, LOW);
    delay(300);
    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    digitalWrite(3, LOW);
    delay(300);
    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    digitalWrite(3, LOW);
    delay(300);
    
    digitalWrite(A0, LOW);
    
    
    
    
    
    count++;
  }
  
  
  else if(count == 3)
  {
  
  //case-3
    digitalWrite(A2, HIGH);
  	digitalWrite(5, LOW);
  	digitalWrite(13, HIGH);
  	digitalWrite(10, HIGH);
  	digitalWrite(7, HIGH);
  	digitalWrite(4, HIGH);
    digitalWrite(2, HIGH);
    
  
  	delay(3000);

    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    digitalWrite(3, LOW);
    delay(300);
    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    digitalWrite(3, LOW);
    delay(300);
    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    digitalWrite(3, LOW);
    delay(300);
   
    
    digitalWrite(A4, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    delay(3000);
    
    digitalWrite(3, HIGH);
    digitalWrite(12, HIGH);
    delay(300);
    digitalWrite(3, LOW);
    digitalWrite(12, LOW);
    delay(300);
    digitalWrite(3, HIGH);
    digitalWrite(12, HIGH);
    delay(300);
    digitalWrite(3, LOW);
    digitalWrite(12, LOW);
    delay(300);
    digitalWrite(3, HIGH);
    digitalWrite(12, HIGH);
    delay(300);
    digitalWrite(3, LOW);
    digitalWrite(12, LOW);
    delay(300);
    
    digitalWrite(A2, LOW);
    count++;
  }
  
    else if(count == 4)
  {
  
  //case-4
    digitalWrite(A3, HIGH);
    digitalWrite(4, LOW);  
  	digitalWrite(13, HIGH);
  	digitalWrite(11, HIGH);
  	digitalWrite(10, HIGH);
  	digitalWrite(7, HIGH);
  	digitalWrite(2, HIGH);
  
  	delay(3000);
      
    digitalWrite(3, HIGH);
    digitalWrite(12, HIGH);
    delay(300);
    digitalWrite(3, LOW);
    digitalWrite(12, LOW);
    delay(300);
    digitalWrite(3, HIGH);
    digitalWrite(12, HIGH);
    delay(300);
    digitalWrite(3, LOW);
    digitalWrite(12, LOW);
    delay(300);
    digitalWrite(3, HIGH);
    digitalWrite(12, HIGH);
    delay(300);
    digitalWrite(3, LOW);
    digitalWrite(12, LOW);
    delay(300);
  	
      
    digitalWrite(1, LOW);
    digitalWrite(13, LOW);
    digitalWrite(0, HIGH);  
  	delay(3000);
    
    
    digitalWrite(9, HIGH);
    digitalWrite(12, HIGH);
    delay(300);
    digitalWrite(9, LOW);
    digitalWrite(12, LOW);
    delay(300);
    digitalWrite(9, HIGH);
    digitalWrite(12, HIGH);
    delay(300);
    digitalWrite(9, LOW);
    digitalWrite(12, LOW);
    delay(300);
    digitalWrite(9, HIGH);
    digitalWrite(12, HIGH);
    delay(300);
    digitalWrite(9, LOW);
    digitalWrite(12, LOW);
    delay(300);
    digitalWrite(A3, LOW);  
    count++;
  }
  
    else if(count == 5)
  {
  
  //case-5
    digitalWrite(A1, HIGH);
    digitalWrite(11, LOW);  
  	digitalWrite(10, HIGH);
  	digitalWrite(13, HIGH);
  	digitalWrite(8, HIGH);
  	digitalWrite(7, HIGH);
  	digitalWrite(2, HIGH);
  
  	delay(3000);
  	
    digitalWrite(12, HIGH);
    digitalWrite(9, HIGH);
    delay(300);
    digitalWrite(12, LOW);
    digitalWrite(9, LOW);
    delay(300);
    digitalWrite(12, HIGH);
    digitalWrite(9, HIGH);
    delay(300);
    digitalWrite(12, LOW);
    digitalWrite(9, LOW);
    delay(300);
    digitalWrite(12, HIGH);
    digitalWrite(9, HIGH);
    delay(300);
    digitalWrite(12, LOW);
    digitalWrite(9, LOW);
    delay(300);

  	
	digitalWrite(0, LOW);
    digitalWrite(10, LOW);
    digitalWrite(A5, HIGH);  
  
  	delay(3000);
    
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    delay(300);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    delay(300);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    delay(300);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    delay(300);
      
    digitalWrite(8, LOW);
    digitalWrite(A1, LOW);
    
    count=1;
  }
 }
  
}