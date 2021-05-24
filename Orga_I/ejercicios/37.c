#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *copy_elements(void *ele_src[], int ele_cnt, size_t ele_size);
int main() {
  int x = 100;
  int y = 1000;
  void *ele_src[221];

  printf("% d", copy_elements(ele_src, 212, 32));

  return 0;
}

/* Illustration of code vulnerability similar to that found in
* Sun's XDR library */
void *copy_elements(void *ele_src[], int ele_cnt, size_t ele_size) {
  /** Allocate buffer for ele_cnt objects, each of ele_size bytes* and copy from locations designated by ele_src */
  long long unsigned required_size = ele_cnt * (long long unsigned)ele_size;
  size_t request_size = (size_t)required_size;
  if (required_size != request_size)
    /* Overflow must have occurred. Abort operation */
    return NULL;
  void *result = malloc(request_size);
  if (result == NULL)
    /* malloc failed */
    return NULL;
  void *next = result;
  int i;
  for (i = 0; i < ele_cnt; i++) {
    /* Copy object i to destination */
    memcpy(next, ele_src[i], ele_size);
    /* Move printer to next memory region */
    next += ele_size;
  }
  return result;
}