#include <stdio.h>
int fun1(unsigned word);
int fun2(unsigned word);
typedef unsigned char *byte_pointer;

int main()
{
    unsigned fun = 0xEDCBA987;         /* Mystery! */
    unsigned fu2 = 0xEDCBA987;         /* Mystery! */

    printf("fun = % u:\t", fun);
    printf("fu2 = % u:\t", fu2);

    int a = fun1(fun);
    int b = fun2(fu2);

    printf("fun = % u:\t", a);
    printf("fu2 = % u:\t", b);

    return 0;
}

int fun1(unsigned word)
{
    return (int)((word << 24) >> 24);
}

int fun2(unsigned word)
{
    return ((int)word << 24) >> 24;
}