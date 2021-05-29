/*Elabore una función recursiva que calcule el máximo común divisor (mcd) de dos números
enteros. Aplicando las propiedades recurrentes:
○ Si a > b entonces mcd(a, b) = mcd(a - b, b).
○ Si a < b entonces mcd(a, b) = mcd(a, b - a).
○ Si a = b entonces mcd(a, b) = mcd(b, a) = a = b.
*/

#include <iostream>
#include <math.h>
using namespace std;

int mcd(int a, int b) {

    if (a == b)
        return a = b;
    if (a > b)
        return mcd(a - b, b);
    return mcd(a, b - a);
}

int main() {
    int x = 12;
    int y = 24;

    cout << mcd(x, y);

    return 0;
}