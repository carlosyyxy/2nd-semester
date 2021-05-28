/*16. Asumiendo que el número 0 es par, es decir, esPar(0) retorna true y esImpar(0) retorna false.
La paridad de cualquier otro entero es la opuesta del entero anterior. Desarrolle las funciones
lógicas, mutuamente recursivas, esPar y esImpar, que se complementan a la hora de obtener
la paridad de un entero positivo.*/

#include <iostream>
using namespace std;
bool esPar(int x, int n, bool verificar);
bool esImpar(int x, int n, bool verificar);

int main() {
  int numero = 15, n = 0;
  bool verificar;
  cout << "Es Par: " << esPar(numero, n, verificar) << endl;
  cout << "Es Impar: " << esImpar(numero, n, verificar);

  return 0;
}

bool esPar(int x, int n, bool verificar) {
  if (n == x) {
    return verificar;
  } else {
    if (n == 0)
      verificar = true;
    esPar(x, n + 1, !verificar);
  }
}

bool esImpar(int x, int n, bool verificar) {
  if (n == x) {
    return verificar;
  } else {
    if (n == 0)
      verificar = false;
    esPar(x, n + 1, !verificar);
  }
}