#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int a [4][4];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      a[i][j] = rand() % 10;
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  double prom_f = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      prom_f += a[i][j];
    }
    prom_f = prom_f / 4;
    printf("El promedio de la fila %d es %0.2f\n", i, prom_f);
    prom_f = 0;
  }
  double prom_c = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      prom_c += a[j][i];
    }
    prom_c = prom_c / 4;
    printf("El promedio de la columna %d es %0.2f\n", i, prom_c);
    prom_c = 0;
  }
  return 0;
}
