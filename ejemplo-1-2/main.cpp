/*
  Utilidad: Entrada/Salida: cómo se imprime en pantalla y como se lee el teclado
  Cómo verificar entradas correctas, para evitar hackers. Aquí hacemos una verificación somera para números enteros sin signo. Se puede hacer algo más complejo, para que acepte también los signos al principio +- que no haya más de un punto, y el exponente con su signo (eso se puede hacer con Expresiones Regulares para Gramáticas Regulares, que verán en MATEMÁTICAS DISCRETAS II).
*/

#include <iostream>
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

  cout << "¿Cuál es tu edad? ";
  
  getline(cin, auxiliar);

  // Verificación de que la entrada es correcta:
  bool esNumero = true;
  for(int letra=0; letra<auxiliar.length(); letra++)
    if(not isdigit(auxiliar[letra]))
      esNumero = false;
  if(esNumero)
    edad = stoi(auxiliar);
  else
    cout << "ERROR en la edad" << endl;
    
  cout << "¿Qué nota sacaste? ";
  getline(cin, auxiliar);

  // Verificación de que la entrada es correcta:
  esNumero = true;
  for(int letra=0; letra<auxiliar.length(); letra++)
    if(not isdigit(auxiliar[letra]) and auxiliar[letra] != '.')
      esNumero = false;
  if(esNumero)
    nota = stod(auxiliar);
  else
    cout << "ERROR en la nota" << endl;

  cout << "El estudiante " << nombre << ", cuya edad es " << edad << " años, sacó una nota de " << nota << endl;

  return 0;
}