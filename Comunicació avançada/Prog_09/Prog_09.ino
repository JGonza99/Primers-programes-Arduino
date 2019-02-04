/**********************************************************************************
**                                                                               **
**                      Comunicació sèrie avançada                               **
**                                                                               **
**  NOM: Josep González Martínez                                DATA:21/01/2019  **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int num;

//********** Setup ****************************************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra un número?");
}

void loop() {
  while (Serial.available() > 0) {  
    num = Serial.parseInt();
    Serial.print("El ");
    Serial.print(num);
   
  } 

    if (Serial.read() == '\n') {
      {
        if (num%2==0);
        Serial.println(" és parell");
      }
    }

      else
      {
        Serial.println(" és senar");
      }
    }

    
