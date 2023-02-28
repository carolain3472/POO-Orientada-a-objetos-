/*
  Archivo: Elipse.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-29
  Fecha última modificación: 2019-07-29
  Versión: 0.1
  Licencia: GPL
*/

#include "Elipse.h"

Elipse::Elipse(double x, double y, double ancho, double alto) : Figura(x, y, ancho, alto)
{
}


Elipse::~Elipse()
{
  // No hace nada
}


double Elipse::area()
{
  return PI * (ancho / 2) * (alto / 2);  // https://es.wikihow.com/calcular-el-%C3%A1rea-de-un-elipse
}


double Elipse::perimetro()
{
  return 2 * PI * sqrt(((ancho/2)*(ancho/2) + (alto/2)*(alto/2))/2);  // Fórmula aproximada:  https://www.universoformulas.com/matematicas/geometria/perimetro-elipse/
}



