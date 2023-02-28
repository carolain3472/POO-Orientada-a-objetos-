/*
  Archivo: AudioLibro.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-28
  Fecha última modificación: 2020-03-31
  Versión: 0.1
  Licencia: GPL
*/


/**
  @class AudioLibro
  @brief
  Relaciones: es parecido a un Libro
  Intención: los Audiolibros son libros que se pueden escuchar
*/

#ifndef AUDIOLIBRO_H
#define AUDIOLIBRO_H

#include"Libro.h"


class AudioLibro : public Libro
{
  protected:

  public:
    /**
     * @brief AudioLibro construye AudioLibro
     * @param titulo
     * @param numeroDePaginas
     */
    AudioLibro(string titulo, int numeroDePaginas);
    /**
     * @brief ~AudioLibro no hace nada en especial
     */
    virtual ~AudioLibro();
    /**
     * @brief leer
     * @return solo la portada. El resto del libro no se puede leer
     */
    virtual string leer();
    /**
     * @brief escuchar
     * @return todo el texto del libro
     */
    virtual string escuchar();
};


#else
class AudioLibro; // Declaración adelantada (guarda de Ángel GB)
#endif
