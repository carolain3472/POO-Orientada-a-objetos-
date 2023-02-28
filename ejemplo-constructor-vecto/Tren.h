/*
  Archivo: Tren.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-09-08
  Fecha última modificación: 2020-09-08
  Licencia: GNU-GPL
*/

/*
  Clase: Tren
  Atributos: se dirige hacia un destino y tiene varios vagones (un vector)
  Funcionalidades:
    - Pendiente
  Relaciones: ninguna
*/

#ifndef TREN_H
#define TREN_H

#include "Vagon.h"
#include <string>
#include <vector>
using namespace std;

class Tren
{
  private:
    string destino;
    vector <Vagon> vagones;
  public:
    Tren(string destino, int numeroDeVagones, int asientosDeCadaVagon);
};

#else
class Tren;
#endif

