#include <stdio.h>

int atoi(int argc, char const *argv[]) {
 int read;
 int i = 0;
 int j = 0;
 while (argv[1][j] != 0) {
   j++;
 }
 int numero[j];
 while (argv[1][i] != 0) {
  read = argv[1][i];
  numero[i]= read - 48;
  i++;
 }
 for (int i = 0; i < j; i++) {
   printf("%d", numero[i]);
 }
 printf("\n");
return 0;
}
