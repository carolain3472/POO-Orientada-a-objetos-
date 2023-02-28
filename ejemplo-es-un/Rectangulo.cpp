/*
  Archivo: Rectangulo.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-29
  Fecha última modificación: 2019-07-29
  Versión: 0.1
  Licencia: GPL
*/

#include "Rectangulo.h"

Rectangulo::Rectangulo(double x, double y, double ancho, double alto) : Figura(x, y, ancho, alto)
{
}


Rectangulo::~Rectangulo()
{
  // No hace nada
}


double Rectangulo::area()
{
  return ancho * alto;
}


double Rectangulo::perimetro()
{
  return 2 * (ancho + alto);
}
