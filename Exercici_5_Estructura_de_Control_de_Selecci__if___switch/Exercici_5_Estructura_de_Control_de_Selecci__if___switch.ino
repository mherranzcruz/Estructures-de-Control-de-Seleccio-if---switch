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
float VC = 3; //Valor de la certificació
//*****************************SETUP******************************

void setup()//Configura el final de salida
{ 
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (VC <3.5)
  {
    Serial.print("A");
  }
  else if (VC >= 3.5 && VC <6.5)
  {
    Serial.print("B");
  }
  else if (VC >= 6.5 && VC <11.1)
  {
    Serial.print("C");
  }
   else if (VC >= 11.1 && VC <17.7)
  {
    Serial.print("D");
  }
   else if (VC >= 17.7 && VC <38.2)
  {
    Serial.print("E");
  }
   else if (VC >= 38.2 && VC <43.2)
  {
    Serial.print("F");
  }
   else if (VC >= 43.2 )
  {
    Serial.print("G");
  }
}

void loop(){}
