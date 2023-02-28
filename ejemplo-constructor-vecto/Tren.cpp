/*
  Archivo: Tren.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-09-08
  Fecha última modificación: 2020-09-08
  Licencia: GNU-GPL
*/

#include "Tren.h"

Tren::Tren(string destino, int numeroDeVagones, int asientosDeCadaVagon)
  : destino(destino)
{
  for(int cualVagon=0; cualVagon<numeroDeVagones; cualVagon++)
    vagones.push_back(Vagon(asientosDeCadaVagon));
}

