#include <iostream>
using namespace std;
int number = 1;
int sum = 0;
int aux = number;
int cont = 1;

int funtion(int n) {

    if (cont > n)
        return sum;

    aux *= number;
    number++;
    sum += aux;
    aux *= number;
    number++;
    cont++;
    return funtion(n);
}

int main() {
    int x = 3;
    cout << funtion(x);
}