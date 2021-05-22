//*Ejercicio 6. Elabore una función recursiva que calcule el valor de la combinatoria de 2 números enteros

#include<iostream>
using namespace std;
int combinatoria(int n, int k);

int main(){
  int n, k;
  cout << "Valor de n: ";
  cin >> n;
  cout << "Valor de k: ";
  cin >> k;

  cout << "Resultado: " << combinatoria(n, k);
  return 0;
}
int combinatoria(int n, int k){
  if(k==0 || k==n)
    return 1;
  else {
    return combinatoria(n - 1, k - 1) + combinatoria(n - 1, k);
  }
}
