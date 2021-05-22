#include <stdio.h>
typedef unsigned char *byte_pointer;

int main()
{
	//const char *s = "abcdef";
	//show_bytes((byte_pointer)s, strlen(s));
	int val = 0x87654321;
	byte_pointer valp = (byte_pointer)&val;
	show_bytes(valp, 1); /*A. */

    return 0;
}

void show_bytes(byte_pointer start,size_t len){
	size_t i;
	/*
	 Size_t, es un tipo de "entero", guardado es un entero, al igual que int, largo.
	 Este entero se utiliza para registrar un tamaño (tamaño). El nombre completo de TEAME_T debe ser SIZETYPE, es decir, "un tipo de datos utilizado para registrar el tamaño".
	 Por lo general, usamos el tamaño (XXX) para operar, el resultado obtenido por esta operación es el tipo STSET_T.
	*/
	for (i = 0; i < len; i++)
	{
		printf(" %.2x", start[i]); //%. 2x Indica los enteros deben enviarse con al menos dos números de formato hexadecimal
	}
	printf("\n");
}
void show_int(int x)
{
	show_bytes((byte_pointer)&x, sizeof(int));
}
void show_float(float x)
{
	show_bytes((byte_pointer)&x, sizeof(float));
}
void show_pointer(void *x)
{
	show_bytes((byte_pointer)&x, sizeof(void *));
}
/*
 La función show_int () show_float () show_pointer () llama a show_bytes para convertir el puntero a char *.
 Esta conversión de tipo obligatorio le dice al compilador, y el programa debe considerar este puntero en una secuencia de bytes en lugar de apuntar a un objeto de un tipo de datos en bruto.
*/