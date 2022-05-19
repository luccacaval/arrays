#include <stdio.h>
#define N 3
int main(int argc, char const *argv[]) {
  int a[N] = {1, 2, 3};
  int b[N] = {3, 2 ,1};
  int res = 0;
  for (int i = 0; i < N; i++) {
    res += a[i] * b[i];
    printf("%d\n", res);
  }
  printf("%d\n", res);
  return 0;
}
