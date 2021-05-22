#include <stdio.h>

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y; //y= o b o a
    *x = *x ^ *y; //x= o b o a
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt - 1;
         first < last;
         first++, last--)
        inplace_swap(&a[first], &a[last]);
}

int main(int argc, char const *argv[])
{
  int a[] = {1,2,3,4,5};
	int len = 5;
	reverse_array(a,len);
	for(int i = 0; i < len; i++){
		printf("%d,",a[i]);
	}
    return 0;
}