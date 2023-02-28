/*
  Archivo: Banco.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-09-29
  Fecha última modificación: 2020-09-29
  Versión: 0.1
  Licencia: GNU-GPL
*/

/*
  Clase: Banco
  Atributos:
    - vector de parejas <nombre de usuario, plata>
    - una tasa de interés anual
  Funcionalidades:
    - Crear una cuenta a un usuario
    - Añadir plata a la cuenta de un usuario
    - Sacar plata de una cuenta de un usuario
    - Cada año suma los intereses a cada cuenta
  Relaciones:
    - ninguna 
*/

#ifndef BANCO_HH
#define BANCO_HH

#include <vector>
#include <utility>
#include <string>
//#include <iostream>
using namespace std;

class Banco
{
  private:
    vector <pair <string, int>> cuentas;
    double interes;

  public:
    Banco(double interes);
    void recibirPlata(int cuantaPlata, string nombreCuenta);
    void entregarPlata(int cuantaPlata, string nombreCuenta);
    string reporteTotal();
    void generaInteresesAnuales();
};

#else
class Banco;
#endif