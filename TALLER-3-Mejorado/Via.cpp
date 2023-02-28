
#include "Via.h"



Via::Via()
{
  //No hace nada
}

Via::~Via()
{
  //Destruye los vagones que la via tiene en su propiedad
  for(int cualVagon=0; cualVagon<vagones.size(); cualVagon++)
  {
    if(vagones.at(cualVagon))
    {
      delete vagones.at(cualVagon);
      vagones.at(cualVagon)=nullptr;
    }

  }
  vagones.clear();
}

void Via::introducirVagon(Vagon *nuevoVagon)
{
  vagones.push_back(nuevoVagon);
}

Vagon *Via::sacarVagon()
{
  if(vagones.size()>0)
  {
    //Toma el ultimo vagon de una via
    Vagon *vagonQueSale = vagones.back();
    vagones.pop_back(); 

    return vagonQueSale;
  }
  return nullptr;
}

void Via::retrocederPor(Via &viaATomar)
{
  viaATomar.introducirVagon(vagones.back()); // Cede propiedad
  vagones.pop_back(); 
}

void Via::avanzarDesde(Via &viaQueDejar)
{
  Vagon *ultimoVagon= viaQueDejar.sacarVagon(); 
  if(ultimoVagon)
  {
    this->introducirVagon(ultimoVagon); //Toma propiedad  
  }

}

string Via::estadoActual()
{
  string vagonesEnLaVia;

  for(int cualVagon=0; cualVagon<vagones.size(); cualVagon++)
  {
    if(vagones.at(cualVagon))
    {
      vagonesEnLaVia += to_string(vagones.at(cualVagon)->numeroVagon())+"-";
      
    }  
  }
  if(vagones.size() >= 2)
    vagonesEnLaVia.resize(vagonesEnLaVia.size()-1); // Elimina el guion al final

  return vagonesEnLaVia;
}

