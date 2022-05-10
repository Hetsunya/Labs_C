//Здесь без выбора размера матрицы
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 6

int main() {
  int a[N][M], i, j, k, id, max;
  srand(time(NULL));
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      a[i][j] = rand() % 50 - 25;
      printf("%4d", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  int r = sizeof(a) / sizeof(a[0]);
  int c = sizeof(a[0]) / sizeof(a[0][0]);

  for (int i = 0; i < r; i++)
    for (int j = 0; j < r; j++)
      if (a[i][0] > a[j][0])
        for (int k = 0; k < r; k++) {
          int t = a[i][0];
          a[i][0] = a[j][0];
          a[j][0] = t;
        }

  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      printf("%4d", a[i][j]);
    }
    printf("\n");
  }
}
