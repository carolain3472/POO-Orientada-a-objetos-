/*
  Archivo: Amigo.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-03-06
  Fecha última modificación: 2020-09-15
  Licencia: GNU-GPL
*/

/*
  Clase: Amigo
  Atributos: nombre
  Funcionalidades:
    - Puedo preguntarle su nombre
    - Puedo pedirle que adquiera una bicicleta y que preste una bicicleta.
    - Puedo pedirle que mire los kilómetros recorridos de su bicicleta. 
  Relaciones: conoce una bicicleta
*/

#ifndef AMIGO_H
#define AMIGO_H

#include "Bicicleta.h"
#include<string>
using namespace std;

class Amigo
{
  protected:
    string nombre;
    Bicicleta *bicicleta;

  public:
    /**
      Constructor. Da valores iniciales a los atributos internos
    */
    Amigo(string nombre);
    /**
      Destructor. No hace nada
    */
    virtual ~Amigo();
    /**
      Pregunta y retorna su nombre.
    */
    virtual string comoTeLlamas();
    /**
      Adquiere una bicicleta y retorna true, excepto si ya tiene otra bicicleta en cuyo caso no hace nada y retorna false.
    */
    virtual bool recibirBici(Bicicleta *bici);
    /**
      Pedalea los kilómetros especificados con su bicicleta y retorna true. Si no tiene bicicleta, retorna false.
    */
    virtual bool pedalearBici(int kilometros);
    /**
      Presta una bicicleta a un amigo. Si lo logra hacer retorna true; si no lo logra, retorna false.
    */
    virtual bool prestarBici(Amigo &amigo);
    /**
      Devuelve la bicicleta a un amigo. Si lo logra hacer retorna true; si no lo logra, retorna false.
    */
    virtual bool devolverBici(Amigo &amigo);
    /**
      Retorna los kilómetros recorridos que indica la bicicleta. Si no tiene una bicicleta, retorna -1
    */
    virtual int verCuentaKilometrosBici();
};

#else
class Amigo; // Declaración adelantada
#endif
