#include <iostream>
#include <math.h>
using namespace std;

bool Existe(int arreglo[], int inicio, int final, int k);
bool verificar = false;
int main() {
    int k = 6, inicio=0, final=4;
    int arreglo[] = {1, 2, 3, 4, 5};
    cout << "Existe: " << Existe(arreglo, inicio, final, k);
}



bool Existe(int arreglo[], int inicio, int final, int k) {
    if(inicio==final)
        return verificar;
    
    if(arreglo[final]==k)
        verificar = true;
    return Existe(arreglo, inicio, final-1, k);
}