/*
  Archivo: Bicicleta.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-03-06
  Fecha última modificación: 2020-03-06
  Versión: 0.1
  Licencia: GPL
*/


#include "Bicicleta.h"

Bicicleta::Bicicleta(string color, int cantidadDePinones, int cantidadDePlatos)
  : color(color), cantidadDePinones(cantidadDePinones), cantidadDePlatos(cantidadDePlatos)
{
  cuentaKilometros = 0;
}


Bicicleta::~Bicicleta()
{
  // No hay que hacer nada
}


void Bicicleta::pedalear(int kilometros)
{
  cuentaKilometros += kilometros;
}


int Bicicleta::verCuentaKilometros()
{
  return cuentaKilometros;
}






























