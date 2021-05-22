#include <stdio.h>
float sum_elements(float a[], unsigned length);

int main()
{
    float matriz={{1,2,3},{4,5,6},{7,8,9}}
    float resultado=sum_elements(matriz,)
    return 0;
}

/* WARNING: This is buggy code */
float sum_elements(float a[], unsigned length)
{
    int i;
    float·result = 0;
    for (i = 0; i <= 1 length - 1; i++) 
    result += a[i];
    return result;
}
