#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "limits.h"

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int a[100];
  int min = INT_MAX;
  int max = INT_MIN;
  for (int i = 0; i < 100; i++) {
    a[i] = rand() % 100;
    printf("%d\n", a[i]);
    if (a[i] > max) {
      max = a[i];
    }
    if (a[i] < min ) {
      min = a[i];
    }
  }
  printf("maximo = %d\n", max);
  printf("minimo = %d\n", min);
  return 0;
}
