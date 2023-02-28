/*
  Archivo: LibroElectronico.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-28
  Fecha última modificación: 2020-03-31
  Versión: 0.1
  Licencia: GPL
*/


/**
  @class LibroElectronico
  @brief
  Relaciones: es un Libro
  Intención: además de la funcionalidad del Libro, los libros
    electrónicos tienen impreso en la portada el nombre del comprador.
*/

#ifndef LIBROELECTRONICO_H
#define LIBROELECTRONICO_H

#include "Libro.h"


class LibroElectronico : public Libro
{
  protected:

  public:
    /**
     * @brief LibroElectronico construye LibroElectronico
     * @param titulo
     * @param numeroDePaginas
     * @param comprador (por defecto es ninguno)
     */
    LibroElectronico(string titulo, int numeroDePaginas, string comprador);
    /**
     * @brief ~LibroElectronico no hace nada en especial
     */
    virtual ~LibroElectronico();
};


#else
class LibroElectronico; // Declaración adelantada (guarda de Ángel GB)
#endif
