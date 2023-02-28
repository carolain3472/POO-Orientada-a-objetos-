/*
  Archivo: CitasCelebres.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-09-14
  Fecha última modificación: 2020-09-14
  Versión: 0.1
  Licencia: GPL
*/


#include "CitasCelebres.h"


CitasCelebres::CitasCelebres()
{
//  autoresYCitas.clear();
  // No hay que hacer nada, porque el vector se construye vacío de manera automática
}


CitasCelebres::CitasCelebres(string autores[], string citas[], int totalCitas)
{
  for(int cual=0; cual<totalCitas; cual++)
    anadirCita(autores[cual], citas[cual]);
}


void CitasCelebres::anadirCita(string autor, string cita)
{
  vector <string> unAutorYSuCita;
  unAutorYSuCita.push_back(autor);
  unAutorYSuCita.push_back(cita);
  autoresYCitas.push_back(unAutorYSuCita);
}


void CitasCelebres::anadirCita(string cita)
{
  anadirCita("ANONIMO", cita);
}


string CitasCelebres::dimeUnaCita() 
{
  int cuantasCitasHay = autoresYCitas.size();
  int indiceAlAzar = rand() % cuantasCitasHay;
  return autoresYCitas[indiceAlAzar][1] + " (" + autoresYCitas[indiceAlAzar][0] + ")";
}


string CitasCelebres::dimeUnaCita(string autor) 
{
  string resultado = "NO SE ENCONTRÓ";
  for(int cual=0; cual<autoresYCitas.size(); cual++)
    if(autoresYCitas[cual][0] == autor)
    {
      resultado = autoresYCitas[cual][1] + " (" + autoresYCitas[cual][0] + ")";
      break;
    }
      
  return resultado;
}


string CitasCelebres::dimeUnaCita(int numeroDeCitas) 
{
  string citas;
  for(;numeroDeCitas>=0; numeroDeCitas--)
    citas += dimeUnaCita() + "\n";
  return citas;
}





