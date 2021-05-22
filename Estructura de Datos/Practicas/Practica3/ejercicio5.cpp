//*Ejercicio 5. Escriba una función recursiva que retorne la suma de los N primeros números naturales.

#include<iostream>
using namespace std;
int sumavalores(int x);

int main(){
  int n;
  cout << "Numero: ";
  cin >> n;
  if(n>0){
    cout << "El resultado es: " << sumavalores(n);
  }
  else
    cout << "No es un numero natural" << endl; 

  return 0;
}
int sumavalores(int x){
  if (x == 1) 
    return 1;
  else
    return x + sumavalores(x - 1);
}
