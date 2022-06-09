#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int a [n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        a[i][j] = 1;
      } else {
        a[i][j] = 0;
      }
      printf("%d", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
