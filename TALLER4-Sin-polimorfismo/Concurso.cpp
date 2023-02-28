/*
  Archivo: Concurso.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2020-10-24
  Fecha última modificación: 2020-10-24
  Versión: 0.1
  Licencia: GPL
*/


#include "Concurso.h"
#include<iostream>
using namespace std;
    
Concurso::Concurso(string nombre, double bitcoinsDisponiblesParaPremios)
  : nombre(nombre), bitcoinsDisponiblesParaPremios(bitcoinsDisponiblesParaPremios)
{
  presentadorIdeasFijas = nullptr;
  presentadorAleatorio = nullptr;
  presentadorLoco = nullptr;
}


Concurso::~Concurso()
{
  for(int cualConcursante=0; cualConcursante<concursantes.size(); cualConcursante++)
  {
    delete concursantes[cualConcursante];
    concursantes[cualConcursante] = nullptr;
  }
  concursantes.clear();

  if(presentadorIdeasFijas)
  {
    delete presentadorIdeasFijas;
    presentadorIdeasFijas = nullptr;
  }

  if(presentadorAleatorio)
  {
    delete presentadorAleatorio;
    presentadorAleatorio = nullptr;
  }

  if(presentadorLoco)
  {
    delete presentadorLoco;
    presentadorLoco = nullptr;
  }
}


string Concurso::comoTeLlamas()
{
  return nombre;
}


void Concurso::nuevoConcursante(Concursante *concursante)
{
  concursantes.push_back(concursante);
}


void Concurso::nuevoPresentador(PresentadorIdeasFijas *presentador)
{
  if(presentadorIdeasFijas)  // Para evitar MEMORY LEAKS, por si acaso me ponen más de uno de estos presentadores
  {
    delete presentadorIdeasFijas;
    presentadorIdeasFijas = nullptr;
  }

  presentadorIdeasFijas = presentador;
  nombresPresentadores.push_back(presentador->comoTeLlamas());
}


void Concurso::nuevoPresentador(PresentadorAleatorio *presentador)
{
  if(presentadorAleatorio)  // Para evitar MEMORY LEAKS, por si acaso me ponen más de uno de estos presentadores
  {
    delete presentadorAleatorio;
    presentadorAleatorio = nullptr;
  }

  presentadorAleatorio = presentador;
  nombresPresentadores.push_back(presentador->comoTeLlamas());
}


void Concurso::nuevoPresentador(PresentadorLoco *presentador)
{
  if(presentadorLoco)  // Para evitar MEMORY LEAKS, por si acaso me ponen más de uno de estos presentadores
  {
    delete presentadorLoco;
    presentadorLoco = nullptr;
  }

  presentadorLoco = presentador;
  nombresPresentadores.push_back(presentador->comoTeLlamas());
}


void Concurso::entregarPremios()
{
  int cualPresentador = 0;
  for(int cualConcursante=0; cualConcursante<concursantes.size(); cualConcursante++)
  {
    double premio = 0;
    if(nombresPresentadores[cualPresentador] == "ideasFijas")
      if(presentadorIdeasFijas)
        premio = presentadorIdeasFijas->entregarPremio();
    if(nombresPresentadores[cualPresentador] == "aleatorio")
      if(presentadorAleatorio)
        premio = presentadorAleatorio->entregarPremio();
    if(nombresPresentadores[cualPresentador] == "loco")
      if(presentadorLoco)
        premio = presentadorLoco->entregarPremio();
    
    if(premio > bitcoinsDisponiblesParaPremios)
      premio = bitcoinsDisponiblesParaPremios;
    bitcoinsDisponiblesParaPremios -= premio;
    
    concursantes[cualConcursante]->recibirPremio(premio);
    
    cualPresentador++;  // Aquí se pasa al siguiente presentador
    if(cualPresentador >= nombresPresentadores.size()) // Y si se han terminado...
      cualPresentador = 0;                             // ... entonces se vuelve a comenzar por el primero
  }
}


string Concurso::mostrarPremiosDeConcursantes()
{
  string resultado;

  for(int cualConcursante=0; cualConcursante<concursantes.size(); cualConcursante++)
    resultado += concursantes[cualConcursante]->comoTeLlamas() + " ganó " + to_string(concursantes[cualConcursante]->quePremioTeDieron()) + " bitcoins\n";

  return resultado;
}



