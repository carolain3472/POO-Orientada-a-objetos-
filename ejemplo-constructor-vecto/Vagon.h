/*
  Archivo: Vagon.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-09-08
  Fecha última modificación: 2020-09-08
  Licencia: GNU-GPL
*/

/*
  Clase: Vagon
  Atributos: tiene un número de asientos prefijado
  Funcionalidades:
    - Pendiente
  Relaciones: ninguna
*/

#ifndef VAGON_H
#define VAGON_H

class Vagon
{
  private:
    int numeroDeAsientos;
  public:
    Vagon(int numeroDeAsientos);
};

#else
class Vagon;
#endif

