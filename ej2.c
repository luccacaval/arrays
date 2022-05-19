#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int lenght = atoi(argv[1]);
  int a[lenght];
  for (size_t i = 0; i < lenght; i++) {
    a[i] = i;
    printf("%d\n", a[i]);
  }
  return 0;
}
