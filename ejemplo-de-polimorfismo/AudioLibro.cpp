/*
  Archivo: AudioLibro.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-7-28
  Fecha última modificación: 2020-03-31
  Versión: 0.1
  Licencia: GPL
*/

#include "AudioLibro.h"

AudioLibro::AudioLibro(string titulo, int numeroDePaginas) : Libro(titulo, numeroDePaginas)
{
}


AudioLibro::~AudioLibro()
{
  // No hay que hacer nada
}


string AudioLibro::leer()
{
  string textoCompleto = string("ESTE LIBRO LO PUEDES ESCUCHAR\n") + cubierta.dimeElTexto() + "\n\n";
  return textoCompleto;
}


string AudioLibro::escuchar()
{
  string textoCompleto = " ♫ ♫ ♫ " + cubierta.dimeElTexto() + "\n\n";

  for(int cualPagina=0; cualPagina<numeroDePaginas; cualPagina++)
    textoCompleto += paginas[cualPagina]->dimeElTexto() + "\n";
  textoCompleto += " ♫ ♫ ♫ ";
  return textoCompleto;
}
