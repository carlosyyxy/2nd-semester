/*Ejercicio 3: Para las siguientes instrucciones, construya el estado de todas
 las variables en la memoria(de forma gráfica) que muestre que ocurre en ella,
 y cuál es la salida del programa.*/

#include<iostream>
using namespace std;
struct node {
 int info;
 node *next;
};
void main2();

int main(){
  main2();
  return 0;
}

void main2() {
    node *p, *r, *s;
    p = new node; //Se reserva un espacio de memoria para p
    s = new node; //Se reserva un espacio de memoria para s
    r = new node; //Se reserva un espacio de memoria para r
    (*p).next = r; //el siguiente nodo de p será r.
    (*r).next = s; //el siguiente nodo de p será s.
    (*s).next = p; //el siguiente nodo de p será p.
    (*s).info = 3; //el valor de info de s valdrá 3
    (*((*((*((*p).next)).next)).next)).info = 2; /*El siguiente nodo
    de p, es r, el que le sigue es s y el que le sigue a s es p, es decir el info
    de p valdrá 2*/
    (*((*((*s).next)).next)).info = 1; /*El nodo que le sigue a s es p y el que
    le sigue a p es r. R valdrá 1.*/
    p = (*s).next; //P es igualado al siguiente de s que sigue siendo p.
    cout<<((*p).info+(*s).info+(*r).info); // Imprime por pantala 2+1+3
}
