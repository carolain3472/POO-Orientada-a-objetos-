/*
  Archivo: PresentadorIdeasFijas.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-10-24
  Fecha última modificación: 2020-10-24
  Versión: 0.1
  Licencia: GPL
*/

#include "PresentadorIdeasFijas.h"


PresentadorIdeasFijas::PresentadorIdeasFijas()
  : nombre("ideasFijas")
{
  // No hay que hacer nada
}


PresentadorIdeasFijas::~PresentadorIdeasFijas()
{
  // No hay que hacer nada
}


string PresentadorIdeasFijas::comoTeLlamas()
{
  return nombre;
}


double PresentadorIdeasFijas::entregarPremio()
{
  return 100;
}



