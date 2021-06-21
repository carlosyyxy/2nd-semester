#include <iostream>
using namespace std;

int sumavalores(int n) {
    if(n==1)
        return n;
    else
        return n + sumavalores(n - 1);
}

int main() {
    int x = 3;
    cout << sumavalores(x);
}