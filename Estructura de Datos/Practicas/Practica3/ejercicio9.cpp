/*Ejercicio 8. Elabore una función recursiva que reciba como parámetro un arreglo de caracteres que
representan una palabra y retorne verdadero si ésta es capicúa. */

#include <iostream>
using namespace std;
float fraccion(float x);

int main() {
  int x;
  cout << "Numero: ";
  cin >> x;

  cout << "Resultado: " << fraccion(x);


    return 0;
}

float fraccion(float x) {
  float resultado;
  if(x==1)
    return 1;
  else{
    return 1 / x + 1 /( x - 1);
  }
}
