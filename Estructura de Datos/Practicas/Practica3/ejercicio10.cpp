/*10. Dado un arreglo de N números enteros, diseñe algoritmos recursivos que retornen:
○ El mayor elemento del arreglo.
○ La suma de los elementos del arreglo.
○ La suma de los k primeros elementos del arreglo.
○ La media de los elementos del arreglo.
○ Si el arreglo está ordenado.
○ Si la suma de la primera mitad del arreglo es igual a la segunda mitad.*/

#include <iostream>
using namespace std;
int MayorElemento(int arreglo[], int n, int mayor);
int SumaElementos(int arreglo[], int n);
int SumaKElementos(int arreglo[], int m, int k);
int MediaElementos(int arreglo[], int n);
bool HayOrden(int arreglo[], int Inicio, int Final, bool verificar);
bool Partes(int arreglo[], int m, int n, int totalM, int totalN, bool verificar);
int main() {
  int arreglo[] = {1, 2, 3, 1, 2};
  int m = 0, n = 4, k = 3, totalM = 0, totalN = 0;
  bool verificar = true;
  cout << "Mayor Elemento: " << MayorElemento(arreglo, n, arreglo[0]) << endl;
  cout << "Suma de los elementos del arreglo: " << SumaElementos(arreglo, n) << endl;
  cout << "Suma de los k primeros elementos: " << SumaKElementos(arreglo, m, k - 1) << endl;
  cout << "Media de los elementos del arreglo: " << MediaElementos(arreglo, n) << endl;
  cout << "El arreglo esta ordenado: " << HayOrden(arreglo, m, n, verificar) << endl;
  cout << "la suma de la 1era mitad es igual a la 2da mitad: " << Partes(arreglo, m, n, totalM, totalN, verificar) << endl;

  return 0;
}

int MayorElemento(int arreglo[], int n, int mayor) {
  if (n == 0) {
    return mayor;
  } else {
    if (arreglo[n] > mayor) {
      mayor = arreglo[n];
    }
    return MayorElemento(arreglo, n - 1, mayor);
  }
}

int SumaElementos(int arreglo[], int n) {
  if (n == 0) {
    return arreglo[n];
  } else {
    return arreglo[n] + SumaElementos(arreglo, n - 1);
  }
}

int SumaKElementos(int arreglo[], int m, int k) {
  if (m == k) {
    return arreglo[m];
  } else {
    return arreglo[m] + SumaKElementos(arreglo, m + 1, k);
  }
}

int MediaElementos(int arreglo[], int n) {
  int total = SumaElementos(arreglo, n) / (n + 1);
  return total;
}

bool HayOrden(int arreglo[], int Inicio, int Final, bool verificar) {
  if (Inicio == Final || verificar == false) {
    return verificar;
  } else {
    if (arreglo[Inicio] > arreglo[Inicio + 1]) {
      verificar = false;
    } else {
      return HayOrden(arreglo, Inicio + 1, Final, verificar);
    }
    return verificar;
  }
}

bool Partes(int arreglo[], int m, int n, int totalM, int totalN, bool verificar) {
  if (m == n) {
    totalM += arreglo[m];
    totalN += arreglo[n];
    if(totalM!=totalN){
      cout <<"Total M :"<<totalM << endl;
      cout <<"Total N :"<<totalN << endl;
      verificar = false;
    }
    return verificar;
  } else {
    totalM += arreglo[m];
    totalN += arreglo[n];
  }
  return Partes(arreglo, m + 1, n - 1, totalM, totalN, verificar);
}