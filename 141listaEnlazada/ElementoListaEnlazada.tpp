/*
  Archivo: ElementoListaEnlazada<TIPO>.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-08-25
  Fecha última modificación: 2020-04-17
  Versión: 0.3
  Licencia: GPL
*/


#include "ElementoListaEnlazada.h"
using namespace std;


template<class TIPO> 
ElementoListaEnlazada<TIPO>::ElementoListaEnlazada(TIPO nuevoValor)
{
  valor = nuevoValor;
  siguiente = nullptr;
}
      
      
template<class TIPO>
ElementoListaEnlazada<TIPO>::~ElementoListaEnlazada()
{
  // No hay que hacer nada
}
  

template<class TIPO>
ElementoListaEnlazada<TIPO> *ElementoListaEnlazada<TIPO>::cualEsElSiguiente()
{
  return siguiente;
}


template<class TIPO>
void ElementoListaEnlazada<TIPO>::cambiarSiguiente(ElementoListaEnlazada<TIPO> *siguiente)
{
  this->siguiente = siguiente;  // this es un puntero que existe automáticamente, y que apunta al objeto en el que me encuentro ejecutando código
}


template<class TIPO>
TIPO ElementoListaEnlazada<TIPO>::dimeSuValor()
{
  return valor;
}


template<class TIPO>
ElementoListaEnlazada<TIPO>* ElementoListaEnlazada<TIPO>::deepCopy()
{
  ElementoListaEnlazada<TIPO> *nuevo = new ElementoListaEnlazada<TIPO>(valor);
  if(siguiente != nullptr)
    nuevo->siguiente = siguiente->deepCopy();
  else
    nuevo->siguiente = nullptr;
    
  return nuevo;
}



