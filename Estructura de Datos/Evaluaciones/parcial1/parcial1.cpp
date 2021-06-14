/*.*/

#include <iostream>
using namespace std;
typedef struct pack3 {
    int a;
};

typedef struct pack2 {
    int b;
    pack3 *next;
};

typedef struct pack1 {
    int c;
    pack2 *next;
};

void main2();

int main() {
    main2();
    return 0;
}

void main2() {
    pack1 data1, *data_ptr;
    data1.c = 30;

    pack2 data2;
    data2.b = 20;

    pack3 data3;
    data3.a = 10;

    data_ptr = new pack1;

    data_ptr = &data1;
    data1.next = &data2;
    data2.next = &data3;

    data1.c; // Accede al dato de c, es decir 30
    data_ptr->c; //Accede al datode data_ptr que por ahora, Accede al dato1, es decir 30
    data_ptr.c; // Es erroneo la sintaxis porque no se ha colocado el operador de derreferenciación
    data1.next->b; //Es erroneo porque no se puede utilizar -> con elementos que no son punteros.
    data_ptr->next->b; //Accede al dato siguiente de data1, es decir 20
    data_ptr.next.b;   // Es erroneo la sintaxis porque no se ha colocado el operador de derreferenciación
    data_ptr->next.b(*(data_ptr->next)).b; //El error se encuenta al final de la linea, se debe colocar un -> no un punto.
    data1.next->next->a; //Acede a los dos datos siguientes de dato1 es decir a=10
    data_ptr->next->next.a; //El error se encuenta al final de la linea, se debe colocar un -> no un punto.
    data_ptr->next->next->a; //Acede a los dos datos siguientes de dato1 es decir a=10
    data_ptr->next->a; //Es erroneo ya que el dato siguiente a data_ptr es dato2 y este no tiene un int llamado a
    data_ptr->next->next->b; //Es erroneo ya que los datos siguientes a data_ptr es dato3 y este no tiene un int llamado b
}

/* El operador retorna el dato referenciado por el apuntador, y se coloca antes del
identificador que se desea derreferenciar. Se emplear´a el s´ımbolo ∗ para derreferenciar y se acostumbra colocarlo entre
par´entesis junto con el identificador para mayor legibilidad. A continuaci´on se muestra un ejemplo como continuaci´on del
segmento de c´odigo anterior: