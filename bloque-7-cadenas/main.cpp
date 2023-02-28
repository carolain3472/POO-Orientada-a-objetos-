#include <iostream>
#include<string.h>
#include<algorithm>//reverse

using namespace std;

int main() {

  /*1. longitud de una cadena*/
  char palabra[]="hola";
  int longitud=0;

  longitud= strlen(palabra);
  cout<<"Longitud: "<<longitud<<endl;

  /*2. pedir una cadena al usuario, verificar si la longitud es mayor a 10, y mostrarla si no lo es no.  */

  char cadena[100];
  int lon=0;
  cout<<"Digite una cadena: ";
  cin.getline(cadena,100,'\n');
  lon= strlen(cadena);

  if(lon>=10){
    cout<<"Cadena: "<<cadena;
  }

  /*3. copiar el contenido de una cadena a otra*/

  char nom[]= "Natalia",
  nom2[20];

  strcpy(nom2, nom);
  cout<<"Nombre: "<<nom2<<endl;

  /*4. pedir una cadena al usuario almacenarla y copiar todo en otro arreglo*/

  /*5. comparar cadenas*/
  char palabra1[]="becerro", palabra2[]="avion";

  if(strcmp(palabra1, palabra2) == 0){//==0 son iguales ==1 son diferentes
    cout<<"Son iguales"<<endl;
  }else{
    cout<<"Son diferentes"<<endl;
  }

  //strcmp sirve tambien para comparar el orden alfabetico de 
  if(strcmp(palabra1, palabra2) > 0){
    cout<<"palabra 1 mayor alfabeticamente"<<endl;
  }

  /*6. pedir 2 cadenas al usuario validar si son iguales, si no lo son indicar cual es mayor alfabeticamente*/
  
  char p1[100], p2[100];
  cout<<"Digite una cadena: ";
  cin.getline(p1,100,'\n');
  cout<<"Digite una cadena: ";
  cin.getline(p2,100,'\n');

  if(strcmp(p1, p2) == 0){

     cout<<"Son iguales"<<endl;

  }else{
    
     if(strcmp(p1, p2) > 0){
      cout<<"palabra 1 mayor alfabeticamente"<<endl;
     }else{
      cout<<"palabra 2 mayor alfabeticamente"<<endl;

     }
  }

/*7.  concatenar cadenas*/

char cat1[]="cadena",cat2[]=" ejemplo";
char cat3[30];

strcpy(cat3, cat1);//cat3= "cadena" copia de una variable a otra
strcat(cat3, cat2);
//cat3= "cadena ejemplo" añade o concatena 

cout<<"cadena: "<<cat3<<endl;


/*8. crear un saludo pidiendo el nombre al usuario*/

char name[30], saludo[]="Hola que tal, ";
cout<<"Nombre: ";
cin.getline(name,30,'\n');
cout<<saludo<<name<<endl;

/*9. invertir una cadena*/

char prueba[]={"Natalia"};
//strrev(prueba);
//cout<<prueba<<endl;
//no funciona 

/*  Revertir un char usando reverse() */
/*

    string hi2 = "Hello!";

    reverse(hi2.begin(), hi2.end());
    cout<<hi2;


/*9. verificar si una palabra es polindroma*/
/*

string polindro, rev; 
cout<<"\nPalabra: ";
cin>>polindro;

polindro = rev;
reverse(polindro.begin(), polindro.end());

 if(polindro == rev){
   cout<<"Si es polindroma"<<endl;
 }else{
   cout<<"No es polindroma"<<endl;
 }

//no funciona*/

/* 10. pasar una palabra en minusculas a mayusculas*/

char pa[]="123",pal[]="10.456";
int num;
float nume,sum=0.0;

//strupr(pa);
//no sirve 
/*11. convertir dos cadenas de minuscula a mayusculas, compararlas y decir si son iguales*/


/*12. pasar a minuscula*/

//strlwr(pa);
//no sirve

/*13. transformar una cadena a numeros*/

num=atoi(pa);
nume=atof(pal);
sum=num+nume;
//cout<<pa<<endl<<pal<<endl<<"suma: "<<sum<<endl;

/*14. contar las vocales de una cadena*/
char frase[30];
int a=0, e=0, i=0, o=0, u=0;
cout<<"frase: ";
cin.getline(frase,30,'\n');

for(int b=0; b<30;b++){
  switch(frase[b]){
    case 'a': a++;break;
    case 'e': e++;break;
    case 'i': i++;break;
    case 'o': o++;break;
    case 'u': u++;break;
  }
}

cout<<"\na: "<<a<<endl;
cout<<"e: "<<e<<endl;
cout<<"i: "<<i<<endl;
cout<<"o: "<<o<<endl;
cout<<"u: "<<u<<endl;

  return 0;

}