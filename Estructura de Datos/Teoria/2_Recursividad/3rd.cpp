#include <iostream>
using namespace std;
int potencia(int x, int y);

int main(){
    int x, y;
    cout << "Base: "; cin >> x;
    cout << "Exponente: "; cin>>y;
    cout << "Resultado: " << potencia(x, y);
    return 0;
}

int potencia(int x, int y){
    if (y==0) return 1;
    else return x * potencia(x, y-1);

}