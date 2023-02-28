/*
  Archivo: Rectangulo.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-29
  Fecha última modificación: 2019-07-29
  Versión: 0.1
  Licencia: GPL
*/


/**
  @class Rectangulo
  @brief
  Relaciones: es una Figura
  Intención: es capaz de calcular el área y el perímetro de un Rectángulo
*/

#ifndef RECTANGULO_H
#define RECTANGULO_H

#include"Figura.h"


class Rectangulo : public Figura
{
  protected:

  public:
    /**
     * @brief Rectangulo construye Rectangulo
     * @param
     * @return this
     */
    Rectangulo(double x, double y, double ancho, double alto);
    /**
     * @brief ~Rectangulo no hace nada en especial
     */
    virtual ~Rectangulo();
    /**
     * @brief area
     * @return el area
     */
    virtual double area();
    /**
     * @brief perimetro
     * @return el perimetro
     */
    virtual double perimetro();
};


#else
class Rectangulo; // Declaración adelantada (guarda de Ángel GB)
#endif
