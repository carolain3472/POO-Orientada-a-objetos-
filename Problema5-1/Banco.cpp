/*
  Archivo: Banco.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-09-29
  Fecha última modificación: 2020-09-29
  Versión: 0.1
  Licencia: GNU-GPL
*/

#include "Banco.h"


Banco::Banco(double interes)
  : interes(interes)
{
}


void Banco::recibirPlata(int cuantaPlata, string nombreCuenta)
{
  for(int cual=0; cual<cuentas.size(); cual++)
    if(cuentas.at(cual).first == nombreCuenta)
    {
      cuentas.at(cual).second += cuantaPlata;
      return;
    }

  // Como no encontramos su nombre, le creamos una nueva cuenta:
  cuentas.push_back(make_pair(nombreCuenta, cuantaPlata));
}



void Banco::entregarPlata(int cuantaPlata, string nombreCuenta)
{
  for(int cual=0; cual<cuentas.size(); cual++)
    if(cuentas.at(cual).first == nombreCuenta)
    {
      if(cuentas.at(cual).second < cuantaPlata)
        throw "ERROR: NO TIENES TANTA PLATA EN TU CUENTA";

      cuentas.at(cual).second -= cuantaPlata;
      return;
    }

  throw "ERROR: NO TIENES CUENTA EN ESTE BANCO";  
}


string Banco::reporteTotal()
{
  string resultado = "";
  for(int cual=0; cual<cuentas.size(); cual++)
  {
    resultado += "- " + cuentas.at(cual).first + " tiene en su cuenta " + to_string(cuentas.at(cual).second) + " pesos\n";
  }

  return resultado;
}


void Banco::generaInteresesAnuales()
{
  for(int cual=0; cual<cuentas.size(); cual++)
    cuentas.at(cual).second += interes * cuentas.at(cual).second;
}
