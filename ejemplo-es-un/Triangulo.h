/*
  Archivo: Triangulo.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-29
  Fecha última modificación: 2019-07-29
  Versión: 0.1
  Licencia: GPL
*/


/**
  @class Triangulo
  @brief
  Relaciones: es una Figura
  Intención: es capaz de calcular el área y el perímetro de un Triangulo isósceles
*/

#ifndef TRIANGULO_H
#define TRIANGULO_H

#include"Figura.h"


class Triangulo : public Figura
{
  protected:

  public:
    /**
     * @brief Triangulo construye Triangulo
     * @param
     * @return this
     */
    Triangulo(double x, double y, double ancho, double alto);
    /**
     * @brief ~Triangulo no hace nada en especial
     */
    virtual ~Triangulo();
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
class Triangulo; // Declaración adelantada (guarda de Ángel GB)
#endif
