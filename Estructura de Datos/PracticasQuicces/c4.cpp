/*11. Considere las siguientes declaraciones e indique el efecto de las siguientes operaciones:
int *x, *y, *z, a;
char *w, b;
bool c;
1 x = new int; //Se reserva un espacio de memoria para x
2 y = new int; //Se reserva un espacio de memoria para y
3 w = new char; //Se reserva un espacio de memoria para  w

4 x = y; //x es igualado al espacio de memoria que y
5 b = *w; //b adquiere el valor almacenado en w

6 z = new int; //Se reserva el espacio de memoria de z

7 z = w; //No se puede igualar dos espacios de memoria de distintos tipos de esta forma
8 c = (z == w); // no se puede comparar posiciones de memoria de distitnos tipos

9 x = new int; //se reserva un espacio de memoria para x
10 *x = 1; //x obtiene el valor de 1
11 *w = 'g'; //w obtiene el valor de g
12 a = *x + *y; //a al ser un int normal es igualado a la suma de 1+el valor aleatorio asignado a y
13 c = (a == *w); //c es igualado a la comparasión hecha entra el valor de a y  el valor de w
14 *z = a; //el valor de z es igualado al valor asignado a a
15 z = x; //z es igualado a x
16 delete y;*/ //se elimina y