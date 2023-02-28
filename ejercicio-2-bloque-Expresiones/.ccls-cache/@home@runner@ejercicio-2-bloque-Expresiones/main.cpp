#include <iostream>
#include <cmath>
#include <math.h>//libreria matematica y trigonometrica

using namespace std;

int main() {
  /*1.escribir la expresion a/b  +1*/
  float a,b, resultado=0;
  cout<<"Digite a: "; cin>>a;
  cout<<"Digite b: "; cin>>b;

  resultado= (a/b)+1;

  //cout.precision(2);//esta tomando dos números  despues de la coma y los redondea dejandolo en uno solo despues de la coma
  cout<<"\nResultado: "<<resultado<<endl;

  /*2. escribir otra expresion a+b  / c+d*/
  float c,d,e,f , resul=0;
  cout<<"Digite c: "; cin>>c;
  cout<<"Digite d: "; cin>>d;
  cout<<"Digite e: "; cin>>e;
  cout<<"Digite f: "; cin>>f;

  resul= (c+d)/(e+f);
  cout<<"\nResultado: "<<resul<<endl;

//--------------------------




  /*3. otra expresion a+b/c   /   d+e/f*/
  float g,h,i,j,k,l, res=0;
  cout<<"Digite g: "; cin>>g;
  cout<<"Digite h: "; cin>>h;
  cout<<"Digite i: "; cin>>i;
  cout<<"Digite j: "; cin>>j;
  cout<<"Digite k: "; cin>>k;
  cout<<"Digite l: "; cin>>l;

  res= (g+(h/i))/(j+(k/l));
  cout<<"\nResultado: "<<res<<endl;

  /*4. otra expresion a+  b/c-d*/
  float m,n,o,p, re=0;
  cout<<"Digite m: "; cin>>m;
  cout<<"Digite n: "; cin>>n;
  cout<<"Digite o: "; cin>>o;
  cout<<"Digite p: "; cin>>p;
  re= m+(n/(o-p));
  cout<<"\nResultado: "<<re<<endl;


//---------------------



  /*5. intercambiar los valores de dos variables*/
  int x,y, aux;
  cout<<"Valor x: "; cin>>x;
  cout<<"Valor y: "; cin>>y;
  /*
  x=10
  y=5
  aux=10
  x=y--> x=5
  y=aux --> y=10

  */
  
  aux=x ;
  x=y;
  y=aux;
  cout<<"\n Nuevo x: "<<x<<endl;
  cout<<"\n Nuevo y: "<<y<<endl;

  /*6. media de 4 notas*/
  float nota1, nota2, nota3, nota4, promedio;
  cout<<"\n Nota 1: "; cin>>nota1;
  cout<<"\n Nota 2: "; cin>>nota2;
  cout<<"\n Nota 3: "; cin>>nota3;
  cout<<"\n Nota 4: "; cin>>nota4;
  promedio= (nota1+nota2+nota3+nota4)/4;
  cout<<"Nota promedio: "<<promedio<<endl;



//---------------------------------



  /*7. promedio ponderado
   practicas 30%, teorica 60%, participacion 10%, leer las notas y dar la nota final */

   float n1,n2,n3, nfinal=0;
   cout<<"\nNota de practicas: ";cin>> n1;
   cout<<"\nNota de teorica: ";cin>> n2;
   cout<<"\nNota de participacion: ";cin>> n3;
   n1=n1*0.3;
   n2*=0.6;
   n3*=0.1;
   nfinal=n1+n2+n3;
   cout<<"\n Nota Final: "<<nfinal<<endl;

   /*8. hipotenusa de un triangulo*/
   float cateto1, cateto2, hipotenusa=0;
   cout<<"\nCateto: "; cin>>cateto1;
   cout<<"\nCateto: "; cin>>cateto2;
   hipotenusa= sqrt(pow(cateto1,2)+pow(cateto2,2));
   cout<<"\n hipotenusa: "<<hipotenusa<<endl;




//-----------------------------------


   /*9. calcular el valor que toma una funcion para unos valores dados*/
   float z,s, result=0;
   cout<<"Digite z: "; cin>>z;
   cout<<"Digite s: "; cin>>s;
   result=(sqrt(z))/(pow(s,2)-1);
   cout<<"resultado: "<<result<<endl;

   /*10. calcular las soluciones de una ecuacion de segundo grado*/
   float primert, segundot, tercert, sol1, sol2;
   cout<<"a: "; cin>>primert;
   cout<<"\nb: "; cin>>segundot;
   cout<<"\nc: "; cin>>tercert;
   sol1= (-segundot+sqrt(pow(segundot,2)-4*primert*tercert))/(primert*2);
   sol2= (-segundot-sqrt(pow(segundot,2)-4*primert*tercert))/(primert*2);
   cout<<"\nprimera solucion: "<<sol1<<endl;
   cout<<"segunda solucion: "<<sol2<<endl;





  return 0;
}