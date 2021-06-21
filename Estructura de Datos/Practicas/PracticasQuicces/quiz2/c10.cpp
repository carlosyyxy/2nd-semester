#include <iostream>
#include <math.h>
using namespace std;

bool Espar(int x, int n, bool verificar);
bool esImpar(int x, int n, bool verificar);

int main() {
    int x = 123;
    bool verificar;
    cout << Espar(x, 0, verificar) << endl;
    cout << esImpar(x, 0, verificar) << endl;
}

bool Espar(int x, int n, bool verificar) {
    if (n == x)
        return verificar;
    else {
        if (n == 0)
            verificar = true;
        return Espar(x, n + 1, !verificar);
    }
}
bool esImpar(int x, int n, bool verificar) {
    if (n == x)
        return verificar;
    else {
        if (n == 0)
            verificar = false;
        return esImpar(x, n + 1, !verificar);
    }
}