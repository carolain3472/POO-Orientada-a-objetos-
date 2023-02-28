/*
  Archivo: Pagina.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-28
  Fecha última modificación: 2020-03-31
  Versión: 0.1
  Licencia: GPL
*/

#include "Pagina.h"

Pagina::Pagina(string texto) : texto(texto)
{
}


Pagina::~Pagina()
{
  // No hay que hacer nada
}


string Pagina::dimeElTexto()
{
  return texto;
}
