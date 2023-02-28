/*
  Archivo: Persona.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-09-29
  Fecha última modificación: 2020-10-07
  Versión: 0.2
  Licencia: GNU-GPL
*/

#include"Persona.h"

Persona::Persona(string nombre, int plataBolsillo, string objeto)
  : nombre(nombre), plataBolsillo(plataBolsillo), cuenta(nullptr)
{
  recibeObjeto(objeto);
}


string Persona::dimeTuNombre()
{
  return nombre;
}


int Persona::cuantaPlata()
{
  return plataBolsillo;
}


string Persona::objetosQuePosee()
{
  string resultado="";
  for(int cual=0; cual<objetos.size(); cual++)
    resultado += objetos.at(cual) + ", ";
  return resultado;
}


int Persona::daPlata(int cuantaPlata)
{
  int plataAEntregar = cuantaPlata;
  if(cuantaPlata > plataBolsillo)
    plataAEntregar = plataBolsillo;    // ToDo: mejorarlo en siguiente versión
  
  plataBolsillo -= plataAEntregar;
  return plataAEntregar;
}

int Persona::daTodaLaPlata()
{
  return daPlata(plataBolsillo);
}

void Persona::recibePlata(int cuantaPlata)
{
  plataBolsillo += cuantaPlata;
}


string Persona::daObjeto(string queObjeto)
{
  for(int cual=0; cual<objetos.size(); cual++)
    if(queObjeto == objetos.at(cual))
    {
      // Borarlo se hace con un puntero:
      objetos.erase(objetos.begin()+cual);
      return queObjeto;
    }
  return ""; // NO retorna nada porque no lo encontró
//  throw "ERROR: ELEMENTO NO ENCONTRADO";
}


void Persona::recibeObjeto(string queObjeto)
{
  if(queObjeto != "")
    objetos.push_back(queObjeto);
}


void Persona::abrirCuentaBancaria(CuentaBancaria *cuenta)
{
  if(this->cuenta)
    throw "ERROR: Ya tengo una cuenta abierta";
    
  this->cuenta = cuenta;
}


void Persona::guardaPlataEnCuentaBancaria(int cuantaPlata)
{
  if(plataBolsillo < cuantaPlata)
    throw "ERROR: No tengo tanta plata en el bolsillo";

  plataBolsillo -= cuantaPlata;
  cuenta->guardarPlata(cuantaPlata);
}


void Persona::sacarPlataDeCuentaBancaria(int cuantaPlata)
{
  if(cuenta->cuantoHay() < cuantaPlata)
    throw "ERROR: No tengo tanta plata en el banco";

  cuenta->sacarPlata(cuantaPlata);
  plataBolsillo += cuantaPlata;
}




