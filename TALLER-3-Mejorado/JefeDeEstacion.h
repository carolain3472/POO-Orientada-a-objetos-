
/*
  Clase: JefeDeEstacion
  Atributos: viaPrincipal, viaSecundariaDerecha, viaSecundariaIzquierda
  Funcionalidades:
    -Organizar el tren poniendo los vagones que tienen pasajeros enfermos al final.
  Relaciones:
    -Conoce vias
*/

#ifndef JEFEDEESTACION_HH
#define JEFEDEESTACION_HH

#include "Via.h"

class JefeDeEstacion
{
  private: 
    Via &viaPrincipal;
    Via &viaSecundariaDerecha;
    Via &viaSecundariaIzquierda;
  
  public:

    /**
      Constructor. Da valores iniciales a los atributos
    */
    JefeDeEstacion(Via &viaPrincipal, Via &viaSecundariaDerecha, Via &viaSecundariaIzquierda);

    /**
      Ordena los vagones del tren poniendo al final del tren los vagones con pasajeros enfermos
    */
    virtual void organizarTren();


};



#else
class JefeDeEstacion;
#endif
