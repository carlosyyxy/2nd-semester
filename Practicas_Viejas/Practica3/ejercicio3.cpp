//*Ejercicio 5. Escriba una función recursiva que saque el factorial de un numero n.

#include<iostream>
using namespace std;
int factorial(int x);

int main(){
  int n, resultado=0;
  do{
    cout<<"N digitos a sumar: ";cin>>n;
  } while(n<1);
  for(int i=0;i<n;i++){
    resultado+=factorial(i+1);
  }
  cout<<"Resultado: "<<resultado<<endl;
  return 0;
}
int factorial(int x){
  int multiplicacion=1;
  x=x*2;
  if (x==2) multiplicacion=1;
  else {
    cout<<"x="<<x<<endl;
    multiplicacion=x*factorial(x-1);
    cout<<"x="<<x<<endl;
  }
  return multiplicacion;
}
