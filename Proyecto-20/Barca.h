/*
  Archivo: Barca.h
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
  Clase: Barca
  Atributos: habitantes de la Barca, nombre de la barca, lugar vecino
  Funcionalidades:
    - Devolver nombre del lugar.
    - Adicionar y sacar individuos de la barca.
    - Preguntar quienes estan en la barca
    - Averiguar si un individuo está en la barca.
    - Averiguar si está el robot.
    - Preguntar la cantidad de individuos que estan en la barca.
    - Determinar si se perdio el juego.
    - Devolver el vecino de la barca.
    - Mover la barca. 
  Relaciones:
    Barca es parecido a un Lugar.
*/     

#ifndef BARCA_H
#define BARCA_H
#include "Lugar.h"  
#include <string>

class Barca : public Lugar 
{
  public:
    /**
      Constructor. Da valores iniciales a los atributos.
    */
    Barca(string nombre);  

    /**
      Destructor. No hace nada.
    */
    virtual ~Barca();

    /**
      Adicionar y sacar indiviuos de la barca
    */
    virtual void adicionarSacarIndividuo(Individuo *cualIndividuo);

    /**
      Mover la barca de una orilla a otra.
    */
    virtual void moverBarca(Lugar *nuevoVecino);   

};

#else
class Barca;
#endif