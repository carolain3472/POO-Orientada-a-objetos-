/*
  Archivo: Login.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-11-02
  Fecha última modificación: 2020-11-02
  Licencia: GNU-GPL
  Versión: 2.0
*/

#include"Login.h"


Login::Login()
{
  passwordUltrasecreto="12345678";
}


Login::~Login()
{
  // No hay que hacer nada
}


bool Login::verificarPassword(string passwordUsuario)
{
  passwordAProbar = passwordUsuario;
//  std::cerr << "INTERNO passwordAProbar:" << passwordAProbar << std::endl;
//  std::cerr << "INTERNO passwordUltrasecreto:" << passwordUltrasecreto << std::endl;

  return passwordAProbar == passwordUltrasecreto;
  
/* También se puede verificar letra a letra:
  bool autorizado = true;
  
  if(passwordUltrasecreto.size() != passwordAProbar.size())
    autorizado = false;
  else
    for(int cualLetra = 0; cualLetra < passwordUltrasecreto.size() and cualLetra < passwordAProbar.size(); cualLetra++)
      if(passwordUltrasecreto[cualLetra] != passwordAProbar[cualLetra])
        autorizado = false;

  return autorizado;
*/
}

