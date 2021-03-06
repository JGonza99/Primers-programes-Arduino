/**********************************************************************************
**                                                                               **
**                        Tipus de dades i Operadors                             **
**                                                                               **
**  NOM: Josep González Martínez                                DATA:10/12/2018  **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int drive_gb = 100;
long drive_mb, drive_kb, real_drive_mb, real_drive_kb, missing_drive_kb;
//********** Setup ****************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb=drive_gb;
  drive_mb=drive_mb*1024;

  Serial.print("In theory, it can store ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");
  
  drive_kb=drive_mb*1024;
  Serial.print(drive_kb);

  Serial.println(" Kilobytes.");
  Serial.print("But it really only stores ");
  real_drive_mb=drive_gb;
  real_drive_mb=real_drive_mb*1000;
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes, ");
  real_drive_kb=real_drive_mb;
  real_drive_kb=real_drive_kb*1000;
  Serial.print(real_drive_kb);
  Serial.println(" Kilobytes.");

  Serial.print("You are missing ");

  missing_drive_kb=drive_kb-real_drive_kb;
  Serial.print(missing_drive_kb);
  Serial.print(" Kilobytes!");
  
  

  
  
  
 
}


//********** Loop *****************************************************************
void loop()
{



}
