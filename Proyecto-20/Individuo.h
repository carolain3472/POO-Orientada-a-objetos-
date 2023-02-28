/*
  Archivo: Individuo.h
  Autores: 
    Carolain Jimenez 
    Luis Felipe Belalcazar
    Natalia Lopez Osorio
  Emails:
    carolain.jimenez@correounivalle.edu.co
    luis.felipe.belalcazar@correounivalle.edu.co
    natalia.lopez.osorio@correounivalle.edu.co
  Fecha creación: 2020-10-01
  Fecha última modificación: 2020-10-01
  Versión: 0.1
  Licencia: GPL
*/

/*
  Clase: Individuo
  Atributos: nombre, individuos que puede comer, lugares donde puede estar el individuo, control para mover el individuo.
  Funcionalidades:
    - Preguntar el nombre del individuo.
    - preguntar si un individuo x puede comer a otro individuo y.
    - agregar objetos a la lista de individuos que puede comer cada uno.
    - Averiguar donde esta el individuo.
    - Averiguar cual es el control para mover el individuo.
  Relaciones: 
    - Conoce individuos.
    - Conoce lugar
*/
#ifndef INDIVIDUO_H
#define INDIVIDUO_H
 
#include <vector>
#include <string>
#include "Lugar.h"
using namespace std;


class Individuo
{
  private: 
  string nombreIndividuo;
  vector < Individuo *>puedeComer;  
  vector <Lugar *>estoyEn;
  string control;
  
  public:

  /**
    Constructor da valores iniciales a los atributos.
  */

  Individuo(string nombre,vector <Lugar*> lugares, string control);

  /**
    Destructor. No hace nada
  */
  virtual ~Individuo();

  /**
    Devuelve el nombre del individuo
  */
  
  virtual string devolverNombre();

  /**
    Devuelve si un individuo x pude comerse otro individuo y
  */

  virtual bool comerIndividuo(Individuo *individuoAComer); 
  

  /**
    Añade al vector puedeComer los individuos que cada individuo puede comer
  */
  virtual void puedeComerseA(Individuo *individuoQueSeCome);

  /**
    Averigua donde está el individuo
  */
  virtual Lugar *dondeEstas();

  /**
    Devuelve el control (la tecla) para mover el individuo
  */
  virtual string cualEsElControl();
  
};

#else
class Individuo;
#endif

