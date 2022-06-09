#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a[3][3];
  int k = 1;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      a[i][j] = atoi(argv[k]);
      k++;
      printf("%d", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
