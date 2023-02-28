/*
  Archivo: Persona.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-09-29
  Fecha última modificación: 2020-09-29
  Versión: 0.1
  Licencia: GNU-GPL
*/

#include"Persona.h"

Persona::Persona(string nombre, int plata, string objeto)
  : nombre(nombre), plata(plata)
{
  recibeObjeto(objeto);
}


string Persona::dimeTuNombre()
{
  return nombre;
}


int Persona::cuantaPlata()
{
  return plata;
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
  if(cuantaPlata>plata)
    plataAEntregar=plata;    // ToDo: mejorarlo en siguiente versión
  
  plata -= plataAEntregar;
  return plataAEntregar;
}

int Persona::daTodaLaPlata()
{
  return daPlata(plata);
}

void Persona::recibePlata(int cuantaPlata)
{
  plata += cuantaPlata;
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


