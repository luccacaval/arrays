#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(void) {
  int a[N] = {1,2,3,4,5};
  for (int i = N-1; i >= 0; i--) {
    printf("%d", a[i]);
  }
  printf("\n");
  return 0;
}
