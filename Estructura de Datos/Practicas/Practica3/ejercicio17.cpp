/*17. Dado un arreglo de N números enteros y un número entero k, elabore un algoritmo recursivo
que determine si existe una suma sucesiva de números igual a k. Por ejemplo, si tenemos el
arreglo int arr [] = { 1, 2, 3, 4, 5, 6 } y además:

○ k = 9 la función retorna verdadero, ya que 4 + 5 = 9.
○ k = 8 la función retorna falso, ya que es imposible obtener dicho número con sumas
consecutivas, puesto que el 2 y el 6 no son sucesivos.*/

#include <iostream>
using namespace std;
bool sumaSucesiva(int arr[], int k, bool verificar, int suma, int inicio, int final);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6}, k = 9, suma = 0, inicio = 0, final = 5;
    bool verificar = false;

    cout << "V o F: " << sumaSucesiva(arr, k, verificar, suma, inicio, final);
    return 0;
}

bool sumaSucesiva(int arr[], int k, bool verificar, int suma, int inicio, int final) {

    if (final == inicio) {
        return verificar;
    } else {
        if (arr[inicio] <= arr[inicio + 1]) {
            cout << "arr[inicio] <= arr[inicio + 1]" << arr[inicio] <<"<" <<arr[inicio + 1] << endl;
            suma += arr[inicio] + arr[inicio+1];
            if(suma==k)
                verificar = true;
            else
                suma = 0; 
        } 
        return sumaSucesiva(arr, k, verificar, suma, inicio + 1, final);
    }
}


