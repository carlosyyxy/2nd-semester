/*Ejercicio 9. Escriba funciones recursivas para calcular el resultado de cada una de las siguientes series
matemáticas, asumiendo que se recibe como parámetro el valor de n*/

#include <iostream>
using namespace std;

float fraccion(float x);
int main() {
  float x;
  cout << "Numero: ";
  cin >> x;
  cout << "Resultado: " << fraccion(x) << endl;
  return 0;
}

float fraccion(float x) {
  if (x == 1) {
    return 1;
  } else {
    return (1 / x) + fraccion(x - 1);
  }
}