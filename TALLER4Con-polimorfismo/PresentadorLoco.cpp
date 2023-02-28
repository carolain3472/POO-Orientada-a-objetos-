/*
  Archivo: PresentadorLoco.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-10-24
  Fecha última modificación: 2020-11-06
  Versión: 0.1
  Licencia: GPL
*/

#include "PresentadorLoco.h"


PresentadorLoco::PresentadorLoco()
: Presentador("loco")
{
  // No hay que hacer nada
}


PresentadorLoco::~PresentadorLoco()
{
  // No hay que hacer nada
}


double PresentadorLoco::entregarPremio()
{
  return 200 * nombre.size();
}



