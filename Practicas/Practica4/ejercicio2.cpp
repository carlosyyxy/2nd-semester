//*Ejercicio 5. Escriba una función recursiva que saque el factorial de un numero n.

#include<iostream>
using namespace std;
int factorial(int x);

int main(){
  int n, resultado;
  do{
    cout<<"N digitos a sumar: ";cin>>n;
  } while(n<1);
  resultado=factorial(n);
  cout<<"Resultado: "<<resultado<<endl;
  return 0;
}
int factorial(int x){
  int multiplicacion=1;
  if (x==1) multiplicacion=1;
  else multiplicacion=x*factorial(x-1);
  return multiplicacion;
}
