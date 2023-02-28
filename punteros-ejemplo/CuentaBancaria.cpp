/*
  Archivo: CuentaBancaria.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-10-07
  Fecha última modificación: 2020-10-07
  Versión: 0.1
  Licencia: GNU-GPL
*/

#include "CuentaBancaria.h"


CuentaBancaria::CuentaBancaria(string nombrePersona, int plataInicial)
  : nombrePersona(nombrePersona), plata(plataInicial)
{
}


string CuentaBancaria::dimeElNombre()
{
  return nombrePersona;
}


void CuentaBancaria::sacarPlata(int cuantaPlata)
{
  if(plata < cuantaPlata)
    throw "ERROR: No hay suficiente plata en esta cuenta";
  
  plata -= cuantaPlata;
}


void CuentaBancaria::guardarPlata(int cuantaPlata)
{
  plata += cuantaPlata;
}


int CuentaBancaria::cuantoHay()
{
  return plata;
}



