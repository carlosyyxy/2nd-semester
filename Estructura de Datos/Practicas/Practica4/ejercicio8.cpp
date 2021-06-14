#include <iostream>
#include <stdio.h>
using namespace std;
int index = 0;
int letters[3] = {1, 2, 3};
int tableOfSol[6][3], sol[3];
bool uses[3] = {false, false, false};

void perm(int step, int n);
void permImpar(int step, int n);

int main() {
    //perm(0, 3);
    permImpar(0, 3);

    cout << "Elementos: " << endl;
    for (int i = 0; i < index; i++) {
        for (int j = 0; j < 3; j++)
            cout << tableOfSol[i][j] << " ";
        cout << endl;
    }

    return 0;
}

void perm(int step, int n) {
    if (step == n) {
        for (int i = 0; i < n; i++) {
            tableOfSol[index][i] = sol[i];
        }
        index++;
    } else {
        for (int i = 0; i < n; i++) {
            if (!uses[i]) {
                sol[step] = letters[i];
                uses[i] = true;
                perm(step + 1, n);
                uses[i] = false;
            }
        }
    }
}

void permImpar(int step, int n) {
    if (step == n) {
        for (int i = 0; i < n; i++) {
            tableOfSol[index][i] = sol[i];
        }
        index++;
    } else {
        for (int i = 0; i < n; i++) {
            if (!uses[i]) {
                if(letters[i]+letters[i+1]%2!=0){
                    cout << "entra como impar" << endl;
                    cout << letters[i] << "-->" << letters[i + 1] << endl;
                    sol[step] = letters[i];
                    uses[i] = true;
                    perm(step + 1, n);
                    uses[i] = false;
                }
                else{
                    cout << "entra como par" << endl;
                    cout << letters[i] << "-->" << letters[i + 1] << endl;
                }
            }
        }
    }
}