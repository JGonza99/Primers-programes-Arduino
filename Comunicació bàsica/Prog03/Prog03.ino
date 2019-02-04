/**********************************************************************************
**                                                                               **
**                               Hello World                                     **
**                                                                               **
** Josep Gonzalez Martínez                                                       **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.println("Escull el numero de l'operacio que vols realitzar?");
  Serial.println("  1. Comprovar numero de tarjeta de credit");
  delay(500);
  Serial.println("  2. Comprovar numero de compte bancari");
  delay(500);
  Serial.print("  3. Buscar un digit perdut de tarjeta de credit");
  delay(500);
}

//********** Loop *****************************************************************

//********** Funcions *************************************************************
