#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int a[100];
  int suma;
  double prom;
  for (int i = 0; i < 100; i++) {
    a[i] = rand() % 100;
    printf("%d\n", a[i]);
    suma += a[i];
  }
  prom = suma / 100;
  printf("%0.2f\n", prom);
  return 0;
}
