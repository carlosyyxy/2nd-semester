/* Transmision de Direcciones con punteros
Ejemplo: Hallar el maximo elemento de un arreglo*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int ValorMaximo(int *, int);
int main(){
  const int nElementos=5;
  int numeros[nElementos]={3,12,2,8,1};
  cout<<"Maximo valor del arreglo: "<<ValorMaximo(numeros, nElementos);

  return 0;
}
int ValorMaximo(int *dir_Vec, int nElementos){
  int maximo=0;
  for(int i=0;i<nElementos;i++){
    if(*(dir_Vec+i)>maximo) maximo= *(dir_Vec+i);
  }
  return maximo;
}
