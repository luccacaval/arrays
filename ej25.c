#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int a [3][3];
  int i = 0;
  int suma = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      a[i][j] = rand() % 10;
      printf("%d", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  while (i < 3) {
    suma += a[i][i];
    i++;
  }
  printf("%d\n", suma);
return 0;
}
