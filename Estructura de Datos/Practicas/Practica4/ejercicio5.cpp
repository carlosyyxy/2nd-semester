/*Dado un arreglo de números enteros y un valor entero k > 0, construya un algoritmo que
imprima todas las formas posibles de obtener el valor k mediante la suma de los elementos
del arreglo. Por ejemplo, para el arreglo arr = {1, 2, 3, 4, 5} y k = 5; las formas
posibles son:
 1 + 4
 2 + 3*/

#include <iostream>
using namespace std;

void SumaElementos(int arr[], int longitud, int k, int partial = 0);
void ImprimeElementos(int arr[]);
void AgregaSolucion(int arr[], int number);
void EliminarSolucion(int arr[], int longitud);

int arr[] = {1, 2, 3, 4, 5};
int Solucion[] = {0, 0, 0, 0, 0};
int cont = 0;


int main() {
    SumaElementos(arr, 3, 5);
}

void SumaElementos(int arr[], int longitud, int k, int partial) {
    //cout << "partial= " << partial << " total= " << k << endl;
    if (partial == k) {
        ImprimeElementos(Solucion); //Caso Base
    } else {
        for (int i = 0; i < longitud; i++) {
            if (partial + arr[i] <= k) {
                cont++;
                AgregaSolucion(Solucion, arr[i]);
                SumaElementos(arr, longitud, k, partial + arr[i]);
                cont--;
                EliminarSolucion(Solucion, cont);
            }
        }
    }
}

void ImprimeElementos(int arr[]) {
    for (int i = 0; i < cont; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void AgregaSolucion(int arr[], int number) {
    //cout<<"solucion["<<cont-1<<"] = "<<number<<endl;
   // cout << "---agregando---" << endl;

    arr[cont - 1] = number;
   // cout << "solucion[" << cont - 1 << "] = " << arr[cont - 1] << endl;

    }

void EliminarSolucion(int arr[], int longitud) {
   // cout << "---eliminando---" << endl;
    //cout << "solucion[" << longitud << "] = " << longitud << endl;
    //cout << "solucion[" << longitud << "] = " << arr[longitud] << endl;

    arr[longitud] = 0;
}
