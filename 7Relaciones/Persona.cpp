/*
  Archivo: Persona.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-09-19
  Fecha última modificación: 2020-09-19
  Versión: 0.1
  Licencia: GPL
*/


#include "Persona.h"

Persona::Persona(string nombre, int diasDeViaje, int diasEnCasa)
: nombre(nombre), diasDeViaje(diasDeViaje), diasEnCasa(diasEnCasa), diaEnElQueEstoy(0)
{
}


void Persona::haPasadoUnDia()
{
  diaEnElQueEstoy++;
  if(diaEnElQueEstoy > diasDeViaje + diasEnCasa)
    diaEnElQueEstoy = 1;
}


bool Persona::estaEnCasa()
{
  return diaEnElQueEstoy > diasDeViaje;
}





