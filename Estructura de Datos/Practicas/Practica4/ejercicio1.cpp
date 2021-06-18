/*En un colegio, se tienen k botellas de plástico que van a ser reusadas. Las botellas tienen
distinto largo ti, el objetivo es juntar/pegar las botellas unas con otras por sus extremos para
construir árboles de navidad, aviones, barcos, edificios, y otras estructuras para la educación.

Cada estructura es de largo L y debe emplear la mayor cantidad de botellas para ser
reusadas, construya el algoritmo que resuelva el algoritmo para el problema..*/

#include <iostream>
#include <vector>
using namespace std;

struct estructura{
    int capacidad; //el largo de las botellas d mrd
    int cantidad; //la cantidad d botellas d mrd utilizadas
} solution, optimal;
int Botellas[] = {1,2,3,4,5};
int EstructuraL = 10, n=5;

void backtracking(int start, estructura solution, estructura &optimal);

int main() {

    backtracking(0, solution, optimal);
    cout << "Valor total: " << optimal.cantidad;
    return 0;
}

void backtracking(int start, estructura solution, estructura &optimal) {
    
    if (solution.cantidad > optimal.cantidad)
        optimal = solution;

    for (int k = start; k < n; k++) {
        if (Botellas[k] >= solution.capacidad) {
            solution.capacidad += Botellas[k];
            solution.cantidad++;
            backtracking(k, solution, optimal);
            solution.capacidad -= Botellas[k];
            solution.cantidad--;
        }
    }
}