/*14.Construya un algoritmo recursivo que reciba como parámetros dos números enteros
positivos y retorne su división, empleando restas sucesivas..*/

#include <iostream>
using namespace std;
int division(int a, int b);

int main() {
  int n1, n2;
  cout << "N1:";
  cin >> n1;
  cout << "N2: ";
  cin >> n2;

  cout << "Resultado:" << division(n1, n2) << endl;
  return 0;
  }

  int division(int a, int b) {
    if (b > a) {
      return 0;
    } else {
      return division(a - b, b) + 1;
    }
  }