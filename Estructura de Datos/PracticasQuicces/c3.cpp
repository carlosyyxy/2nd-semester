/*10. Dada la siguiente secuencia de instrucciones indique que ocurre en cada línea y señale si
queda algún espacio de memoria por liberar.
class node {
 public:
 int info;
 node *next;
};
node *p, *q;
int *e, i, **f;

1 void main() {
2 p = new node; //Se reserva el espacio de memoria para p
3 e = new int; //Se reserva el espacio de memoria para e
4 *e = 0; //e es igualado a 0
5 f = &e; //f ahora apuntara a la posición de memoria de e.
6 (*p).next = new node; //se crea un nuevo nuevo para el siguiente nodo de p.
7 q = &(*p); //la posición de memoria de q es igualada a la posición de memoria del primer nodo de p
8 p = (*p).next; //p pasa a ser igual a su siguiente nodo
9 (*q).info = 30; //q.info ahora valdra 30
10 (*p).info = (*q).info + 10; //p.info valdra 30+10=40
11 (*p).next = new node; //se crea un nuevo nodo para el siguiente nodo de p
12 (*((*p).next)).info = (*p).info + (*q).info + 10; //se le asigna al .info del siguiente nodo de p 40+30+10=80
13 p = (*p).next; //p es igual a su siguiente nodo es decir, tiene .info =80
14 (*p).next = NULL; //el siguiente nodo de p = null
15 while(q != NULL){ //mientras que q sea distinto sea distinto de null
16 *e = **f + (*q).info;  //*e= **f + (*q).info, por lo tanto:
    *e = 0 + 30
    *e= 30 + 40
    *e = 70 + 80
    *e = 150
17 q = (*q).next;
18 }
19 f = new int*; //se reserva un espacio de memoria para f
20 *f = new int; //se reserva un espacio de memoria para *f
21 **f = 1; //**f es igualado a 1;
22 delete *f; //se elimina el espacio de memoria reservado par *f
23 *f = &i; //*f ahora tendra el espacio de memoria de i 
24 i = 5; // i es igualado a 5
25 print(**f); //f al ser
26 }*/