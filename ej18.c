#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char * letras[]= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--""-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-. .-","-.--","--.."};
  int i = 0;
  int j = 1;
  while (argc > j) {
    while (argv[j][i] != 0) {
      printf("%s", letras[(argv[1][i])-'a']);
      i++;
    }
    printf("|");
    i = 0;
    j++;
  }
  printf("\n");
  return 0;
}
