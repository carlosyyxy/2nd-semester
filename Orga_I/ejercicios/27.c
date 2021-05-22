#include <math.h>
#include <stdio.h>

/*Determinar si se pueden sumar argumentos sin desbordamiento */
int uadd_ok(unsigned x, unsigned y);

int main() {
  unsigned x = 20; /* Mystery! */
  unsigned y = 4;  /* Mystery! */

  printf("No hay desbordamiento? = % u:\t", uadd_ok(x, y));
  return 0;
}

int uadd_ok(unsigned x, unsigned y) {
  if ((x + y) < pow(2, 4)) {
    return 1;
  }

  else {
    return 0;
  }
}