//*Ejercicio 5. Escriba una función recursiva que retorne la suma de los N primeros números naturales.

#include<iostream>
using namespace std;
int sumavalores(int x);

int main(){
  int n, resultado;
  do{
    cout<<"N digitos a sumar: ";cin>>n;
  } while(n<1);
  resultado=sumavalores(n);
  cout<<endl<<"Resultado: "<<resultado<<endl;
  return 0;
}
int sumavalores(int x){
  int suma=0;
  if (x==1) suma=1;
  else suma=x+sumavalores(x-1);
  cout<<"-->"<<x;
  return suma;
}
