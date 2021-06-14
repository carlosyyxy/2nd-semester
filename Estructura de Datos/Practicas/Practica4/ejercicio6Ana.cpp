/*Un pastor se encuentra en la orilla de un río con una oveja, un lobo y una col, para pasar a la
otra orilla dispone de una barca muy pequeña en la que solo puede cruzar acompañado como
máximo por uno de los tres. Realice un algoritmo que encuentre el modo para que el pastor
pueda trasladar a la oveja, al lobo y la col a la otra orilla de manera exitosa. Se debe tener en
cuenta como condición que el pastor no debe dejar a solas al lobo con la oveja, ni a la oveja
con la col. */

#include <iostream>
#include <string.h>
using namespace std;

struct Destinos {
    string animales[3] ={"Col", "Oveja", "Lobo"};
    bool verificar[3] = {false, false, false};
    int contador = 0;
} Orilla, Destino, Auxiliar;

int main() {
    SumaElementos(arr, 3, 5);
}

void cruzarOrilla(char orilla[Max], char otherSide[Max], int count = 0, char toSearch = 'O', char toEvit = 'L') {
    if (count > Max) {
        return;
    }

    bool existOtherSide = exist(otherSide, toEvit);

    for (size_t i = 0; i < Max; i++) {
        if (orilla[i] == toSearch) {

            if (!existOtherSide || count == 2) {

                otherSide[count] = orilla[i];
                cout << orilla[i] << "->" << endl;
                orilla[i] = '.';
                cruzarOrilla(orilla, otherSide, count + 1, toEvit, toSearch);

            } else if (existOtherSide) {

                char newSearch = toSearch == 'L' ? 'C' : toEvit;
                char newEvit = toEvit == 'O' ? 'O' : toSearch;
                cout << orilla[i] << "->" << endl;
                cout << otherSide[count - 1] << "<-" << endl;

                char aux = orilla[i];
                orilla[i] = otherSide[count - 1];
                otherSide[count - 1] = aux;
                cruzarOrilla(orilla, otherSide, count, newSearch, newEvit);
            }
        }
    }
}
