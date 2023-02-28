/*
  Archivo: Libro.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-28
  Fecha última modificación: 2020-03-31
  Versión: 0.1
  Licencia: GPL
*/

#include "Libro.h"

Libro::Libro(string titulo, int numeroDePaginas, string comprador) : cubierta(titulo, comprador), numeroDePaginas(numeroDePaginas)
{
  for(int cualPagina=0; cualPagina<numeroDePaginas; cualPagina++)
    paginas.push_back(new Pagina("Esta es la página " + to_string(cualPagina)));
}


Libro::~Libro()
{
  for(int cualPagina=0; cualPagina<numeroDePaginas; cualPagina++)
  {
    delete paginas[cualPagina];
    paginas[cualPagina] = nullptr;
  }
}


string Libro::leer()
{
  string textoCompleto = cubierta.dimeElTexto() + "\n";

  for(int cualPagina=0; cualPagina<numeroDePaginas; cualPagina++)
    textoCompleto += paginas[cualPagina]->dimeElTexto() + "\n";

  return textoCompleto;
}
