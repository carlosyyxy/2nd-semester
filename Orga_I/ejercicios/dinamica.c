#include <stdio.h>
#include <string.h>
/*
    * reverseBytes - reverse bytes
    *   Example: reverseBytes(0x12345678) = 0x78563412
    *   Legal ops: ! ~ & ^ | + << >>
    */

int reverseBytes(int x) {
    int newbyte0 = (x >> 24) & 0xff;

    /* Esto toma los 4 bytes del entero x, lo desplaza 24 bits a la derecha y enmascara 
    todo menos los ultimos 8 bits. Quedando de esta forma 0x00000012.*/
    
    int newbyte1 = (x >> 8) & 0xff00;

    /*Desplaza los 8 bits de x a la derecha y enmascara todo menos los 8 bits del segundo byte de la izquierda. 
    El resultado se ve así, 0x00003400*/

    int newbyte2 = (x << 8) & 0xff0000; 
    /*Desplaza los 8 bits de x solamente que ahora hacia la izquierda, enmascarando 
    todo menos los 8 bits del segundo byte de la derecha, quedando como 0x00560000*/

    int newbyte3 = x << 24;
    /*Como en el newbyte0, esto toma los 4 bytes de x, los desplaza 24 bits a la izquierda. Quedando como 
    0x78000000*/

    return newbyte0 | newbyte1 | newbyte2 | newbyte3; 
    /* Y al final, combina todos los newbytes creados con el operador | y el resultado sera 
    los bytes de x ordenados de manera reversa*/
}

int main() {
    printf("%d, 2018915346", reverseBytes(0x12345678));
     return 0;
}

