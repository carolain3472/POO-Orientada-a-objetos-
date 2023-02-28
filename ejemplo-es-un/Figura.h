/*
  Archivo: Figura.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-29
  Fecha última modificación: 2019-07-29
  Versión: 0.1
  Licencia: GPL
*/


/**
  @class Figura
  @brief
  Relaciones: es una clase abstracta. Hay que derivar de ella e implementar algunas funciones.
  Intención: es una clase abstracta que proporciona como funcionalidad básica las coordenadas, ancho y alto de una figura geométrica (x,y,ancho,alto)
*/

#ifndef FIGURA_H
#define FIGURA_H

#include "cmath"


class Figura
{
  protected:
    double x;
    double y;
    double ancho;
    double alto;
    const double PI;

  public:
    /**
     * @brief construye una Figura con unas coordenadas x,y, un ancho y un alto
     * @param x
     * @param y
     * @param ancho
     * @param alto
     */
    Figura(double x, double y, double ancho, double alto);
    /**
     * @brief ~Figura no hace nada en especial
     */
    virtual ~Figura();
    /**
     * @brief cualEsElAncho
     * @return el ancho
     */
    virtual double cualEsElAncho();
    /**
     * @brief cualEsElAlto
     * @return el alto
     */
    virtual double cualEsElAlto();
    /**
     * @brief agranda la figura multiplicando el ancho y el alto por un factor
     * @param factor
     */
    virtual void agrandar(double factor);
    /**
     * @brief area es una función virtual pura
     * @return el area
     */
    virtual double area() = 0;
    /**
     * @brief perimetro es una función virtual pura
     * @return el perimetro
     */
    virtual double perimetro() = 0;
};


#else
class Figura; // Declaración adelantada (guarda de Ángel GB)
#endif
