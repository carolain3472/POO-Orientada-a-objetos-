
/*
  Clase: Vagon
  Atributos: numeroDeVagon, transportar enfermos o no.
  Funcionalidades:
    -Preguntar el numero del vagon  
    -Preguntar si tiene personas enfermas.
  Relaciones: ninguna
*/

#ifndef VAGON_HH
#define VAGON_HH

class Vagon
{
  private: 
    int numeroDeVagon;
    bool transportaEnfermos;

  public:
    /**
      Constructor. Da valores iniciales a los Atributos
    */
    Vagon(int numeroDeVagon, bool transportaEnfermos);

    /**
      Devuelve el número del vagon. 
    */
    virtual int numeroVagon();  

    /**
      Pregunta si el vagon tiene personas enfermas 
    */
    virtual bool tienePersonasEnfermas();

};

#else
class Vagon;
#endif
