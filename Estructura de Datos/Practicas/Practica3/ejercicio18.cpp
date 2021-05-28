/*17. Dado un arreglo de N números enteros y un número entero k, elabore un algoritmo recursivo
que determine si existe una suma sucesiva de números igual a k. Por ejemplo, si tenemos el
arreglo int arr [] = { 1, 2, 3, 4, 5, 6 } y además:

○ k = 9 la función retorna verdadero, ya que 4 + 5 = 9.
○ k = 8 la función retorna falso, ya que es imposible obtener dicho número con sumas
consecutivas, puesto que el 2 y el 6 no son sucesivos.*/

#include <iostream>
#include <math.h>
using namespace std;

float multi(float x, float y) {
    if (y == 0)
        return x;
    return x + multi(x, y - 1);
}

int main() {
    float a = 2.2;
    float b = 3;

    cout << multi(a, b-1);

    return 0;
}
