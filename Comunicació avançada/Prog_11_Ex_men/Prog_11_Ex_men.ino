/**********************************************************************************
**                                                                               **
**                                   Control                                     **
**                                                                               **
**  NOM: Josep González Martínez                                DATA:04/02/2019  **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
long DNI;
float lletra;

//********** Setup ****************************************************************
void setup() { 
  Serial.begin(9600);        
  Serial.println("Entra el teu DNI:");
}

void loop() {
  while (Serial.available() > 0) {  
    DNI = Serial.parseInt();
    Serial.print("Al document ");
    Serial.print(DNI);
   
   

    if (Serial.read() == '\n') {
      Serial.print(" li pertoca la lletra ");
     
      lletra = DNI % 23;
      
       if (lletra == 0)
      {
        Serial.println("T");      
      }
       else if (lletra == 1)
      {
        Serial.println("R");
      }
       else if (lletra == 2)
      {
        Serial.println("W");      
      }
       else if (lletra == 3)
      {
        Serial.println("A");      
      }
       else if (lletra == 4)
      {
        Serial.println("G");      
      }
       else if (lletra == 5)
      {
        Serial.println("M");      
      }
       else if (lletra == 6)
      {
        Serial.println("Y");      
      }
       else if (lletra == 7)
      {
        Serial.println("F");      
      }
       else if (lletra == 8)
      {
        Serial.println("P");      
      }
       else if (lletra == 9)
      {
        Serial.println("D");      
      }
       else if (lletra == 10)
      {
        Serial.println("X");      
      }
       else if (lletra ==11)
      {
        Serial.println("B");      
      }
       else if (lletra == 12)
      {
        Serial.println("N");      
      }
       else if (lletra == 13)
      {
        Serial.println("J");      
      }
       else if (lletra == 14)
      {
        Serial.println("Z");      
      }
       else if (lletra == 15)
      {
        Serial.println("S");      
      }
       else if (lletra == 16)
      {
        Serial.println("Q");      
      }
       else if (lletra == 17)
      {
        Serial.println("V");      
      }
       else if (lletra == 18)
      {
        Serial.println("H");      
      }
       else if (lletra == 19)
      {
        Serial.println("L");      
      }
       else if (lletra == 20)
      {
        Serial.println("C");      
      }
       else if (lletra == 21)
      {
        Serial.println("K");      
      }
      else
      {
        Serial.println("E");
      }
      Serial.println();
      Serial.println("Entra el teu DNI:");
    }
  }
}


 
        

    
