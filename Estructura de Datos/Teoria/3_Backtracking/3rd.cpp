#include <iostream>
#include <stdio.h>
using namespace std;
int index = 0;
char letters[4] = {'a', 'b', 'c', 'd'};
char tableOfSol[24][4], sol[4];
bool uses[4] = {false, false, false, false};

void perm(int step, int n);

int main() {
    perm(0, 4);

    cout <<"Elementos: "<<endl;
    for (int i = 0; i < index; i++) {
        for (int j = 0; j < 4; j++)
            1; //cout << tableOfSol[i][j] << " ";
            1; //cout << endl;
    }

    return 0;
}

void perm(int step, int n) {
    if (step == n) {
        for (int i = 0; i < n; i++){
            tableOfSol[index][i] = sol[i];
            //cout << "tableOfSol[index]["<<i<<"]" << tableOfSol[index][i] << endl;
        }
        index++;
    } else {
        for (int i = 0; i < n; i++) {
            if (!uses[i]) { //mientras uses[i] sea distinto de falso
                cout <<i<<".  "<< sol[step] << " = " << letters[i] <<"--Step= "<<step<<endl;
                sol[step] = letters[i]; //el paso de la solucion sera igual a letters[i]
                uses[i] = true; //decimos que uses[i]=true
                perm(step + 1, n); //hacemos una llamada recursiva pero ahora con step+1
                //cout << "entro aqui" << endl;
                uses[i] = false; //por ultimo, cuando el arreglo este completo, igualamos a uses[i] a falso para poder seguir poniendo numeros
            }
        }
        cout << "entro aqui" << endl;
    }
}