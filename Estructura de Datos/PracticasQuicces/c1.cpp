/* 8. Para las siguientes instrucciones, construya el estado de todas las variables en la memoria
(de forma gráfica) que muestre que ocurre en ella, y cuál es la salida del programa.

struct node {
 int info;
 node *next;
};
1 void main() {
2 node *p, *r, *s; //Se declara los siguientes punteros de tipo node
3 p = new node; //Se crea un espacio de memoria para p 
4 s = new node; //Se crea un espacio de memoria para s
5 r = new node; //Se crea un espacio de memoria para r
6 (*p).next = r; //El siguiente nodo de p será r.
7 (*r).next = s; //El siguiente nodo de r será s.
8 (*s).next = p; //el siguiente nodo de s sera p.
9 (*s).info = 3; //Se le asigna al info de s el tipo el numero 3
10 (*((*((*((*p).next)).next)).next)).info = 2; //El siguiente nodo de p es s, el siguiente nodo de r es s
                                                //y el siguiente nodo de s es p, por lo tanto p=2
11 (*((*((*s).next)).next)).info = 1; //El siguiente nodo de s es p y el siguiente de p es r, por lo tanto r=1
12 p = (*s).next; //P es igualado al siguiente nodo de s, que sigue siendo p por lo tanto se mantiene igual
13 print((*p).info+" "+(*s).info+" "+(*r).info); // 2+3+1
14 }








*/