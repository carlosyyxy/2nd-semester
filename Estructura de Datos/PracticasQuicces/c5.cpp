/*12. Dada la siguiente secuencia de instrucciones indique que ocurre en cada línea. Indique
además si queda algún elemento por liberar de memoria al terminar recorrido( ).
class node {
 public:
 int info;
 node *next;
};

node *p, *q;
1 void recorrido() {
2 p = new node; //Se crea un nodo nuevo para p 
3 (*p).info = 10; //p.info tendra el valor de 10
4 (*p).next = p; //el siguiente nodo de p sera igualado a p
5 q = new node; //Se reserva un nuevo espacio de memoria para q
6 (*p).next = q; //el siguiente nodo de p es igualado a q
7 (*q).info = (*p).info + 3; // el info de q ahora tendra el valor de 10+3=13
8 (*q).next = p; = el siguiente nodo de q sera igual a p
9 (*q).next = NULL; //el siguiente nodo de q es igual a NULLO
10 q = new node; //se reserva un nuevo espacio de memoria para q
11 (*q).info = (*p).info + (*((*p).next)).info; // q.info es = a 10+13=23
12 (*((*p).next)).next = q; //el siguiente nodo de p es igual a q
13 (*q).next = NULL; //q next es igualado a null
14 q = p; //q ahora vale p
15 while (q != NULL){
16 print((*q).info);
17 q = (*q).next;
18 }
*/