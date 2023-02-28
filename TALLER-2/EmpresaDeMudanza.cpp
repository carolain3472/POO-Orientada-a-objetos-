/*
  Archivo: EmpresaDeMudanza.cpp
  Autores: 
    Carolain Jimenez 
    Luis Felipe Belalcazar
    Natalia Lopez Osorio
  Emails:
    carolain.jimenez@correounivalle.edu.co
    luis.felipe.belalcazar@correounivalle.edu.co
    natalia.lopez.osorio@correounivalle.edu.co
  Fecha creación: 2020-09-11
  Fecha última modificación: 2020-09-11
  Versión: 0.1
  Licencia: GPL

  Codigo tomado del autor Ángel García Baños 
*/


#include"EmpresaDeMudanza.h"

EmpresaDeMudanza::EmpresaDeMudanza(string nombre, string nit)
{
  this->nombre = nombre; 
  this->nit=nit; 
}

void EmpresaDeMudanza::comprarCamion(string laPlaca, int laCapacidadMaxima)
{
  flotaDeCamiones.push_back(Camion(laPlaca, laCapacidadMaxima));
}


int EmpresaDeMudanza::empresaHacerMudanza( vector <int> pesoObjeto,int contadorDePeso)
{
  //ciclo para cargar los objetos y contar el peso total transportado
  for(int cualObjeto = 0; cualObjeto < pesoObjeto.size(); cualObjeto++)
  {
    int objetoATransportar = pesoObjeto.at(cualObjeto);

    for(int cualCamion=0; cualCamion<flotaDeCamiones.size(); cualCamion++)
    {
      
      if(flotaDeCamiones.at(cualCamion).cargarUnObjeto(objetoATransportar))
      { 
        contadorDePeso+=objetoATransportar;           
        break;
      }
      
    }   
  }  

  return contadorDePeso;
  
}














