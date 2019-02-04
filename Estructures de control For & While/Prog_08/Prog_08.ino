/**********************************************************************************
**                                                                               **
**                              For and While                                    **
**                                                                               **
**  NOM: Josep González Martínez                                DATA:21/01/2019  **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
float r1, r2;             
float rSerie, rParalel;
//********** Setup ****************************************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}

void loop() {
  while (Serial.available() > 0) {  
    r1 = Serial.parseInt();
    Serial.print("r1= ");
    Serial.print(r1);
    Serial.print("ohms");   
    r2 = Serial.parseInt();
    Serial.print("         r2=");
    Serial.print(r2);
    Serial.println("ohms");
    if (Serial.read() == '\n') {
      rSerie= r1+r2;
      Serial.print("rSerie= ");
      Serial.print(rSerie);
      Serial.print("ohms");

      rParalel= (r1*r2)/(r1+r2);
      Serial.print("         rParalel= ");
      Serial.print(rParalel);
      Serial.println("ohms");
      Serial.println();

           Serial.println("Entra nous valors per r1 i r2.");
           Serial.println();

    }
  }
}
