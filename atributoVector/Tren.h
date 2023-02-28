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

