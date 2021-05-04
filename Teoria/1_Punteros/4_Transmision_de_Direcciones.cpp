/* Transmision de Direcciones con punteros
Intercambio de variables*/
#include <iostream>
#include <stdlib.h>
using namespace std;
void Intercambio(float *, float *);
int main(){
  float num1=30.32, num2=6.30;
  cout<<"El valor de num1: "<<num1<<endl;
  cout<<"El valor de num2: "<<num2<<endl<<endl;
  Intercambio(&num1, &num2);
  cout<<"El nuevo valor de num1: "<<num1<<endl;
  cout<<"El nuevo valor de num2: "<<num2<<endl;
  return 0;
}

void Intercambio(float *dir_a, float *dir_b){
  float aux;
  aux=*dir_a;
  *dir_a=*dir_b;
  *dir_b=aux;
}
