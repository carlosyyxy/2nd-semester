#include <iostream>
using namespace std;

bool capicua(char arreglo[], int inicio, int final);
bool verificar = true;

int main() {
    char ejemplo[] = "somos";
    int inicio = 0, final = 4;
    cout << capicua (ejemplo,inicio,final);
}

bool capicua(char arreglo[], int inicio, int final) {
    if(inicio==final)
        return verificar;
    else{
        if (arreglo[inicio] != arreglo[final]) {
            verificar = false;
        }
        return capicua(arreglo, inicio+1, final - 1);
    }
}