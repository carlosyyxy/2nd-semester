#include <iostream>
#include <math.h>
using namespace std;

int Invertido(int normal, int invertido);
bool verificar = false;
int main() {
    int x = 123;
    cout << Invertido(x, 0);
}



int Invertido(int normal, int invertido) {
    if(normal==0)
        return invertido;
    return Invertido(normal / 10, invertido * 10 + (normal % 10));
}