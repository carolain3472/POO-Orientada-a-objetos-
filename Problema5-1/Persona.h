/*
  Archivo: Persona.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-09-29
  Fecha última modificación: 2020-09-29
  Versión: 0.1
  Licencia: GNU-GPL
*/

/*
  Clase: Persona
  Atributos:
    - nombre
    - plata que tiene
  Funcionalidades:
    - le puedo preguntar el nombre
    - le puedo preguntar la plata que tiene
    - le puedo preguntar los objetos que tiene
    - le puedo pedir que de planta
    - le puedo pedir que reciba plata
    - le puedo pedir que de un objeto
    - le puedo pedir que reciba un objeto
  Relaciones:
    - conoce objetos (vector de strings)
*/

#ifndef H_PERSONA
#define H_PERSONA

#include <string>
#include <vector>
using namespace std;

class Persona
{
  private:
    string nombre;
    int plata;
    vector <string> objetos;

  public:
    Persona(string nombre, int plata, string objeto="");
    string dimeTuNombre();
    int cuantaPlata();
    string objetosQuePosee();
    int daPlata(int cuantaPlata);
    int daTodaLaPlata();
    void recibePlata(int cuantaPlata);
    string daObjeto(string queObjeto);
    void recibeObjeto(string queObjeto);
};

#else
class Persona;
#endif