#include <iostream>


using namespace std;
//estructura basica
struct persona{
  char nombre[20];
  int edad;

}persona1;
//persona1={"Natalia",18}, 
//persona2={"Luis", 15};
struct info_direccion{
  char direccion[30];
  char ciudad[20];
  char provincia[20];

};

struct empleado{
  char nombre[20];
  struct info_direccion dir_empleado;double salario; 
}empleado[2];//arreglo de estructuras


int main() {
  /*cuando se sabe los datos de una persona
  cout<<"Nombre1: "<<persona1.nombre<<endl;
  cout<<"Edad1: "<<persona1.edad<<endl;

  cout<<"\nNombre2: "<<persona2.nombre<<endl;
  cout<<"Edad2: "<<persona2.edad<<endl;
*/
/*
cout<<"Nombre: ";
cin.getline(persona1.nombre,20,'\n');

cout<<"Edad: "; cin>>persona1.edad;

cout<<"\nDatos: \n";
cout<<"Nombre: "<<persona1.nombre<<endl;
cout<<"edad: "<<persona1.edad<<endl;
 */
for(int i=0; i<2;i++){
  fflush(stdin);//vaciar el buffer y permitir digitar los valores no funciona
  cout<<"Nombre: ";
  cin.getline(empleado[i].nombre,20,'\n');

  cout<<"direccion ";
  cin.getline(empleado[i].dir_empleado.direccion,30,'\n' );

  
  cout<<"ciudad: ";
  cin.getline(empleado[i].dir_empleado.ciudad,20,'\n' );
   
  cout<<"provincia: ";
  cin.getline(empleado[i].dir_empleado.provincia,20,'\n' );

  cout<<"Salario: ";
  cin>>empleado[i].salario;
  cout<<"\n";
}

//mostrar datos
for(int i=0; i<2; i++){
  cout<<"Nombre: "<<empleado[i].nombre<<endl;
  cout<<"Direccion: "<<empleado[i].dir_empleado.direccion<<endl;
  cout<<"ciudad: "<<empleado[i].dir_empleado.ciudad<<endl;
  cout<<"provincia: "<<empleado[i].dir_empleado.provincia<<endl;
  cout<<"Salario: "<<empleado[i].salario<<endl;
  cout<<"\n";

}



 return 0;
}