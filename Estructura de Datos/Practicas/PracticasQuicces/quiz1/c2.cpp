/*9. Dadas las siguientes definiciones:
class node {
 public:
 int info;
 node *next;
};
node *q, *r, *s, t;

Asuma como estado inicial la figura que a continuación se muestra, e indique el estado final
después de ejecutar cada una de las siguientes instrucciones independientemente y luego
una tras otra secuencialmente.

1 q = (*q).next; // q=3;
2 *q = *((*q).next); // q=4;
3 (*q).next; //null
4 (*((*q).next)).next
5 q = (*r).next;
6 *q = *((*r).next);
7 (*s).next = (*q).next;
8 (*s).next = s;
9 t = *q;
10 *q = *s;
11 *s = t;
12 q = t;
13 (*r).next = q;
14 (*((*((*q).next)).next)).next; */