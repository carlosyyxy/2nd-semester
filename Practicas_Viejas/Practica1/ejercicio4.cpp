/*Ejercicio 3: Asuma como estado inicial la figura que a continuación se muestra,
e indique el estado final después de ejecutar cada una de las siguientes instrucciones
independientemente y luego una tras otra secuencialmente.*/

#include<iostream>
using namespace std;
class node {
 public:
 int info;
 node *next;
} *q, *r, *s, t;


void main2();

int main(){
  main2();
  return 0;
}

void main2() {
      q = (*q).next; //Q toma el valor de su posición siguiente, es decir 3.
      *q = *((*q).next); //q toma el valor de su posicion siguiente, es decir 4
      (*q).next; //No pasa nada
      (*((*q).next)).next; //No pasa nada
      q = (*r).next; //El siguiente de r es nulo, asi que q también. 
      *q = *((*r).next); //Igual que el valor contenido en q
      (*s).next = (*q).next; //El siguiente de s es igualado a nulo ya que q esta en nulo
      (*s).next = s; //el siguiente de s pasa a tener el mismo valor que s, es decir 5
      t = *q; //t pasa a valer nulo como q.
      *q = *s; //q pasa a valer 5 como s.
      *s = t; //s pasa a valer nulo
      //q = t; //esto no es válido porque t no es un puntero como q
      (*r).next = q; //el siguiente de r vale 5 ahora como 5 y tiene la misma posicion de memoria
      (*((*((*q).next)).next)).next; //supongo q no pasa naa
}
