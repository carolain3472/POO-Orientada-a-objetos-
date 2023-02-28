/*
  Archivo: Elipse.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-29
  Fecha última modificación: 2019-07-29
  Versión: 0.1
  Licencia: GPL
*/


/**
  @class Elipse
  @brief
  Relaciones: es una Figura
  Intención: es capaz de calcular el área y el perímetro (aprox) de una Elipse
*/

#ifndef ELIPSE_H
#define ELIPSE_H

#include"Figura.h"


class Elipse : public Figura
{
  protected:

  public:
    /**
     * @brief Elipse construye Elipse
     * @param
     * @return this
     */
    Elipse(double x, double y, double ancho, double alto);
    /**
     * @brief ~Elipse no hace nada en especial
     */
    virtual ~Elipse();
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
class Elipse; // Declaración adelantada (guarda de Ángel GB)
#endif
