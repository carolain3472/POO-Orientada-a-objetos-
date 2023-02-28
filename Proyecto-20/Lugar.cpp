/*
  Archivo: Lugar.cpp
  Autores: 
    Carolain Jimenez 
    Luis Felipe Belalcazar
    Natalia Lopez Osorio
  Emails:
    carolain.jimenez@correounivalle.edu.co
    luis.felipe.belalcazar@correounivalle.edu.co
    natalia.lopez.osorio@correounivalle.edu.co
  Fecha creación: 2020-10-31
  Fecha última modificación: 2020-12-06
  Versión: 0.1
  Licencia: GPL
*/

#include "Barca.h"
#include "Lugar.h"

Lugar::Lugar(string nombre)
:nombreLugar(nombre),lugarVecino(nullptr)
{
  //No hace nada
}


Lugar::~Lugar()
{
  //No hace nada
}


string Lugar::devolverNombre()
{
  return nombreLugar;
}


void Lugar::agregarLugarVecino(Lugar *lugarVecino)
{
  if(lugarVecino)
    this->lugarVecino=lugarVecino;
  else
    this->lugarVecino=nullptr;
}


string Lugar::quienesEstanEn(int cualPosicion)
{
  string personajeActual;
  if(cualPosicion+1<=habitantes.size())
  {
    personajeActual = habitantes.at(cualPosicion)->devolverNombre();
  }
  return personajeActual;
}


bool Lugar::estaEn(Individuo *quienEsta)
{
  if(quienEsta)
  {
    for(int cualHabitante=0;cualHabitante<habitantes.size();cualHabitante++)
    {
      if(habitantes.at(cualHabitante)== quienEsta)
        return true;
    }
    return false;
  }
  return false;
}


bool Lugar::estaElRobot()
{
  for (int esRobot=0; esRobot<habitantes.size();esRobot++)
  {
    if(habitantes.at(esRobot)->devolverNombre() == "Robot")
    return true;
  }
  return false;
}


int Lugar::cuantosEstanEn()
{
  return habitantes.size();
}


bool Lugar::perderElJuego()
{
  for(int cualHabitante=0; cualHabitante<habitantes.size(); cualHabitante++)
  {
    Individuo *depredador = habitantes.at(cualHabitante);
    for(int cualPresa=0; cualPresa<habitantes.size(); cualPresa++)
    {
      if(depredador->comerIndividuo(habitantes.at(cualPresa)) and not estaElRobot())
        return true;
      
    } 
  }
  return false;
}


Lugar *Lugar::quienEsVecino()
{
  return lugarVecino;
}