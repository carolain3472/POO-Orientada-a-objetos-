/*
  Archivo: Persona.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-09-29
  Fecha última modificación: 2020-10-07
  Versión: 0.2
  Licencia: GNU-GPL
*/

/*
  Clase: Persona
  Atributos:
    - nombre
    - plata que tiene en el bolsillo
  Funcionalidades:
    - le puedo preguntar el nombre
    - le puedo preguntar la plata que tiene
    - le puedo preguntar los objetos que tiene
    - le puedo pedir que de planta
    - le puedo pedir que reciba plata
    - le puedo pedir que de un objeto
    - le puedo pedir que reciba un objeto
    NUEVAS FUNCIONES:
     - abrir una cuenta bancaria
     - meter plata en la cuenta
     - sacar plata de la cuenta
  Relaciones:
    - conoce objetos (vector de strings)
    NUEVA RELACIÓN:
    - conoce su cuenta bancaria (si la tiene)
*/

#ifndef H_PERSONA
#define H_PERSONA

#include <string>
#include <vector>
#include "CuentaBancaria.h"
using namespace std;

class Persona
{
  private:
    string nombre;
    int plataBolsillo;
    vector <string> objetos;
    CuentaBancaria *cuenta;

  public:
    /**
      Se crea una Persona con un nombre, una plata inicial en el bolsillo y quizás un objeto. Inicialmente no tiene cuenta bancaria
    */
    Persona(string nombre, int plata, string objeto="");
    string dimeTuNombre();
    int cuantaPlata();
    string objetosQuePosee();
    int daPlata(int cuantaPlata);
    int daTodaLaPlata();
    void recibePlata(int cuantaPlata);
    string daObjeto(string queObjeto);
    void recibeObjeto(string queObjeto);
    // Nuevas funciones:
    void abrirCuentaBancaria(CuentaBancaria *cuenta);
    void guardaPlataEnCuentaBancaria(int cuantaPlata);
    void sacarPlataDeCuentaBancaria(int cuantaPlata);
};

#else
class Persona;
#endif
