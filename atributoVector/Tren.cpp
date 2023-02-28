
#include "Tren.h"

Tren::Tren(string destino, int numeroDeVagones, int asientosDeCadaVagon)
  : destino(destino)
{
  for(int cualVagon=0; cualVagon<numeroDeVagones; cualVagon++)
    vagones.push_back(Vagon(asientosDeCadaVagon));
}

