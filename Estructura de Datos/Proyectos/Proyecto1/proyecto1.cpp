#include <iostream>
#include <string.h>
using namespace std;

void entrada() {
    char Carta[100][100];
    int m[100], n[100], tem[10];
    int Tagentes;
    string frase;

    cin >> Tagentes;
    cin >> frase;

    for (int i = 0; i < Tagentes; i++) {

        for (int k = 0; k < 2; k++) {
            scanf(" %d", &tem[k]);
            m[i] = tem[0] + 1;
            n[i] = tem[1];
        }

        for (int j = 0; j < m[i]; j++) {
            for (int k = 0; k < n[i]; k++) {
                scanf(" %c", &Carta[j][k]);
            }
        }
    }

    for (int i = 0; i < Tagentes; i++) {
        for (int j = 0; j < m[i]; j++) {
            for (int k = 0; k < n[i]; k++) {
                cout << Carta[j][k];
            }
            cout << endl;
        }
    }
}

int main() {
    entrada();
    return 0;
}