/*
  Archivo: Tiempo.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-09-19
  Fecha última modificación: 2020-09-19
  Versión: 0.1
  Licencia: GPL
*/

/**
  @class Tiempo
  @brief
  Atributos: 
    - Si el Tiempo es el propietario de las Personas
  Funcionalidades: 
    - puedo añadir personas para las que va a pasar el tiempo
    - puedo pedirle que pase el tiempo y que chequee si se cumple una condición para todas las personas
  Relaciones: 
    - Conoce Personas (concretamente un vector de Personas)
*/


#ifndef TIEMPO_H
#define TIEMPO_H

#include "Persona.h"
#include <vector>
using namespace std;

class Tiempo
{
  protected:
    vector <Persona *> personas;
    bool tomaPropiedadDeLasPersonas;

  public:
    /**
      El tiempo, el implacable, el que pasó... ♫♬♩♪♪
      @param tomaPropiedadDeLasPersonas. En caso de que valga true, el Tiempo es el encargado de destruir las Personas. Por defecto es false.
    */
    Tiempo(bool tomaPropiedadDeLasPersonas = false);
    /**
      Destructor. Si es el propietario, borra a todas las Personas
    */
    ~Tiempo();
    /**
      El tiempo controla a las personas. Aquí se añade una persona, que va a envejecer conforme pasa el tiempo.
      @param persona
    */
    void pasaPara(Persona *persona);
    /**
      Busca a ver cuando se cumple una condición para todas las personas simultáneamente.
      @param tiempoMaximo
      @return el día en que se da la coincidencia
    */
    int buscarCoincidenciaEnCasa(int tiempoMaximo);
};


#else
class Tiempo;
#endif
