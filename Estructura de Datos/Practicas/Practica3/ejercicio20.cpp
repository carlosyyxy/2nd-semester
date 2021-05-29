/*20. Escriba un algoritmo recursivo que reciba como parámetros dos números enteros positivos y
retorne su multiplicación, utilizando el método ruso. Dados A y B la multiplicación rusa
consiste en:
○ Dividir A entre 2, sucesivamente, ignorando el residuo, hasta llegar a la unidad.
○ Multiplicar B por 2 tantas veces como veces se ha dividido A entre 2.
○ Sumar los números de B que estén al lado de un número impar de A.
*/

#include <iostream>
#include <math.h>
using namespace std;
int MultiplicacionRusa(int a, int b, int conteo);

int main() {
    int a = 13, b = 82, conteo = 0;
    cout << MultiplicacionRusa(a, b, conteo);

    return 0;
}

int MultiplicacionRusa(int a, int b, int conteo) {
    if (a == 1) {
        return conteo;
    } else {
        if (conteo == 0 && a % 2 == 1) {
            conteo += b;
        }
        a /= 2;
        cout << "a: " << a << "/= 2: " << a << endl;
        b *= 2;
        cout << "b: " << b << "*= b: " << b << endl;
        if (a % 2 == 1) {
            conteo += b;
        }
    }
    return MultiplicacionRusa(a, b, conteo);
}