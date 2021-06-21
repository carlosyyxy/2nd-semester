#include <iostream>
using namespace std;
int number = 1;

int funtion(int n) {
    int suma = 0;
    if (n == 1) {
        cout << "toy aki" << endl;
        return number;
    } else {
        suma += funtion(n - 1);
        number++;
        int aux = number;
        for (int i = 0; i < n - 1; i++) {
            number++;
            cout <<"aux * number= "<< aux << " * " << number << endl;
            aux = aux * number;
        }
        suma += aux;

        return suma;
    }
}

int main() {
    int n;
    cin >> n;
    cout << funtion(n);
}