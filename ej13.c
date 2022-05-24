#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  char * meses[13]= {"","Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre", "Octubre","Noviembre","Diciembre"};
  int mes = atoi(argv[1]);
  if (mes < 1 || mes > 12) {
    printf("error\n");
    return 1;
  }
  printf("%s\n", meses[mes]);
  return 0;
}
