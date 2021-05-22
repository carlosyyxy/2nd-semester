/*Ejercicio 8. Elabore una función recursiva que reciba como parámetro un arreglo de caracteres que
representan una palabra y retorne verdadero si ésta es capicúa. */

#include <iostream>
using namespace std;
int capicua(char x[], int, int);

int main() {
  int ini = 0, fin = 2;
  char x[] = "ala";
  cout << "Es capicua? " << capicua(x, ini, fin);

  return 0;
}

int capicua(char x[], int ini, int fin) {
  bool verificar = true;

  if (ini <= fin) {
    if (x[ini] != x[fin]) { //Caso base
      return 0;
    } else {
      return (capicua(x, ini + 1, fin - 1));
    }
  } else {
    return verificar;
  }
}
