#include <math.h>
#include <stdio.h>

int tmult_ok(int x, int y);

int main() {
  int x = 100; 
  int y = 1000; 

  printf("% d",tmult_ok(x, y));

  return 0;
}

/* Determine whether arguments can be multiplied without overflow */
int tmult_ok(int x, int y) {
  int p = x * y;
  printf("% d", p);
  /*Either x is zero, or dividing p by x gives y */ 
  return !x || p / x == y;
}
