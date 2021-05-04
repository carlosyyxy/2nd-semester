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
      q = (*q).next;
      *q = *((*q).next);
      (*q).next;
      (*((*q).next)).next
      q = (*r).next;
      *q = *((*r).next);
      (*s).next = (*q).next;
      (*s).next = s;
      t = *q;
      *q = *s;
      *s = t;
      q = t;
      (*r).next = q;
      (*((*((*q).next)).next)).next;
}
