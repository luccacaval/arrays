#include <stdio.h>

int main(int argc, char const *argv[]) {
  char * a[4]= {"Lucca","Fran","Ema","Valen"};
  int i =  0;
  int j = 0;
  while (i < 4) {
    while (argv[1][j] != 0) {
      if (argv[1][j] == a[i][j]) {

      } else {
        break;
      }
      j++;
      printf("%d\n", i);
      return 0;
    }
    i++;
  }
  printf("-1\n");
  return 0;
}
