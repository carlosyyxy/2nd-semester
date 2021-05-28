/*11. Dado un arreglo de N números enteros (ordenado sin elementos repetidos) y un número
entero k, elabore un algoritmo recursivo que retorne si el elemento existe en el arreglo.*/

#include <iostream>
using namespace std;
bool Busqueda(int arreglo[], int k, int n, bool verificar);

int main() {
  int arreglo[] = {1, 2, 3, 4, 5};
  int k = 1, n = 4;
  bool verificar=false;
  cout << "El elemento: " << k << " se encuentra en el arreglo? " << Busqueda(arreglo, k, n, verificar);

  return 0;
  }

  bool Busqueda(int arreglo[], int k, int n, bool verificar) {
    if(n<0 || verificar==true){
      return verificar;
    }
    else{
      if(arreglo[n]==k){
        verificar = true;
      }
      return Busqueda(arreglo, k, n - 1, verificar);
    }
  }
