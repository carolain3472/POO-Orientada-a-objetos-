/*
  Archivo: Lugar.h
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


/*
  Clase: Lugar
  Atributos: habitantes del lugar, nombreLugar, lugarVecino.
  Funcionalidades:
    - Devolver nombre del lugar
    - Agregar un lugar vecino
    - Adicionar y sacar individuos de un lugar.
    - Preguntar quienes estan en un lugar.
    - Averiguar si un individuo esta en un lugar.
    - Averiguar si está el robot
    - Preguntar la cantidad de individuos que estan en un lugar
    - Determinar si se perdio el juego.
    - Devolver el vecino del lugar. 
     
  Relaciones: 
    - Conoce un vector de individuos 
    - Conoce lugar
*/

#ifndef LUGAR_H
#define LUGAR_H
#include "Individuo.h"
#include <string>
#include <vector>
using namespace std;

class Lugar
{
  protected:
    string nombreLugar; 
    vector <Individuo *> habitantes;
    Lugar *lugarVecino;

  public: 

    /**
      Constructor. Da valores iniciales a los atributos 
    */
    Lugar(string nombre);

    /**
      Destructor. No hace nada
    */
    virtual ~Lugar();

    /**
      Devolver el nombre del lugar
    */
    virtual string devolverNombre();


    /**
      Agrega el lugar vecino al lugar donde está el lugar
    */
    virtual void agregarLugarVecino(Lugar *lugarVecino);

    /**
      Adicionar y sacar indiviuos de un lugar
      funcion virtual pura.
    */
    virtual void adicionarSacarIndividuo(Individuo *cualIndividuo)=0;
   

    /**
      Devuelve los nombres de los individuos que estan en un lugar
    */
    virtual string quienesEstanEn(int cualPosicion);

    /**
      Averiguar si un individuo está en un lugar.
    */
    virtual bool estaEn(Individuo *quienEsta);

    /**
      Averiguar si esta el robot
    */
    virtual bool estaElRobot();

    /**
      Devuelve la cantidad de individuos en un lugar
    */
    virtual int cuantosEstanEn();

    /**
      Averiguar si se acabo el juego porque en el mismo lugar hay un individuo que puede comerse a otro y no está el robot.
    */
    virtual bool perderElJuego();

    /**
      Devuelve quién es el vecino
    */

    virtual Lugar *quienEsVecino();
    
};



#else
class Lugar;
#endif