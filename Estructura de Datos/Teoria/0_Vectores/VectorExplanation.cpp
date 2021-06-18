/*---explicacion de libreria vector---*/


#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main(){
    vector<int> arreglo1 = {1,2,3}; //Arreglo vector definido
    int n;

    cout << arreglo1[0] << endl;
    cout << arreglo1[1] << endl;
    cout << arreglo1[2] << endl;

    arreglo1.push_back(4); //agrega elemento al final del arreglo
    cout << arreglo1[3] << endl;

    cout << "tamaño del arreglo: " << arreglo1.size() << endl;

    vector<int> arreglo2;

    cout << "Numero: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int temp;
        cout << "Numero: ";
        cin >> temp;
        arreglo2.push_back(temp);
    }

    for (int i = 0; i < n; ++i) {
        cout << arreglo2[i] << " ";
    }

    return 0;
}