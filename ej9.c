#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a[20];
  int nro= 40;
  int n = 0;

  while (nro >= 0) {
    a[n]= nro;
    n++;
    nro -= 2;
  }

  for (int i = 0; i < 20; i++) {
      printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}
