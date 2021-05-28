/*14. Escriba una función recursiva que reciba como parámetro un número entero positivo y
retorne la suma de sus dígitos..*/

#include <iostream>
using namespace std;
int Sumar(int numero, int suma);

int main() {
    int numero = 12, suma = 0;
    cout << "Suma de los digitos: " << Sumar(numero, suma);
    return 0;
}

int Sumar(int numero, int suma) {
    if (numero == 0) {
        return suma;
    } else {
        return Sumar(numero / 10, suma + (numero % 10));
    }
}   