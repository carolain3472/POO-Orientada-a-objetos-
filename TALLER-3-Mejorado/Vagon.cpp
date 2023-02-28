
#include "Vagon.h"

Vagon::Vagon(int numeroDeVagon, bool transportaEnfermos)
  :numeroDeVagon(numeroDeVagon), transportaEnfermos(transportaEnfermos)
{
  //No hay que hacer nada 
}

int Vagon::numeroVagon()
{
  return numeroDeVagon;
}

bool Vagon::tienePersonasEnfermas()
{
  return transportaEnfermos;
}