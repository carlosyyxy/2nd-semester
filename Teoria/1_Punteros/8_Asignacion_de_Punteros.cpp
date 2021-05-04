#include <iostream>
using namespace std;
int main(){
  int A=20, B=30, *Puntero_A, *Puntero_B; //Creamos 2 variables con sus dos punteros
  Puntero_A=&A; Puntero_B=&B; //Le asignamos a los punteros la dirección de memoria
  cout<<"---Antes---"<<endl;
  cout<<"A= "<<*Puntero_A<<endl;
  cout<<"B= "<<*Puntero_B<<endl;

  Puntero_A=Puntero_B; //Ahora asignamos al puntero A, la dirección de memoria del puntero de B

  cout<<"---Despues---"<<endl;
  cout<<"A= "<<*Puntero_A<<endl; //Ahora el puntero de A muestra el valor de B
  cout<<"B= "<<*Puntero_B<<endl;

  return 0;
}
