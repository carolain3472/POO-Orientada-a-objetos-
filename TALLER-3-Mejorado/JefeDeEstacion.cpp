/*
  Archivo: JefeDeEstacion.cpp
  Autores: 
    Carolain Jimenez Bedoya
  Emails:
    Carolain.jimenez@correounivalle.edu.co
  Fecha creación: 2020-10-20
  Fecha última modificación: 2020-10-22
  Versión: 0.1
  Licencia: GPL

*/

#include "JefeDeEstacion.h"
#include <iostream>
using namespace std;


JefeDeEstacion::JefeDeEstacion(Via &viaPrincipal, Via &viaSecundariaDerecha, Via &viaSecundariaIzquierda)
  :viaPrincipal(viaPrincipal), viaSecundariaDerecha(viaSecundariaDerecha), viaSecundariaIzquierda(viaSecundariaIzquierda)
{
  //No hay nada que hacer 
}

void JefeDeEstacion::organizarTren()
{
  //Mover los vagones de la via principal a las vias secundarias, a la derecha los vagones con pasajeros enfermos y a la izquierda los que no 
  while(true)
  {
    Vagon *ultimoVagon= viaPrincipal.sacarVagon();
    if(ultimoVagon)
    {
      viaPrincipal.introducirVagon(ultimoVagon);//Está instruccion es por la forma en la que está el codigo de la funcion sacarVagon y retrocederPor
      if(ultimoVagon->tienePersonasEnfermas())
        viaPrincipal.retrocederPor(viaSecundariaDerecha);
      else
        viaPrincipal.retrocederPor(viaSecundariaIzquierda);  
    }else
      break; 
  }
  
  //Mover los vagones de la viaSecundariaIzquierda, donde estan los pasajeros sanos, a la via principal
  while(true)
  {
    Vagon *ultimoVagon= viaSecundariaIzquierda.sacarVagon();
    if(ultimoVagon)
    {
      viaSecundariaIzquierda.introducirVagon(ultimoVagon);//Está instruccion es por la forma en la que está el codigo de la funcion sacarVagon y avanzarDesde
      viaPrincipal.avanzarDesde(viaSecundariaIzquierda);
    }else
      break;
    
  }

  //Mover los vagones de la viaSecundariaDerecha, donde estan los pasajeros enfermos, a la via principal

  while(true)
  {
    Vagon *ultimoVagon= viaSecundariaDerecha.sacarVagon();
    if(ultimoVagon)
    {
      
      viaSecundariaDerecha.introducirVagon(ultimoVagon);//Está instruccion es por la forma en la que está el codigo de la funcion sacarVagon y avanzarDesde
      viaPrincipal.avanzarDesde(viaSecundariaDerecha);
    }else
      break;
  }


} 
