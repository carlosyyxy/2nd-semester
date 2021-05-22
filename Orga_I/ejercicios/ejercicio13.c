#include <stdio.h>
/* Declarations of functions implementing operations bis and bic */
int bis(int x, int m);
int bic(int x, int m);
/* Compute x l y using only calls to functions bis and bic */
int bool_or(int x, int y) {
int result =
return result;
}
/* Compute x ˄ y using only calls to functions bis and bic */
int bool_xor(int x; int y) {
int result =
return result;
}


int main(int argc, char const *argv[])
{
    int a=10, b=10;
    if (a&b==true){
		printf("%son iwales,");
    }
    else{
        printf("&no son iwales,");
    }
    return 0;
}

