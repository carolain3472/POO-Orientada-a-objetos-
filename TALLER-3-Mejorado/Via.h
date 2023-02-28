
/*
  Clase: Via
  Atributos: vector de punteros a vagon
  Funcionalidades:
    - Puedo introducir vagones a la via. 
    - Puedo sacar y tomar el ultimo vagon de una via
    - Puedo mover (retroceder o avanzar) vagones de una via hacia otra. 
    - Muestra en que orden estan los vagones.   
  Relaciones: 
    - Conoce un vector de vagones.
*/

#ifndef VIA_HH
#define VIA_HH
#include "Vagon.h"
#include <string>
#include <vector>
using namespace std;


class Via
{
  private:
    vector < Vagon *> vagones;

  public:

    /**
      Constructor. No hace nada 
    */ 
    Via();

    /**
      Destruye los vagones de los que es propietaria
    */
    virtual ~Via();

    /**
      Introducir vagones a la via.
    */
    virtual void introducirVagon(Vagon *nuevoVagon );
    
    /**
      Saca el ultimo vagon de una via. Retorna el puntero del ultimo vagon.      
    */
    virtual Vagon *sacarVagon();

    /**
      Entregar el ultimo vagon en la via a otra via. Cede propiedad.
    */

    virtual void retrocederPor(Via &viaATomar);

    /**
      Recibir el ultimo vagon de otra via. Toma propiedad.      
    */
    virtual void avanzarDesde(Via &viaQueDejar);

    /**
      Duelve el orden de los vagones de la via.
    */
    virtual string estadoActual();



};

#else 
class Via;
#endif