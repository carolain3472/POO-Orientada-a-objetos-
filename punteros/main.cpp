#include <iostream>
#include <vector>
using namespace std;

int main() 
{

  int salario= 234;
  int *pagar;
  pagar= &salario;

  cout << *pagar;
  cout << salario << endl;

  vector <int> vector1= {1,2,3,4,5};
  vector <int> *pvector;

  pvector= &vector1;
  
  cout << (*pvector).at(0);


}