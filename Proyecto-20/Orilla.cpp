/*
  Archivo: Orilla.cpp
  Autores: 
    Carolain Jimenez 
    Luis Felipe Belalcazar
    Natalia Lopez Osorio
  Emails:
    carolain.jimenez@correounivalle.edu.co
    luis.felipe.belalcazar@correounivalle.edu.co
    natalia.lopez.osorio@correounivalle.edu.co
  Fecha creación: 2020-10-01
  Fecha última modificación: 2020-12-06
  Versión: 0.1
  Licencia: GPL
*/

#include "Orilla.h"

Orilla::Orilla(string nombre)
:Lugar(nombre)
{
  //No hace nada
}

Orilla::~Orilla()
{
  //No hace nada
}

void Orilla::adicionarSacarIndividuo(Individuo *cualIndividuo)
{
  //Sacar Individuo
  if(this->estaEn(cualIndividuo) and  lugarVecino->cuantosEstanEn()<2) 
  {
    for(int cualHabitante=0; cualHabitante<habitantes.size();cualHabitante++)
    {
      if(habitantes.at(cualHabitante))
        if(habitantes.at(cualHabitante) == cualIndividuo)
          if(lugarVecino)
          {          
            lugarVecino->adicionarSacarIndividuo(habitantes.at(cualHabitante));
            habitantes.at(cualHabitante)=nullptr;
            habitantes.erase(habitantes.begin()+cualHabitante);
          } 
             
    }
  }
  //Adicionar Individuo
  else if(not this->estaEn(cualIndividuo))
  {
    habitantes.push_back(cualIndividuo);
  } 
}