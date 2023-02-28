/*
  Archivo: Persona.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-09-19
  Fecha última modificación: 2020-09-19
  Versión: 0.1
  Licencia: GPL
*/

/**
  @class Persona
  @brief
  Atributos: 
    - el nombre de la Persona
    - el número de días que tiene que viajar
    - el número de días que tiene que quedarse en casa
    - el día en el que está dentro de su periodo
  Funcionalidades: 
    - le puedo avisar que ya pasó otro día
    - le puedo preguntar si se encuentra de viaje o en casa
  Relaciones: ninguna
*/


#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona
{
  protected:
    string nombre;
    int diasDeViaje;
    int diasEnCasa;
    int diaEnElQueEstoy;

  public:
    /**
      Construye una persona con un nombre y un trabajo que le obliga a estar unos días de viaje y otros en casa
      @param nombre
      @param diasDeViaje
      @param diasEnCasa
    */
    Persona(string nombre, int diasDeViaje, int diasEnCasa);
    /**
      Le avisamos que ya pasó un día
    */
    void haPasadoUnDia();
    /**
      Le preguntamos si está en casa
      @return true si está en casa; y false en caso contrario
    */
    bool estaEnCasa();
};


#else
class Persona;
#endif
