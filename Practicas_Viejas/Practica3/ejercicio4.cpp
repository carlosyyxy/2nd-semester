//*Ejercicio 5. Escriba una función recursiva que saque el factorial de un numero n.

#include<iostream>
using namespace std;
int factorial(int x);
bool Verificar='F';

int main(){
  int n, resultado=0;
  do{
    cout<<"N digitos a sumar: ";cin>>n;
  } while(n<1);
  for(int i=1;i<=n;i++){
    cout<</*"Resultado: "<<*/factorial(i)<<endl;
  //  resultado+=factorial(i);
  }
  //cout<<"Resultado: "<<resultado<<endl;
  return 0;
}
int factorial(int x){
  int multiplicacion=1;
  if (x==1) multiplicacion=1;
  else if (x==2){
    multiplicacion=x*x+x*factorial(x-1);
  }
  else {
    for(int j=1;j<x+1;j++)
    {
      multiplicacion=x*factorial(j-1);

    }
  }
  return multiplicacion;
}
