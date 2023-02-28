/*
  Archivo: Login.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-11-02
  Fecha última modificación: 2020-11-02
  Licencia: GNU-GPL
  Versión: 2.0
*/

/*
  Clase: Login
  Atributos: password ultrasecreto
  Funcionalidades:
    - Puedo darle un password y preguntarle si es el correcto.
  Relaciones: ninguna
  
  NOTA: esta clase sí está bien implementada y no tiene fallos de seguridad
*/

#ifndef LOGIN_H
#define LOGIN_H

#include<string>
#include <iostream>
using namespace std;

class Login
{
  protected:
    string passwordAProbar;
    string passwordUltrasecreto;

  public:
    /**
      Constructor. No hace nada
    */
    Login();
    /**
      Destructor. No hace nada
    */
    virtual ~Login();
    /**
      Retorna true si el password del usuario coincide con el password ultrasecreto; y false si no coincide.
    */
    virtual bool verificarPassword(string passwordUsuario);
};

#else
class Login; // Declaración adelantada
#endif
