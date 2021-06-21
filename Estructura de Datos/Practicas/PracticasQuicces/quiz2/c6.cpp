#include <iostream>
#include <math.h>
using namespace std;

float SumaFracciones(float x);
float SumaFracciones2(float x);

int main() {
    int x = 3;
    cout << "Resultado 1: " << SumaFracciones(x)<<endl;
    cout << "Resultado 2: " << SumaFracciones2(x)<<endl;
    }

    float SumaFracciones(float x) {
        if (x == 1)
            return 1;
        else {
            return (1 / x) + SumaFracciones(x - 1);
        }
    }

    float SumaFracciones2(float x) {
        if (x == 1)
            return 1;
        else {
            cout << pow(2, x) << endl;
            return (1 / pow(2,x)) + SumaFracciones(x - 1);
        }
    }