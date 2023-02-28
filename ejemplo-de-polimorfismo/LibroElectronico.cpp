/*
  Archivo: LibroElectronico.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-7-28
  Fecha última modificación: 2020-03-31
  Versión: 0.1
  Licencia: GPL
*/

#include "LibroElectronico.h"

LibroElectronico::LibroElectronico(string titulo, int numeroDePaginas, string comprador) : Libro(titulo, numeroDePaginas, comprador)
{
}


LibroElectronico::~LibroElectronico()
{
  // No hay que hacer nada
}
