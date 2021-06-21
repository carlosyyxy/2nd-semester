#include <iostream>
#include <math.h>
using namespace std;

int SumaDigitos(int normal, int resultado);
bool verificar = false;
int main() {
    int x = 123;
    cout << SumaDigitos(x, 0);
}



int SumaDigitos(int normal, int resultado) {
    if(normal==0)
        return resultado;
    return SumaDigitos(normal / 10, resultado + (normal % 10));
}