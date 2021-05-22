#include <stdio.h>
typedef unsigned char *byte_pointer;

int main()
{
    ///int val = 0x87654321;
    short sx = -12345; /* -12345 */
    unsigned uy = sx;  /* Mystery! */
    printf("uy = % u:\t", uy);
    show_bytes ((byte_pointer) &uy, sizeof (unsigned));
    ///byte_pointer valp = (byte_pointer)&val;
    ///show_bytes(valp, 1); /*A. */

    return 0;
}

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
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
