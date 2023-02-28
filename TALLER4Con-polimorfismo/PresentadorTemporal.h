#include "PresentadorTemporal.h"
//#include <iostream>

PresentadorTemporal::PresentadorTemporal()
  : Presentador("temporal")
{
  // No hay que hacer nada
}


PresentadorTemporal::~PresentadorTemporal()
{
  // No hay que hacer nada
}


double PresentadorTemporal::entregarPremio()
{
  // obtiene la hora actual
  time_t horaACtual = time(0);
  // convierte la hora actual a una estructura de datos, obtiene un puntero y de allí obtiene los minutos:
  int minutos = gmtime(&horaACtual)->tm_min;
  // std::cerr << "MINUTOS:" << minutos << std::endl;
  return 100 * minutos;
}
