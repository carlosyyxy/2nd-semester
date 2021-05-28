/*Ejercicio 3. Un número cumple con la propiedad de Goldbach si puede escribirse como la suma de dos
números primos. Defina una función que determine si un número natural cumple con esta
propiedad.*/

#include <iostream>
using namespace std;

bool Goldbach(int x, int Primos[], int inicio, int final, bool verificar);
int main() {
  int Primos[] = {2, 3, 5, 7, 11, 13, 17};
  int x =4 , final = 6, inicio = 0;
  bool verificar = false;

  cout << "Cumple la propiedad de Goldbach: " << Goldbach(x, Primos, inicio, final, verificar);

  return 0;
}

bool Goldbach(int x, int Primos[], int inicio, int final, bool verificar) {

  if (inicio>=6) {
    return verificar;
  }

  else {
    if(inicio<=6){
      if ((Primos[inicio] + Primos[final]) == x) {
        cout << "Primos[inicio] + Primos[final] " << Primos[inicio] + Primos[final] << endl;
        verificar = true;
        return verificar;
      } else {
        return Goldbach(x, Primos, inicio+1, final - 1, verificar);
      }
    }
  }
}
