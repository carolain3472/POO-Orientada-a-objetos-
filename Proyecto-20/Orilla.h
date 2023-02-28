/*
  Archivo: Orilla.h
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
  Clase: Orilla
  Atributos: habitantes de la orilla, nombre de la orilla,lugar vecino.
  Funcionalidades:
    - Devolver nombre del lugar.
    - Agregar un lugar vecino.
    - Adicionar y sacar individuos de la orilla.
    - Preguntar quienes estan en la orilla.
    - Averiguar si un individuo esta en la orilla.
    - Averiguar si está el robot.
    - Preguntar la cantidad de individuos que estan en la orilla.
    - Determinar si se perdio el juego.
    - Devolver el vecino del lugar. 
  Relaciones:
    Orilla es un Lugar.
*/
     

#ifndef ORILLA_H
#define ORILLA_H

#include "Lugar.h"
#include <string>

class Orilla : public Lugar
{
  public: 
    /**
      Constructor. Da valores iniciales a los atributos
    */
    Orilla(string nombre);

    /**
      Destructor. No hace nada
    */
    virtual ~Orilla();

    /**
      Adicionar y sacar indiviuos de la orilla
    */
    virtual void adicionarSacarIndividuo(Individuo *cualIndividuo);
   

};




#else
class Orilla;
#endif