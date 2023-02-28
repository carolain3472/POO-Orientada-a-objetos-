/*
  Archivo: ElementoListaEnlazada<TIPO>.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-08-25
  Fecha última modificación: 2020-04-13
  Versión: 0.3
  Licencia: GPL
*/

// Clase: ElementoListaEnlazada (es un template)
// Para que sirve: es un elemento de la lista simplemente enlazada,
//   que contiene un string y un puntero al siguiente elemento.
// Relaciones: conoce el siguiente ElementoListaEnlazada<TIPO> (no toma propiedad de él)

#include<iostream>
#include<string>
using namespace std;


#ifndef HH_ElementoListaEnlazada
#define HH_ElementoListaEnlazada

template<class TIPO> 
class ElementoListaEnlazada
{
  private:
    TIPO valor;
    ElementoListaEnlazada<TIPO> *siguiente;

  public:
//    ElementoListaEnlazada<TIPO> * operator [] (int indice);  // Sobrecarga de operadores (y no la vamos a ver)
    /** Constructor, que crea un ElementoListaEnlazada<TIPO> con un valor concreto
        - Entrada: el valor string
    */
    ElementoListaEnlazada(TIPO valor);
    /** Destructor. No hace nada
    */
    ~ElementoListaEnlazada();
    /** Hace una copia profunda, cediendo propiedad de la copia
    */
    ElementoListaEnlazada<TIPO> *deepCopy();
    /** Averigua cual es el siguiente ElementoListaEnlazada<TIPO>
        - Entrada: ninguna
        - Salida: retorna el siguiente ElementoListaEnlazada<TIPO>
    */
    ElementoListaEnlazada<TIPO> *cualEsElSiguiente();
    /** Modificar el siguiente ElementoListaEnlazada<TIPO>, para que apunte a otro
        - Entrada: el nuevo ElementoListaEnlazada<TIPO>
        - Salida: ninguna
    */
    void cambiarSiguiente(ElementoListaEnlazada<TIPO> *siguiente);
    /** Me dice cuanto vale un ElementoListaEnlazada<TIPO>
        - Entrada: ninguna
        - Salida: el valor de ese elemento
    */
    TIPO dimeSuValor();
};

#include"ElementoListaEnlazada.tpp"

#else
  template<class TIPO> class ElementoListaEnlazada;
#endif



