/*
  Archivo: Main.cpp
  Autores: 
    Carolain Jimenez 
    Luis Felipe Belalcazar
    Natalia Lopez Osorio
  Emails:
    carolain.jimenez@correounivalle.edu.co
    luis.felipe.belalcazar@correounivalle.edu.co
    natalia.lopez.osorio@correounivalle.edu.co
  Fecha creación: 2018-02-13
  Fecha última modificación: 2020-09-11
  Versión: 0.1
  Licencia: GPL

  Codigo tomado del autor Ángel García Baños 
*/

/* 
  Utilidad: Hacer una mudanza.
 
  Historia: Vamos a modelar una empresa que contiene camiones para poder transportar los objetos de la mudanza, los cuales tienen distinto peso.

  La empresa tiene un nombre, un nit y una flota de camiones.Puede comprar camiones los cuales tienen un numero de placa y una capacidad maxima de carga. Ademas, la empresa carga los objetos que se puedan en cada camion sin superar la capacidad de cada uno, al terminar me avisara la carga total transportada en toda la mudanza.
  
 
*/

#include <iostream>
#include "EmpresaDeMudanza.h"
using namespace std;

int main()
{
  EmpresaDeMudanza empresaA("Empaques", "1.11.890.00-3");
 
  empresaA.comprarCamion("ABC-001", 10000);
  empresaA.comprarCamion("DEF-002", 5000);


  vector <int> pesoObjeto = { 1000, 3000, 5000, 2000, 500, 1800, 4000, 30 };

  cout<<"El peso total transportado en la mudanza fue: "<<empresaA.empresaHacerMudanza(pesoObjeto,0) << " kg." <<endl;


  return 0;
}