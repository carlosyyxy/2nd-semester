#include <math.h>
#include <stdio.h>

/*Determinar si se pueden sumar los argumentos sin desbordamiento */
int taddok(int x, int y);
int tsub_ok(int x, int y);

int main() {
  int x = -8; /* Mystery! */
  int y = -8; /* Mystery! */

  printf("% d", taddok(x, y));
  printf("% d", tsub_ok(x, y));

  return 0;
  }

  int taddok(int x, int y) {
    if (pow(2, 3) <= (x + y) || (x + y) < pow(-2, 3)) {
      return 0;
    } else {
      return 1;
    }
  }
  /* Determine whether arguments can be subtracted without overflow */
  /* WARNING: This code is buggy. */
  int tsub_ok(int x, int y) {
    if (y == -8) {
      return taddok(x, -8);
    }
    else{
      return taddok(x, -y);
    }
  }
