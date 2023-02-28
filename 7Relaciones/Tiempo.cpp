/*
  Archivo: Tiempo.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-09-19
  Fecha última modificación: 2020-09-19
  Versión: 0.1
  Licencia: GPL
*/


#include "Tiempo.h"

Tiempo::Tiempo(bool tomaPropiedadDeLasPersonas)
  : tomaPropiedadDeLasPersonas(tomaPropiedadDeLasPersonas)
{
}


Tiempo::~Tiempo()
{
  if(tomaPropiedadDeLasPersonas)
    for(int cualPersona=0; cualPersona<personas.size(); cualPersona++)
    {
      delete personas[cualPersona];
      personas[cualPersona] = 0;
    }
}


void Tiempo::pasaPara(Persona *persona)
{
  personas.push_back(persona);
}


int Tiempo::buscarCoincidenciaEnCasa(int tiempoMaximo)
{
  for(int tiempo=0; tiempo<tiempoMaximo; tiempo++)
  {
    for(int cualPersona=0; cualPersona<personas.size(); cualPersona++)
      personas[cualPersona]->haPasadoUnDia();

    bool estanTodasEnCasa = true;
    for(int cualPersona=0; cualPersona<personas.size(); cualPersona++)
      if(not personas[cualPersona]->estaEnCasa())
        estanTodasEnCasa = false;
        
    if(estanTodasEnCasa)
      return tiempo;
  }
  return -1;  // El convenio es que si no se encuentra, se retorna -1
}



