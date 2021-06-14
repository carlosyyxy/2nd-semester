/*En un colegio, se tienen k botellas de plástico que van a ser reusadas. Las botellas tienen
distinto largo ti, el objetivo es juntar/pegar las botellas unas con otras por sus extremos para
construir árboles de navidad, aviones, barcos, edificios, y otras estructuras para la educación.

Cada estructura es de largo L y debe emplear la mayor cantidad de botellas para ser
reusadas, construya el algoritmo que resuelva el algoritmo para el problema..*/

#include <iostream>
using namespace std;

int CantidadDeBotellas;
int Botellas[100];
int BotellaL = 100;

int main() {
   
    cout << "Cantidad De Botellas: ";
    cin >> CantidadDeBotellas;
    for (int i = 0; i < CantidadDeBotellas;i++){
        cout << "Ingresa largo de botellas: ";
        cin >> Botellas[i];
    }

    return 0;
}

