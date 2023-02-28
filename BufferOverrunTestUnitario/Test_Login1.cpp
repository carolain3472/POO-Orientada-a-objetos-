/*
  Archivo: Test_Login1.cpp
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



#define CATCH_CONFIG_MAIN  // Esta instrucción le dice a CATCH2 que cree automáticamente su propio programa principal main(). Obviamente, esta instrucción debe estar en un único archivo, y hay que comentar nuestro main()
#include "catch_amalgamated.hpp"  // Obligatorio


#include "Login.h"  // Mi clase a verificar



TEST_CASE( "Vamos a probar con varios passwords; el primero es correcto, los demás no", "[Login]" ) 
{
    Login sistema;   // Creo un objeto, que voy a testear

    // Llamo a funciones del objeto y verifico si el resultado es correcto:
    REQUIRE( sistema.verificarPassword("12345678") == true );
    REQUIRE( sistema.verificarPassword("abcd") == false );
    REQUIRE( sistema.verificarPassword("abcdefghijabcdefghij") == false );
}




