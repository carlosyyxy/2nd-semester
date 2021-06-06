#include <iostream>
using namespace std;

void findSum(int arr[], int n, int partial, int total);
void printSet();
void addSet(int i);
void removeSet();

int longitud = 3;
int arr[] = {1, 2, 3};
int total = 4, j=0;
int solucion[15];

int main() {
    findSum(arr, 3, 0, total);
    return 0;
}

void findSum(int arr[], int n, int partial, int total) {
    //cout << "partial= " << partial << " total= " << total << endl;
    if (partial == total)
        //printSet();
        1;
    else
        for (int i = 0; i < n; i++)
            if (partial + arr[i] <= total) {
                addSet(i);
                findSum(arr, n, partial + arr[i], total);
                removeSet();
            }
}

void printSet() {
    for (int i = 0; i < total; i++) {
        if (solucion[i] !=0)
            cout << solucion[i] << " ";
    }
    cout << endl;
}

void addSet(int i) {
    cout << i<< ". arr[" << i << "] = " << arr[i] << endl;
    solucion[j] = arr[i];
    //cout << j << ". solucion[" << j << "] = " << solucion[j] << endl;
    j++;
}

void removeSet() {
    for (int j = 0; j < total;j++)
        solucion[j] = 0;

    j = 0;
}