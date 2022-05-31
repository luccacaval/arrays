#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
  char * a = argv[1];
  int i = 0;
  while (argv[1][i] != 0) {
    i++;
  }
for (int j = 0; j < i/2; j++) {
  if (argv[1][j] != argv[1][i-j-1]) {
    printf("no es palindromo\n");
    return 1;
  }
}
printf("Es palindromo\n");
return 0;
}
