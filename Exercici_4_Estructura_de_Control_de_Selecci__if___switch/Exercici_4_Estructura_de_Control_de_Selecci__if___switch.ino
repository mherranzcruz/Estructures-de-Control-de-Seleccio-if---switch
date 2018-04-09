/*****************************************************************
**                                                              **
**                        Títol:                                **
**          Posar nom representatiu del programa                **
**                                                              **
** NOM:Martin Herranz Cruz                     Data:29/01/2018  **
*****************************************************************/
//****************************INCLUDE*****************************

//else if (temperatura>=60 && temperatura<70)
//***************************VARIABLES****************************
int tempAigua = 95;
//*****************************SETUP******************************

void setup()//Configura el final de salida
{ 
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua > 100)
  {
    Serial.print("Aigua bullint");
  }
  else if (tempAigua < 90)
  {
    Serial.print("Aigua encara no Bull");
  }
  else if (tempAigua>=90 && tempAigua < 100)
  {
    Serial.print("Aigua apunt de bullir");
  }
  else if (tempAigua = 100)
  {
    Serial.print("Aigua a 100ºC");
  }
}

void loop(){}
