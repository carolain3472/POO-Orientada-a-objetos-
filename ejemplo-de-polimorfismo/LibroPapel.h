/*
  Archivo: LibroPapel.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-28
  Fecha última modificación: 2020-03-31
  Versión: 0.1
  Licencia: GPL
*/


/**
  @class LibroPapel
  @brief
  Relaciones: es un Libro
  Intención: tiene la funcionalidad de un Libro. No modifica nada del Libro.
*/

#ifndef LIBROPAPEL_H
#define LIBROPAPEL_H

#include"Libro.h"


class LibroPapel : public Libro
{
  protected:

  public:
    /**
     * @brief LibroPapel construye LibroPapel
     * @param titulo
     * @param numeroDePaginas
     */
    LibroPapel(string titulo, int numeroDePaginas);
    /**
     * @brief ~LibroPapel no hace nada en especial
     */
    virtual ~LibroPapel();
};


#else
class LibroPapel; // Declaración adelantada (guarda de Ángel GB)
#endif
