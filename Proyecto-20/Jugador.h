/*
  Archivo: Jugador.h
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
  Clase: Jugador
  Atributos: vector de personajes, vector de lugares, puntero que apunta a barca.
  Funcionalidades:
    - Puedo empezar el juego y mostrar lo que resulta de cada movimiento hasta lograr el objetivo final del juego o perder. 
    - Puedo añadir espacios a un string.
    - Puedo preguntar al usuario que desea hacer.
    - Mostrar la interfaz en la pantalla.
    - Mover un individuo.
  Relaciones: 
    - Conoce individuos 
    - Conoce Lugar (orilla y barca)
*/

#ifndef JUGADOR_H
#define JUGADOR_H

#include "Orilla.h"
#include "Lugar.h"
#include "Barca.h"
#include "Individuo.h"
#include <iostream>
#include <string>
using namespace std;

class Jugador
{
  private:
    vector <Individuo*> personajes;
    vector <Lugar*> lugares;
    Barca *barcaABarca;
    
    /**
      Añade espacios a un string hasta que tenga una longitud de 9 espacios. Está funcionalidad es para imprimir alineado el juego en pantalla 
    */
    string anhadirEspacios(string textoParaAumentar);
   
    
  public:

    /**
      Constructor asigna los valores a cada atributo
    */

    Jugador(vector <Individuo*> personajes, vector <Lugar*> lugares, Barca *barca);

    /**
      Destructor. No hace nada
    */
    virtual ~Jugador();

    
    /**
      Comienza el juego mostrandole en pantalla al usuario los controles y como estan los individuos inicialmente en el juego, ademas de lo que resulta de cada movimiento hasta lograr el objetivo final del juego o perder.
    */

    virtual void jugar();


    /**
      Preguntar al usuario que movimiento desea realizar en el juego. Retorna el movimiento que se va a realizar.
    */

    virtual string queDeseaHacer();


    /**
      Da ordenes a los individuos o a la barca para moverse de un lado a otro
    */

    virtual void moverIndividuoOBarca(string movimiento);

    /**
      Muestra la interfaz del juego
    */

    virtual void pantallaInterfaz();

   
};


#else
class Jugador;
#endif

