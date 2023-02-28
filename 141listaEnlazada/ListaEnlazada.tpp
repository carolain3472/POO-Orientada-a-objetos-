/*
  Archivo: ListaEnlazada<TIPO>.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-08-25
  Fecha última modificación: 2020-04-17
  Versión: 0.5
  Licencia: GPL
*/


#include "ListaEnlazada.h"

using namespace std;



template<class TIPO>
ListaEnlazada<TIPO>::ListaEnlazada()
{
  primerElemento = nullptr;
  soyPropietarioDelPrimerElemento = true;
}


template<class TIPO>
ListaEnlazada<TIPO>::~ListaEnlazada()
{
  if(not soyPropietarioDelPrimerElemento)
    return;

  ElementoListaEnlazada<TIPO> *adelantado;
  for(ElementoListaEnlazada<TIPO> *cualElemento = primerElemento; cualElemento != nullptr; cualElemento = adelantado)
  {
    adelantado = cualElemento->cualEsElSiguiente();
    delete cualElemento;
    cualElemento = nullptr;
  }

  primerElemento = nullptr;
}


template<class TIPO>
void ListaEnlazada<TIPO>::anadirAlFinal(TIPO nuevo)
{
  ElementoListaEnlazada<TIPO> *nuevoElemento = new ElementoListaEnlazada<TIPO>(nuevo);

  if(primerElemento == nullptr)
  {
    primerElemento = nuevoElemento;
    cout<<1<<nuevoElemento->dimeSuValor()<<endl;
  }
  else
  {
    ElementoListaEnlazada<TIPO> *cualElemento;
    for(cualElemento = primerElemento; cualElemento->cualEsElSiguiente() != nullptr; cualElemento = cualElemento->cualEsElSiguiente())
    {
      cout<<2<<cualElemento->dimeSuValor()<<endl;      
    }
    cualElemento->cambiarSiguiente(nuevoElemento);
  }
}


template<class TIPO>
bool ListaEnlazada<TIPO>::anadirDespuesDe(TIPO despuesDe, TIPO nuevoValor)
{
  ElementoListaEnlazada<TIPO> *insertarDespuesDeEste = buscar(despuesDe);
  if(insertarDespuesDeEste == nullptr)
    return false;
    
  ElementoListaEnlazada<TIPO> *nuevoElemento = new ElementoListaEnlazada<TIPO>(nuevoValor);

  ElementoListaEnlazada<TIPO> *aux = insertarDespuesDeEste->cualEsElSiguiente();
  nuevoElemento->cambiarSiguiente(aux);
  insertarDespuesDeEste->cambiarSiguiente(nuevoElemento);
  return true;
}


template<class TIPO>
bool ListaEnlazada<TIPO>::borrar(TIPO valor)
{
  if(primerElemento == nullptr)
    return false;
  
  if(primerElemento->dimeSuValor() == valor)
  {
    ElementoListaEnlazada<TIPO> *tmp = primerElemento;
    primerElemento = primerElemento->cualEsElSiguiente();
    delete tmp;
    tmp = nullptr;
    return true;
  }

  for(ElementoListaEnlazada<TIPO> *cualElemento = primerElemento; cualElemento->cualEsElSiguiente() != nullptr; cualElemento = cualElemento->cualEsElSiguiente())
  {
    if(cualElemento->cualEsElSiguiente()->dimeSuValor() == valor) 
    {
      ElementoListaEnlazada<TIPO> *tmp = cualElemento->cualEsElSiguiente();
      ElementoListaEnlazada<TIPO> *aux = cualElemento->cualEsElSiguiente()->cualEsElSiguiente();
      cualElemento->cambiarSiguiente(aux);
      delete tmp;
      tmp = nullptr;
      return true;
    }
  }
  return false;
}


template<class TIPO>
bool ListaEnlazada<TIPO>::existe(TIPO valor)
{
  for(ElementoListaEnlazada<TIPO> *cualElemento = primerElemento; cualElemento != nullptr; cualElemento = cualElemento->cualEsElSiguiente())
  {
    if(cualElemento->dimeSuValor() == valor)
      return true;
  }
  return false;
}


template<class TIPO>
ElementoListaEnlazada<TIPO> *ListaEnlazada<TIPO>::buscar(TIPO valor)
{
  for(ElementoListaEnlazada<TIPO> *cualElemento = primerElemento; cualElemento != nullptr; cualElemento = cualElemento->cualEsElSiguiente())
  {
    if(cualElemento->dimeSuValor() == valor)
      return cualElemento;
  }
  return nullptr;
}


template<class TIPO>
TIPO ListaEnlazada<TIPO>::cuantoVale(ElementoListaEnlazada<TIPO> *elemento)
{
  return elemento->dimeSuValor();   // EJEMPLO DE DELEGACION
}


template<class TIPO>
void ListaEnlazada<TIPO>::imprimir()
{
  if(primerElemento == nullptr)
  {
    cout << "La lista está vacía" << endl;
  }
  else
  {
    cout << "La lista es: ";
    for(ElementoListaEnlazada<TIPO> *cualElemento = primerElemento; cualElemento != nullptr; cualElemento = cualElemento->cualEsElSiguiente())
    {
      cout << cualElemento->dimeSuValor() << ", ";  
    }
    cout << endl;
  }
}


template<class TIPO>
ListaEnlazada<TIPO> *ListaEnlazada<TIPO>::shallowCopy()
{
  ListaEnlazada<TIPO> *nueva = new ListaEnlazada<TIPO>;
  nueva->primerElemento = this->primerElemento;
  nueva->soyPropietarioDelPrimerElemento = true;
  soyPropietarioDelPrimerElemento = false;
  return nueva; // Cedo propiedad de este nuevo objeto
  
/* Otra alternativa:
  nueva->soyPropietarioDelPrimerElemento = false;
  soyPropietarioDelPrimerElemento = true;
  return nueva; // NO cedo propiedad de este nuevo objeto
*/
}


template<class TIPO>
ListaEnlazada<TIPO>* ListaEnlazada<TIPO>::deepCopy()
{
  ListaEnlazada<TIPO> *nueva = new ListaEnlazada<TIPO>;
  nueva->primerElemento = this->primerElemento->deepCopy();
  return nueva; // Cede propiedad
}



template<class TIPO>
int ListaEnlazada<TIPO>::size()
{
  int contador = 0;
  for(ElementoListaEnlazada<TIPO> *cualElemento = primerElemento; cualElemento != nullptr; cualElemento = cualElemento->cualEsElSiguiente())
    contador++;
  return contador;
}


template<class TIPO>
TIPO ListaEnlazada<TIPO>::operator[](int posicion)
{
  if(posicion < 0 or posicion >= size())
    throw "Posición inexistente";
  
// TRES FORMAS DE HACERLO:

//  ElementoListaEnlazada<TIPO> *cualElemento = primerElemento;
//  for(int contador = 0; contador < posicion; contador++)
//    cualElemento = cualElemento->cualEsElSiguiente();

//  int contador = 0;
//  ElementoListaEnlazada<TIPO> *cualElemento;
//  for(cualElemento = primerElemento; contador < posicion and cualElemento != nullptr; cualElemento = cualElemento->cualEsElSiguiente())
//    contador++;


  int contador = 0;
  ElementoListaEnlazada<TIPO> *cualElemento;
  for(cualElemento = primerElemento; contador < posicion and cualElemento != nullptr; cualElemento = cualElemento->cualEsElSiguiente(), contador++) // OPERADOR COMA
  {
  }


  return cualElemento->dimeSuValor();
}


template<class TIPO>
bool ListaEnlazada<TIPO>::eliminar(int posicion)
{
  if(posicion < 0 or posicion >= size())
    return false;
//    throw "Posición inexistente";
  
  ElementoListaEnlazada<TIPO> *cualElemento = primerElemento;
  for(int contador = 0; contador < posicion-1; contador++)
    cualElemento = cualElemento->cualEsElSiguiente();
  
  if(posicion == 0)
  {
    ElementoListaEnlazada<TIPO> *tmp = primerElemento;
    primerElemento = primerElemento->cualEsElSiguiente();
    delete tmp;
    tmp = nullptr;
    return true;
  }

  ElementoListaEnlazada<TIPO> *tmp = cualElemento->cualEsElSiguiente();
  ElementoListaEnlazada<TIPO> *aux = cualElemento->cualEsElSiguiente()->cualEsElSiguiente();
  cualElemento->cambiarSiguiente(aux);
  delete tmp;
  tmp = nullptr;
  return true;
}







