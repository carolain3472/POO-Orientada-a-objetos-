/*
  Archivo: CuentaBancaria.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-10-07
  Fecha última modificación: 2020-10-07
  Versión: 0.1
  Licencia: GNU-GPL
*/

/*
  Clase: CuentaBancaria
  Atributos:
    - una tasa de interés anual
  Funcionalidades:
    - Crear una cuenta a un usuario
    - Añadir plata a la cuenta de un usuario
    - Sacar plata de una cuenta de un usuario
    - Cada año suma los intereses a cada cuenta
  Relaciones:
    - conoce las cuentas bancarias de los clientes (tiene un vector de punteros a CuentaBancaria)
*/

#ifndef CUENTABANCARIA_HH
#define CUENTABANCARIA_HH

#include <string>
using namespace std;

class CuentaBancaria
{
  private:
    string nombrePersona;
    int plata;

  public:
    CuentaBancaria(string nombrePersona, int plataInicial);
    string dimeElNombre();
    void sacarPlata(int cuantaPlata);
    void guardarPlata(int cuantaPlata);
    int cuantoHay();
};

#else
class CuentaBancaria;
#endif
