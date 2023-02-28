/*
  Archivo: ListaEnlazada<TIPO>.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-08-25
  Fecha última modificación: 2020-04-13
  Versión: 0.5
  Licencia: GPL
*/

// Clase: ListaEnlazada (es un template)
// Para que sirve: es una lista de strings simplemente enlazada, a la que se pueden
//    añadir elementos, buscarlos y borrarlos.
// Relaciones: Conoce el primer ElementoListaEnlazada<TIPO> (y toma propiedad de él y de todos los demás que sigan)

#ifndef HH_ListaEnlazada
#define HH_ListaEnlazada

#include<iostream>
#include "ElementoListaEnlazada.h"



template<class TIPO>
class ListaEnlazada
{
  private:
    ElementoListaEnlazada<TIPO> *primerElemento;
    bool soyPropietarioDelPrimerElemento;

  public:
    /** Construye una ListaEnlazada<TIPO> vacía.
     *  - Entrada: ninguna
    */
    ListaEnlazada();
    /** Destruye la ListaEnlazada<TIPO>. Borrra todos los ElementoListaEnlazada<TIPO>, ya que es propietario de todos.
    */
    ~ListaEnlazada();
    /** Añade un nuevo elemento al final de la lista enlazada.
        - Entrada: un valor a añadir
        - Salida: ninguna
    */
    void anadirAlFinal(TIPO nuevoValor);
    /** Hace una copia superficial, cediendo propiedad. En SHALLOW COPY hay que decidir si se cede o no la propiedad de los objetos internos.
    */
    ListaEnlazada<TIPO> *shallowCopy();
    /** Hace una copia profunda, cediendo propiedad. En DEEP COPY siempre se cede la propiedad de los objetos internos.
    */
    ListaEnlazada<TIPO> *deepCopy();
    /** Añade un nuevo nùmero a la lista enlazada, después del nùmero indicado.
        - Entrada: 
          - el valor que hay que buscar para insertar detrás de él.
          - el nuevo valor a insertar.
        - Salida: true si se logró hacer; false si no se logró, típicamente porque no existe el elemento donde insertar después.
    */
    bool anadirDespuesDe(TIPO insertarDespuesDeEste, TIPO nuevoString);
    /** Borra un valor de la ListaEnlazada<TIPO>
        - Entrada: el valor a borrar. Si hay más de uno, solo borra el primero.
        - Salida: retorna false si no lo encontró.
    */
    bool borrar(TIPO valor);
    /** Verifica si existe un cierto valor en la ListaEnlazda.
     *  - Entrada: el valor a buscar.
     *  - Salida: retorna true si lo encontró y false en caso contrario.
    */
    bool existe(TIPO valor);
    /** Averigua cuanto vale un ElementoListaEnlazada<TIPO>
     *  - Entrada: un puntero a ese elemento.
     *  - Salida: el valor de ese elemento.
    */
    TIPO cuantoVale(ElementoListaEnlazada<TIPO> *elemento);
    /** Imprime en pantalla (cout) la ListaEnlazada<TIPO>
     *  - Entrada: ninguna
     *  - Salida: ninguna
    */
    void imprimir();      
    /** Averigua el número de elementos en la ListaEnlazada<TIPO>
        - Entrada: 
          - Ninguna.
        - Salida:
          - El número de elementos.
    */
    int size();
    /** Averigua el elemento que hay en cierta posición de la ListaEnlazada<TIPO>
        - Entrada: 
          - La posición.
        - Salida:
          - El elemento que hay en esa posición. Si la posición no existe (menor que cero o mayor o igual al tamaño), lanza una excepción.
    */
    TIPO operator[](int posicion);

    /** Elimina un valor de la ListaEnlazada<TIPO>
        - Entrada: la posición del valor a borrar.
        - Salida: retorna false si no lo encontró.
    */
    bool eliminar(int posicion);

  protected:  
    /** Busca un valor en la lista enlazada.
     *  - Entrada: el valor a buscar
     *  - Salida: retorna un puntero al ElementoListaEnlazada<TIPO>. Retorna 0 (un puntero nulo) si no se encontró.
    */
    ElementoListaEnlazada<TIPO> *buscar(TIPO valor); 
};

#include"ListaEnlazada.tpp"

#else
  template<class TIPO> class ListaEnlazada;
#endif

