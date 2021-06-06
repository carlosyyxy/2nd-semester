#include <iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
void main2();

int main(){
    main2();
    return 0;
}

void main2(){
    node **p, **s, *q, *r;
    p = &q; //p recibe por referencia los valores de q
    q = new node;
    (*q).info = 30; //es necesario reservar un espacio de memoria para q y el info de q es igualado a 30
    (*q).next = NULL; //el next de q es igualado a nulo
    r = new node; //se reserva un espacio de memoria para r 
    (*r).info = 2; //se le asigna 2 al info de r
    s = &r; //s recibe por referencia los valores de r
    delete q; //se elimina q
    q = new node; //se reserva un espacio de memoria para q
    (*q).info = 31; //ahora q vale 31
    (*(*s)).next = q; //La sintaxis del doble puntero es erronea,  (*s).next  y el siguiente de s es q
    (*(*p)).info = (*q).info + (*((*(*s)).next)).info; //p = 31+31
}