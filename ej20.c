#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  char min[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  int i = 0;
  while (argv[1][i] != 0) {
    printf("%c", min[argv[1][i] - 'A']);
    i++;
  }
  printf("\n");
  return 0;
}
