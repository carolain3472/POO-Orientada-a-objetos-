/*
  Utilidad: Entrada/Salida: cómo se imprime en pantalla y como se lee el teclado
  Cómo verificar entradas correctas, para evitar hackers. Aquí hacemos una verificación somera para números enteros sin signo. Se puede hacer algo más complejo, para que acepte también los signos al principio +- que no haya más de un punto, y el exponente con su signo (eso se puede hacer con Expresiones Regulares para Gramáticas Regulares, que verán en MATEMÁTICAS DISCRETAS II).
  Si el dato de entrada no es un número válido, se le pide al usuario que repita la entrada, usando un bucle while
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  string nombre; // Aqui voy a guardar el nombre
  int edad;
  double nota;
  string auxiliar;

  cout << "¿Cómo te llamas? ";
  getline(cin, nombre);

  // Verificación de que la entrada es correcta:
  while(true)
  {
    cout << "¿Cuál es tu edad? "; 
    getline(cin, auxiliar);
    
    bool esNumero = true;
    for(int letra=0; letra<auxiliar.length(); letra++)
      if(not isdigit(auxiliar[letra]))
      {
        esNumero = false;
        cout << "Indice=" << letra << "   Letra=" << auxiliar[letra] << endl;
      }

    if(esNumero)
      break;
    else
      cout << "Edad inválida. Intente de nuevo. Use solo dígitos" << endl;
  }
  edad = stoi(auxiliar);
    
  // Verificación de que la entrada es correcta:
  while(true)   // Bucle infinito
  {
    cout << "¿Qué nota sacaste? ";
    getline(cin, auxiliar);

    int contarPuntos = 0;
    bool esNumero = true;    // true   false
    for(int letra=0; letra<auxiliar.length(); letra++)
    {
      if(auxiliar[letra] == '.')
//        contarPuntos = contarPuntos + 1;
      contarPuntos++;
      if(not isdigit(auxiliar[letra]) and contarPuntos > 1)
      {
        esNumero = false;
      }
    }

    if(esNumero == true)
      break;
    else
      cout << "Nota inválida. Intente de nuevo. Use solo dígitos y el punto decimal (.)" << endl;
  }
  nota = stod(auxiliar);

  cout << "El estudiante " << nombre << ", cuya edad es " << edad << " años, sacó una nota de " << nota << endl;

  return 0;
}
