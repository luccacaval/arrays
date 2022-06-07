#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1])+2;
  double p = atof(argv[2]);
  int board [n+2][n+2];

for (int i = 0; i < n; i++) {
  board[i][0] = 0;
  board[n-1][i] = 0;
  board[i][0] = 0;
  board[i][n-1] = 0;
}

  for (int i = 1; i < n-1; i++) {
    for (int j = 1; j < n-1; j++) {
      int r = rand()%100;
      double hay_mina = r/100.0;
      if (hay_mina < p) {
        board[i][j] = 9;
      } else {
        board[i][j] = 0;
      }
    }
  }

for (int i = 0; i < n; i++) {
  for (int j = 0; j < n; j++) {
    int count = 0;
    if (board[i][j] == 0) {
    if (board[i-1][j-1] == 9) count++;
    if (board[i][j-1] == 9) count++;
    if (board[i+1][j-1] == 9) count++;
    if (board[i+1][j] == 9) count++;
    if (board[i+1][j+1] == 9) count++;
    if (board[i][j+1] == 9) count++;
    if (board[i-1][j+1] == 9) count++;
    if (board[i-1][j] == 9) count++;
    board[i][j] = count;
  }
  }
}
for (int i = 1; i < n-1; i++) {
  for (int j = 1; j < n-1; j++) {
    if (board[i][j] == 9) printf("* ");
    else printf("%d ", board[i][j]);
  }
  printf("\n");
}
  return 0;
}
