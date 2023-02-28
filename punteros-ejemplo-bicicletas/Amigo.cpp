/*
  Archivo: Amigo.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-03-06
  Fecha última modificación: 2020-10-06
  Licencia: GNU-GPL
*/

#include"Amigo.h"

Amigo::Amigo(string nombre) : nombre(nombre), bicicleta(nullptr)
{
  // No hay que hacer nada
}


Amigo::~Amigo()
{
  // No hay que hacer nada
}


string Amigo::comoTeLlamas()
{
  return nombre;
}


bool Amigo::recibirBici(Bicicleta *bici)
{
  if(bicicleta == nullptr)
  {
    bicicleta = bici;
    return true;
  }
  return false;
}


bool Amigo::pedalearBici(int kilometros)
{
  if(bicicleta == nullptr)
    return false;

  bicicleta->pedalear(kilometros);
  return true;
}


bool Amigo::prestarBici(Amigo &amigo)
{
  if(bicicleta == nullptr)
    return false;

  if(amigo.recibirBici(bicicleta))
  {
    bicicleta = nullptr;
    return true;
  }
  return false;
}


bool Amigo::devolverBici(Amigo &amigo)
{
  return prestarBici(amigo);
}


int Amigo::verCuentaKilometrosBici()
{
  if(bicicleta == nullptr)
    throw "ERROR: me pides ver los kilómetros, pero yo no tengo ninguna bici";  // Las excepciones las veremos más adelante
    
  return bicicleta->verCuentaKilometros();
}






























