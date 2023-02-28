/*
  Archivo: Amigo.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-05-18
  Fecha última modificación: 2019-05-18
  Licencia: GNU-GPL
*/

/*
  Clase: Amigo
  Atributos: nombre, edad y estatura
  Funcionalidades:
    - Puedo preguntarle nombre, edad y estatura. 
    - Puedo preguntar si es menor que una cierta edad.
    - Puedo preguntar si supera una cierta estatura. 
  Relaciones: ninguna
*/

#ifndef HH_AMIGO
#define HH_AMIGO

#include<string>
using namespace std;

class Amigo
{
  protected:
    string nombre;
    int edad;
    double estatura;

  public:
    /**
      Constructor. Da valores iniciales a los atributos internos
    */
    Amigo(string nombre, int edad, double estatura);
    /**
      Destructor. No hace nada
    */
    virtual ~Amigo();
    /**
      Pregunta y retorna su nombre.
    */
    virtual string comoTeLlamas();
    /**
      Pregunta y retorna su edad.
    */
    virtual int cuantosAnhosTienes();
    /**
      Pregunta y retorna su estatura.
    */
    virtual double cuantoMides();
    /**
      Averigua si es mayor que una edad dada. Por defecto, 18 años.
    */
    virtual bool esMenorQue(int edad=18);
    /**
      Averigua si es más alto que una cierta altura.
    */
    virtual bool esMasAltoQue(int ciertaEstatura);
    /**
      Retorna la descripción completa del amigo
    */
    virtual string datosCompletos();
};

#else
class Amigo; // Declaración adelantada
#endif
