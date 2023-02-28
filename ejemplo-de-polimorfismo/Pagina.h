/*
  Archivo: Pagina.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-28
  Fecha última modificación: 2020-03-31
  Versión: 0.1
  Licencia: GPL
*/


/**
  @class Pagina
  @brief
  Relaciones: ninguna
  Intención: la página de un libro tiene texto que se puede leer
*/

#ifndef PAGINA_H
#define PAGINA_H

#include<string>
using namespace std;


class Pagina
{
  protected:
    string texto;

  public:
    /**
     * @brief Pagina construye Pagina
     * @param
     * @return this
     */
    Pagina(string texto);
    /**
     * @brief ~Pagina no hace nada en especial
     */
    virtual ~Pagina();
    /**
     * @brief dimeElTexto
     * @return el texto completo de la página (en este ejemplo solo es el número de página, pero podría leerse de un archivo)
     */
    virtual string dimeElTexto();
};


#else
class Pagina; // Declaración adelantada (guarda de Ángel GB)
#endif
