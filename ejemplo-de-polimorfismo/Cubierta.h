/*
  Archivo: Cubierta.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-28
  Fecha última modificación: 2020-03-31
  Versión: 0.1
  Licencia: GPL
*/


/**
  @class Cubierta
  @brief
  Relaciones: ninguna
  Intención: la cubierta de un libro tiene un título
    y opcionalmente el nombre del comprador. Se puede leer todo ello.
*/

#ifndef CUBIERTA_H
#define CUBIERTA_H

#include<string>
using namespace std;


class Cubierta
{
  protected:
    string titulo;
    string comprador;

  public:
    /**
     * @brief Cubierta construye Cubierta
     * @param
     * @return this
     */
    Cubierta(string titulo, string comprador="");
    /**
     * @brief ~Cubierta no hace nada en especial
     */
    virtual ~Cubierta();
    /**
     * @brief dimeElTexto
     * @return el texto completo de la Cubierta
     */
    virtual string dimeElTexto();
};


#else
class Cubierta; // Declaración adelantada (guarda de Ángel GB)
#endif
