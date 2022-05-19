#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  srand(time(NULL));
  int a[100];
  int frec[10] = {0,0,0,0,0,0,0,0,0,0} ;
  for (size_t i = 0; i < 100; i++) {
    a[i] = rand() % 10;
    frec[a[i]]++;
  }
printf("0 = veces %d\n", frec[0]);
printf("1 = veces %d\n", frec[1]);
printf("2 = veces %d\n", frec[2]);
printf("3 = veces %d\n", frec[3]);
printf("4 = veces %d\n", frec[4]);
printf("5 = veces %d\n", frec[5]);
printf("6 = veces %d\n", frec[6]);
printf("7 = veces %d\n", frec[7]);
printf("8 = veces %d\n", frec[8]);
printf("9 = veces %d\n", frec[9]);
  return 0;
}
