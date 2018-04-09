/*****************************************************************
**                                                              **
**                        Títol:                                **
**          Posar nom representatiu del programa                **
**                                                              **
** NOM:Martin Herranz Cruz                     Data:29/01/2018  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
int tempAigua = 101;
//*****************************SETUP******************************

void setup() {                 //Configura el final de salida
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  }
}

void loop(){}
