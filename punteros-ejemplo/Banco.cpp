/*
  Archivo: Banco.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-09-29
  Fecha última modificación: 2020-10-07
  Versión: 0.2
  Licencia: GNU-GPL
*/

#include "Banco.h"


Banco::Banco(double interes)
  : interes(interes)
{
}



Banco::~Banco()
{
  for(int cual=0; cual<cuentas.size(); cual++)
  {
    CuentaBancaria *cuenta = cuentas.back();
    cuentas.pop_back();
    delete cuenta;
    cuenta = nullptr;
  }
}


void Banco::recibirPlata(string nombrePersona, int cuantaPlata)
{
  for(int cual=0; cual<cuentas.size(); cual++)
    if(cuentas.at(cual)->dimeElNombre() == nombrePersona)
    {
      cuentas.at(cual)->guardarPlata(cuantaPlata);
      return;
    }

  // Como no encontramos su nombre, le creamos una nueva cuenta:
  crearCuenta(nombrePersona, cuantaPlata);
}



void Banco::entregarPlata(string nombrePersona, int cuantaPlata)
{
  for(int cual=0; cual<cuentas.size(); cual++)
    if(cuentas.at(cual)->dimeElNombre() == nombrePersona)
    {
      if(cuentas.at(cual)->cuantoHay() < cuantaPlata)
        throw "ERROR: NO TIENES TANTA PLATA EN TU CUENTA";

      cuentas.at(cual)->sacarPlata(cuantaPlata);
      return;
    }

  throw "ERROR: NO TIENES CUENTA EN ESTE BANCO";  
}


string Banco::reporteTotal()
{
  string resultado = "";
  for(int cual=0; cual<cuentas.size(); cual++)
  {
    resultado += "- " + cuentas.at(cual)->dimeElNombre() + " tiene en su cuenta " + to_string(cuentas.at(cual)->cuantoHay()) + " pesos\n";
  }

  return resultado;
}


void Banco::generaInteresesAnuales()
{
  for(int cual=0; cual<cuentas.size(); cual++)
    cuentas.at(cual)->guardarPlata(interes * cuentas.at(cual)->cuantoHay());
}


CuentaBancaria *Banco::crearCuenta(string nombrePersona, int plataInicial)
{
  CuentaBancaria *nuevaCuenta = new CuentaBancaria(nombrePersona, plataInicial);
  cuentas.push_back(nuevaCuenta);
  return nuevaCuenta;
}



