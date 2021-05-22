#include <stdio.h>
/*Prototipo para la función de biblioteca strlen */

size_t strlen(const char *s);

int main()
{

    return 0;
}

/*Determinar si la cadena s es más larga que la cadena t */
/*ADVERTENCIA : Esta función tiene errores */
int strlonger(char *s, char *t)
{
    return strlen(s) - strlen(t) > 0;
}