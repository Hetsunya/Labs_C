#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 4
int x, d, i, j, r, c, noe, t;
void sort(int **a, int sizey, int sizex) {
  for (int i = 0; i < c; i++) {
    if (i != c)
      if (a[i][0] < a[i + 1][0]) {
        for (int j = 0; j <= r + 2; j++) {
          if (i <= 0)
            t = a[i][i];
          t = a[i - 1][j];
          a[i - 1][j] = a[i][j];
          a[i][j] = t;
        }
      }
  }
}
int main() {
  int a[n][n];
  int i, j, k, l, t;
  srand(time(NULL));
  printf("Array:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      a[i][j] = rand() % 10;
      printf("%4d", a[i][j]);
    }
    printf("\n");
  }
  r = sizeof(a) / sizeof(a[0]);
  c = sizeof(a[0]) / sizeof(a[0][0]);
  // sort((int**)a, 4, 4);
  // for (int i = 0; i < c; i++) {
  //   if (i != c)
  //     if (a[i][0] < a[i + 1][0]) {
  //       int t0 = a[i-1][i];
  //       int t1 = a[i-1][i+1];
  //       int t2 = a[i-1][i+2];
  //       int t3 = a[i-1][i+3];
  //
  //       a[i-1][j] = a[i][j];
  //       a[i-1][j + 1] = a[i][j + 1];
  //       a[i-1][j + 2] = a[i][j + 2];
  //       a[i-1][j + 3] = a[i][j + 3];
  //
  //       a[i-1][j] = t0;
  //       a[i-1][j+1] = t1;
  //       a[i-1][j+2] = t2;
  //       a[i-1][j+3] = t3;
  //       // for (int j = 0; j < r; j++) {
  //       //   //if (i == 0)
  //       //   //  t = a[i][i];
  //       //   t = a[i - 1][j];
  //       //   a[i - 1][j] = a[i][j];
  //       //   a[i][j] = t;
  //       // }
  //     }
  // }
  // printf("New Array:\n");
  // for (i = 0; i < n; i++) {
  //   for (j = 0; j < n; j++)
  //     printf("%4d", a[i][j]);
  //   printf("\n");
  // }
  return 0;
}
