/*
  Archivo: Libro.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-28
  Fecha última modificación: 2020-03-31
  Versión: 0.1
  Licencia: GPL
*/


/**
  @class Libro
  @brief
  Relaciones: 
    - Posse una Cubierta
    - Conoce Páginas (es propietario) usando un vector de punteros a Pagina
  Intención:
    - Crear la funcionalidad básica de un libro, que luego debe concretarse en libros de papel, electrónicos, etc.
*/

#ifndef LIBRO_H
#define LIBRO_H

#include"Cubierta.h"
#include"Pagina.h"
#include<vector>
#include<string>
using namespace std;

class Libro
{
  protected:
    Cubierta cubierta;
    vector <Pagina *> paginas;
    int numeroDePaginas;

  public:
    /**
     * @brief construye un Libro con titulo, numero de páginas y comprador opcional
     * @param titulo
     * @param numeroDePaginas
     */
    Libro(string titulo, int numeroDePaginas, string comprador="");
    /**
     * @brief ~Libro destruye los objetos de los que es propietario
     */
    virtual ~Libro();
    /**
     * @brief leer
     * @return todo el texto del libro
     */
    virtual string leer();
};


#else
class Libro; // Declaración adelantada (guarda de Ángel GB)
#endif
