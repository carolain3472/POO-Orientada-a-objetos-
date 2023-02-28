/*
  Archivo: Presentador.cpp
  Autores: 
    Carolain Jimenez 
    Luis Felipe Belalcazar
    Natalia Lopez Osorio
  Emails:
    carolain.jimenez@correounivalle.edu.co
    luis.felipe.belalcazar@correounivalle.edu.co
    natalia.lopez.osorio@correounivalle.edu.co
  Fecha creación: 2020-11-06
  Fecha última modificación: 2020-11-06
  Versión: 0.1
  Licencia: GPL
*/

#include "Presentador.h"


Presentador::Presentador(string nombre)
:nombre(nombre)
{
  // No hay que hacer nada
}


Presentador::~Presentador()
{
  // No hay que hacer nada
}

string Presentador::comoTeLlamas()
{
  return nombre;
}

