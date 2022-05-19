#include <stdio.h>

#include <time.h>

#include <stdlib.h>

int main(void) {
  int carta = 0;
  srand(time(NULL));
  char * baraja[40] = {
    "1 de oro",
    "2 de oro",
    "3 de oro",
    "4 de oro",
    "5 de oro",
    "6 de oro",
    "7 de oro",
    "10 de oro",
    "11 de oro",
    "12 de oro",
    "1 de bastos",
    "2 de bastos",
    "3 de bastos",
    "4 de bastos",
    "5 de bastos",
    "6 de bastos",
    "7 de bastos",
    "10 de bastos",
    "11 de bastos",
    "12 de bastos",
    "1 de espadas",
    "2 de espadas",
    "3 de espadas",
    "4 de espadas",
    "5 de espadas",
    "6 de espadas",
    "7 de espadas",
    "10 de espadas",
    "11 de espadas",
    "12 de espadas",
    "1 de copas",
    "2 de copas",
    "3 de copas",
    "4 de copas",
    "5 de copas",
    "6 de copas",
    "7 de copas",
    "10 de copas",
    "11 de copas",
    "12 de copas"
  };
  int control_repetidas[40];
  for (int i = 0; i < 40; i++) {
    control_repetidas[i] = 0;
  }
  char * mano[3] = {
    "n",
    "n",
    "n"
  };
  for (int i = 0; i < 3; i++) {
    carta = rand() % 41;
    if (control_repetidas[carta] != 0) {
      carta = rand() % 41;
    }
    control_repetidas[carta]++;
    mano[i] = baraja[carta];
  }
  for (int i = 0; i < 3; i++) {
    printf("%s\n", mano[i]);
  }
}
