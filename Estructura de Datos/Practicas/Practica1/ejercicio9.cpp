/*Ejercicio 3: Asuma como estado inicial la figura que a continuación se muestra,
e indique el estado final después de ejecutar cada una de las siguientes instrucciones
independientemente y luego una tras otra secuencialmente.*/

#include <iostream>
using namespace std;
struct node {
    int info;
    node *next;
} * aux, *aux2, *q, *r, *s, t;

void main2();

int main() {
    main2();
    return 0;
}

void main2() {
    aux = new node;
    (*aux).info = 1;

    q = new node;
    (*q).info = 2;
    (*aux).next = q;

    aux2 = new node;
    (*aux2).info = 3;
    (*q).next = aux2;

    r = new node;
    (*r).info = 4;
    (*aux2).next = r;
    (*r).next = NULL;

    s = new node;
    (*s).info = 5;
    t.info = 0;

    q = (*q).next;     //Q toma el valor de su posición siguiente, es decir 3.
    *q = *((*q).next); //q toma el valor de su posicion siguiente, es decir 4
    //(*q).next; //No pasa nada
    // (*((*q).next)).next; //No pasa nada
    cout << "a" << endl;
    q = (*r).next; //El siguiente de r es nulo, asi que q también.
                   // *q = *((*r).next); //Igual que el valor contenido en q
    cout << "b" << endl;
    //(*s).next = (*q).next; //El siguiente de s es igualado a nulo ya que q esta en nulo
    (*s).next = s; //el siguiente de s pasa a tener el mismo valor que s, es decir 5
    cout << "c" << endl;
    t = *q; //t pasa a valer nulo como q.

    *q = *s; //q pasa a valer 5 como s.
    *s = t;  //s pasa a valer nulo

    //q = t; //esto no es válido porque t no es un puntero como q
    (*r).next = q; //el siguiente de r vale 5 ahora como 5 y tiene la misma posicion de memoria
                   // (*((*((*q).next)).next)).next; //supongo q no pasa naa
}
