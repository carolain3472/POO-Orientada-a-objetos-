/*
  Archivo: Barca.cpp
  Autores: 
    Carolain Jimenez 
    Luis Felipe Belalcazar
    Natalia Lopez Osorio
  Emails:
    carolain.jimenez@correounivalle.edu.co
    luis.felipe.belalcazar@correounivalle.edu.co
    natalia.lopez.osorio@correounivalle.edu.co
  Fecha creación: 2020-10-31
  Fecha última modificación: 2020-11-02
  Versión: 0.1
  Licencia: GPL
*/

#include "Barca.h"  
#include "Lugar.h"

Barca::Barca(string nombre)
:Lugar(nombre)
{
  //No hace nada
}

Barca::~Barca()
{
  //No hace nada
}

void  Barca::adicionarSacarIndividuo(Individuo *cualIndividuo)
{
  //Sacar Individuo de la barca
  if(this->estaEn(cualIndividuo)) 
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
  //Adicionar Individuo a la barca
  else
  { 
    habitantes.push_back(cualIndividuo);
  }  
  
}


void Barca::moverBarca(Lugar *nuevoVecino)
{
  if(this->estaElRobot())
  {
    nuevoVecino->agregarLugarVecino(this);
    Lugar *actualVecino = this->quienEsVecino();
    this->agregarLugarVecino(nuevoVecino);
    actualVecino->agregarLugarVecino(nullptr);
  }
}
