/*
  Archivo: Jugador.cpp
  Autores: 
    Carolain Jimenez 
    Luis Felipe Belalcazar
    Natalia Lopez Osorio
  Emails:
    carolain.jimenez@correounivalle.edu.co
    luis.felipe.belalcazar@correounivalle.edu.co
    natalia.lopez.osorio@correounivalle.edu.co
  Fecha creación: 2020-10-01
  Fecha última modificación: 2020-12-06
  Versión: 0.1
  Licencia: GPL
*/

#include "Jugador.h"

Jugador::Jugador( vector <Individuo*> personajes, vector <Lugar*> lugares, Barca *barca)
{
  //Cargar los personajes
  for(int personaje=0; personaje<personajes.size(); personaje++)
  {
    this->personajes.push_back(personajes.at(personaje));
  };

  //Cargar los lugares
  for(int lugar=0; lugar<lugares.size(); lugar++)
  {
    this->lugares.push_back(lugares.at(lugar));
  };
  
  //Cargar el puntero a la clase barca, para mover la barca
  this->barcaABarca=barca;
} 


Jugador::~Jugador()
{
  //No hace nada
}


string Jugador::anhadirEspacios(string textoParaAumentar)
{
  if(textoParaAumentar.size()<9)
  {
    for(int espacio=textoParaAumentar.size(); espacio<9; espacio++)
    {
      textoParaAumentar+=" ";    
    }
  } 
  return textoParaAumentar;
}



void Jugador::jugar()
{   
  //Presentacion del juego 
  cout<< "\nCapuchitos S.A. (Una empresa de la EISC) Presenta: "<<endl;
  cout<<"\n\t\t\t\t\t\t  ¡¡CARONTE!!\t"<<endl; 
  cout<<"\nLas órdenes que puedes dar son (usando el teclado):"<<endl;
  
  //¿como jugar?
  cout<<"B la Barca se mueve a la otra orilla"<<endl;

  for(int personaje=0; personaje<personajes.size(); personaje++)
  {
    string control= personajes.at(personaje)->cualEsElControl();
    string nombrePersonaje= personajes.at(personaje)->devolverNombre();
    cout<<control<<" el "<<nombrePersonaje<<" salta de/a la barca"<<endl;
  }
  cout<<"\n\t\t\t\t\t\t\t  START:"<<endl<<endl;


  //Configuracion inicial de lugares
  for(int lugar=0; lugar<lugares.size(); lugar++)
  {
    if(lugares.at(lugar)->devolverNombre() == "Izquierda")
    {
      //Bucle para cargar todos personajes a la orilla izquierda inicialmente
      for(int personaje=0; personaje<personajes.size(); personaje++)
      {
        Individuo *personajeAAnhadir= personajes.at(personaje);
        lugares.at(lugar)->adicionarSacarIndividuo(personajeAAnhadir);
      }
    }
  }
  
  //Inicio de la partida
  while(true)
  {
    //Mostrar partida
    pantallaInterfaz();

    //Validar si perdi el juego o si ya acabó porque ganó la partida
    bool seAcabo = false;
    for(int lugar=0; lugar<lugares.size(); lugar++)
    {
      if(lugares.at(lugar)->perderElJuego())
      {
        cout<<"Perdiste vuelve a interlo."<<endl;
        seAcabo =true;
        break;
        
      }
      else if(lugares.at(lugar)->devolverNombre() == "Derecha" and 
      lugares.at(lugar)->cuantosEstanEn()== personajes.size())
      {
        cout<<endl<<"Ganaste, Felicidades!!!."<<endl;
        seAcabo= true;
        break;
      }    
    }

    if(seAcabo)
      break;

    //Preguntar que hacer
    string movimiento = queDeseaHacer();
    //Ejecutar movimiento
    moverIndividuoOBarca(movimiento);    
  }

}

string Jugador::queDeseaHacer()
{
  string movimiento;
  cout<<"¿Qué deseas hacer?:  ";
  getline(cin,movimiento);
  //Convertir a mayusculas
  for(int letra=0; letra<movimiento.size(); letra++)
    movimiento[letra] = toupper(movimiento[letra]);
  return movimiento;
}


void Jugador::moverIndividuoOBarca(string movimiento)
{
  
  if(movimiento == "B")
  {
    //Para mover la barca
    Lugar *vecinoDeBarca= barcaABarca->quienEsVecino();
    if(vecinoDeBarca)
    {
      if(vecinoDeBarca->devolverNombre() == "Derecha")
      {
        //Para encontrar el nuevo vecino
        for(int lugar=0; lugar<lugares.size(); lugar++)
        {
          Lugar *cualLugar = lugares.at(lugar);
          if(cualLugar->devolverNombre() == "Izquierda")
            barcaABarca->moverBarca(cualLugar);
        }
      }
      else if(vecinoDeBarca->devolverNombre() == "Izquierda")
      {

        //Para encontrar el nuevo vecino
        for(int lugar=0; lugar<lugares.size(); lugar++)
        {
          Lugar *cualLugar = lugares.at(lugar);
          if(cualLugar->devolverNombre() == "Derecha")
          { 
            cout<<cualLugar->devolverNombre()<<endl;
            barcaABarca->moverBarca(cualLugar);

          }
        }
      }  
    }
  }  
  else 
  {
    //Mover los personajes
    for(int personaje=0; personaje<personajes.size(); personaje++)
    {
      Individuo *cualPersonaje = personajes.at(personaje);
      if(cualPersonaje->cualEsElControl() == movimiento)
      {
        Lugar *lugarDondeEsta = cualPersonaje->dondeEstas();
        if(lugarDondeEsta)
        {
          if(lugarDondeEsta->quienEsVecino())
            lugarDondeEsta->adicionarSacarIndividuo(cualPersonaje);
        }  
      }
    }
  }
}

void Jugador::pantallaInterfaz()
{
  
  //Titulo de la partida
  for(int lugar=0; lugar<lugares.size();lugar++)
  {
    if(lugares.at(lugar)->devolverNombre() == "Barca")
    {
      if(lugares.at(lugar)->quienEsVecino()->devolverNombre() == "Izquierda")
        cout<< "|\tIZQUIERDA\t|\t  BARCA  \t|\t         \t|\t DERECHA \t|"<<endl;
      else if(lugares.at(lugar)->quienEsVecino()->devolverNombre() == "Derecha")
        cout<< "|\tIZQUIERDA\t|\t         \t|\t  BARCA  \t|\t DERECHA \t|"<<endl;   
    }    
  }
  //Zona donde estan los personajes
  for(int fila=0; fila<personajes.size();fila++)
  {
   
    for(int columna=0; columna<lugares.size(); columna++)
    {
      if(lugares.at(columna)->devolverNombre() == "Barca")
      {
        
        if(lugares.at(columna)->quienEsVecino() == lugares.at(columna-1))
        {
          cout<<"|\t"<<anhadirEspacios(lugares.at(columna)->quienesEstanEn(fila))<<"\t";
          cout<<"|\t         \t";     
        }
        else
        {
          cout<<"|\t         \t";
          cout<<"|\t"<<anhadirEspacios(lugares.at(columna)->quienesEstanEn(fila))<<"\t";
        }
      }
      else
      {
        cout<<"|\t"<<anhadirEspacios(lugares.at(columna)->quienesEstanEn(fila))<<"\t";
      }      
    }
    cout<<"|"<<endl;     
  }  
}