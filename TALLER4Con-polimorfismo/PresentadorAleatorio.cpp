/*
  Archivo: PresentadorAleatorio.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-10-24
  Fecha última modificación: 2020-11-06
  Versión: 0.1
  Licencia: GPL
*/

#include "PresentadorAleatorio.h"


PresentadorAleatorio::PresentadorAleatorio()
: Presentador("aleatorio")
{
  // No hay que hacer nada
}


PresentadorAleatorio::~PresentadorAleatorio()
{
  // No hay que hacer nada
}


double PresentadorAleatorio::entregarPremio()
{
  return rand()%300;
}



