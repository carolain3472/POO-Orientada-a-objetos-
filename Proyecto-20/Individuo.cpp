/*
  Archivo: Individuo.cpp
  Autores: 
    Carolain Jimenez 
    Luis Felipe Belalcazar
    Natalia Lopez Osorio
  Emails:
    carolain.jimenez@correounivalle.edu.co
    luis.felipe.belalcazar@correounivalle.edu.co
    natalia.lopez.osorio@correounivalle.edu.co
  Fecha creación: 2020-10-31
  Fecha última modificación: 2020-10-31
  Versión: 0.1
  Licencia: GPL
*/

#include "Individuo.h"


 Individuo::Individuo(string nombre, vector <Lugar*> lugares, string control ):nombreIndividuo(nombre), control(control)
{
  for(int lugar=0; lugar<lugares.size(); lugar++)
  {
    estoyEn.push_back(lugares.at(lugar));
  }
}


Individuo::~Individuo()
{
  //No hace nada
}


bool Individuo::comerIndividuo(Individuo *individuoAComer)
{
  for(int sePuedeComer=0; sePuedeComer<puedeComer.size();sePuedeComer++)
  {
    if(puedeComer.at(sePuedeComer)->devolverNombre() == individuoAComer->devolverNombre())
      return true;
  }
    return false;
}


string Individuo::devolverNombre()
{
  return nombreIndividuo;
}


void Individuo::puedeComerseA(Individuo *individuoQueSeCome)
{
  puedeComer.push_back(individuoQueSeCome);
}


Lugar *Individuo::dondeEstas()
{
  for(int cualLugar =0; cualLugar<estoyEn.size(); cualLugar++)
  {
    if(estoyEn.at(cualLugar)->estaEn(this))
      return estoyEn.at(cualLugar);
  }
  return nullptr;
}


string Individuo::cualEsElControl()
{
  return control;
}