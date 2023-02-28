/*
  Archivo: Camion.cpp
  Autores: 
    Carolain Jimenez 
    Luis Felipe Belalcazar
    Natalia Lopez Osorio
  Emails:
    carolain.jimenez@correounivalle.edu.co
    luis.felipe.belalcazar@correounivalle.edu.co
    natalia.lopez.osorio@correounivalle.edu.co
  Fecha creación: 2018-02-13
  Fecha última modificación: 2020-09-04
  Versión: 0.1
  Licencia: GPL

  Codigo tomado del autor Ángel García Baños 
*/

#include"Camion.h"

Camion::Camion(string laPlaca, int laCapacidadMaxima)
{
  this->placa = laPlaca;  
  this->capacidadMaxima = laCapacidadMaxima;
  this->pesoAcumulado = 0; 
}


bool Camion::cargarUnObjeto(int pesoDelObjeto) 
{
  if(pesoAcumulado + pesoDelObjeto <= capacidadMaxima)
  {
    pesoAcumulado = pesoAcumulado + pesoDelObjeto;
    return true;
  }
  else
  {
    return false;
  }

}


int Camion::hacerMudanza() 
{  
  return pesoAcumulado; 
} 


string Camion::cualEsLaPlaca() 
{ 
  return placa; 
}


 