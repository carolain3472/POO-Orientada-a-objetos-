/*
  Archivo: Cubierta.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-28
  Fecha última modificación: 2020-03-31
  Versión: 0.1
  Licencia: GPL
*/

#include "Cubierta.h"

Cubierta::Cubierta(string titulo, string comprador) : titulo(titulo), comprador(comprador)
{
}


Cubierta::~Cubierta()
{
  // No hace nada
}


string Cubierta::dimeElTexto()
{
  string texto = "Titulo: " + titulo;
  if(not comprador.empty())
    texto += string("\nComprador: ") + comprador;
  return texto;
}
