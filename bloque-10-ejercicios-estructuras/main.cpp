#include <iostream>
#include <string.h>

using namespace std;

struct corredor{
  char nombre[20];
  int edad;
  char sexo[10];
  char club[20];
}c1;

int main() {

  char categoria[20];
  cout<<"Nombre: ";
  cin.getline(c1.nombre,20,'\n');
  cout<<"Edad: ";cin>>c1.edad;
  
  cout<<"sexo: ";
  cin.getline(c1.sexo,10,'\n');
  cout<<"Club: ";
  cin.getline(c1.club,20,'\n');

  if(c1.edad <=18){
    strcpy(categoria, "juvenil");
  }else if(c1.edad <=40){
    strcpy(categoria, "senior");
  }else{
    strcpy(categoria, "veterano");
  }

  cout<<"\n Datos: \n";
  cout<<"Nombre: "<<c1.nombre<<endl;
  cout<<"edad: "<<c1.edad<<endl;
  cout<<"Sexo: "<<c1.edad<<endl;
  cout<<"club: "<<c1.club<<endl;
  cout<<"categoria: "<<categoria<<endl;








 return 0;
}