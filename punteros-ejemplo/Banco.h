/*
  Archivo: Banco.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-09-29
  Fecha última modificación: 2020-10-07
  Versión: 0.2
  Licencia: GNU-GPL
*/

/*
  Clase: Banco
  Atributos:
    - una tasa de interés anual
  Funcionalidades:
    - Crear una cuenta a un usuario
    - Añadir plata a la cuenta de un usuario
    - Sacar plata de una cuenta de un usuario
    - Cada año suma los intereses a cada cuenta
  Relaciones:
    - conoce las cuentas bancarias de los clientes (tiene un vector de punteros a CuentaBancaria)
    
    NOTA: Las funciones crearCuenta() y ~Banco() (el destructor) las entenderemos más adelante.
*/

#ifndef BANCO_HH
#define BANCO_HH

#include <vector>
#include <utility>
#include <string>
#include "CuentaBancaria.h"
using namespace std;

class Banco
{
  private:
    vector <CuentaBancaria *> cuentas;
    double interes;

  public:
    Banco(double interes);
    ~Banco();
    void recibirPlata(string nombrePersona, int cuantaPlata);
    void entregarPlata(string nombrePersona, int cuantaPlata);
    string reporteTotal();
    void generaInteresesAnuales();
    // NUEVAS FUNCIONES:
    CuentaBancaria *crearCuenta(string nombrePersona, int plataInicial);
};

#else
class Banco;
#endif
