/*
  Archivo: Test_Login2.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2020-11-02
  Fecha última modificación: 2020-11-02
  Licencia: GNU-GPL
*/

/*
  Utilidad para la asignatura: Aprender a hacer test unitarios con la herramienta CATCH2 (hay muchas más herramientas).
  Puede haber muchos archivos de test, pero solo en uno hay que poner #define CATCH_CONFIG_MAIN
  Para compilar hay que poner lo de siempre:
    c++ *.cpp -o main
*/



//#define CATCH_CONFIG_MAIN  // Esta instrucción le dice a CATCH2 que cree automáticamente su propio programa principal main(). Obviamente, esta instrucción debe estar en un único archivo, y hay que comentar nuestro main()

#include "catch_amalgamated.hpp"  // Obligatorio


#include "Login.h"  // Mi clase a verificar



SCENARIO( "Para loguearse hay que saber el password", "[Login]" ) 
{
  GIVEN( "Dado que un sistema está protegido por un login" )
  {
    Login sistema;   // Creo un objeto, que voy a testear

    WHEN( "Cuando introduzco el password correcto" )
    {
      bool esCorrecto = sistema.verificarPassword("12345678");
      THEN( "Entonces me debe permitir entrar" ) 
      {
        REQUIRE( esCorrecto == true );
      }
    }
    WHEN( "Cuando introduzco un password incorrecto" ) 
    {
      bool esCorrecto = sistema.verificarPassword("abcd");
      THEN( "Entonces me debe negar el acceso" ) 
      {
        REQUIRE( esCorrecto == false );
      }
    }
    WHEN( "Cuando introduzco el password incorrecto y muy largo (específicamente diseñado para producir un buffer overflow)" )
    {
      bool esCorrecto = sistema.verificarPassword("abcdefghijabcdefghij");
      THEN( "Entonces me debe negar el acceso" ) 
      {
        REQUIRE( esCorrecto == false );
      }
    }
  }
}



