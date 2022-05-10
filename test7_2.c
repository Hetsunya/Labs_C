#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n, i, j, x, t, r;

void fill(int n, int x, int a[][4]) {
  for (i = 0; i < n -1 ; i++) {
    for (j = 0; j < x; j++) {
      a[i][j] = rand() % 10 - 2;
    }
  }
}

int main() {
  srand(time(NULL));
  printf(" n -> ");
  scanf("%d", &n);
  printf(" x -> ");
  scanf("%d", &x);
  // system ("cls");
  int A[n][x];
  fill(n, x, A);
  int a[n][x];
  printf("Array:\n");
  printf("rows: %d\n", sizeof(a) / sizeof(a[0]));
  printf("columns: %d\n", sizeof(a[0]) / sizeof(a[0][0]));
  int r = sizeof(A) / sizeof(A[0]);
  int c = sizeof(A[0]) / sizeof(A[0][0]);

  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      printf("%4d", A[i][j]);
    }
    printf("\n");
  }

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

  printf("New Array:\n");
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++)
      printf("%4d", a[i][j]);
    printf("\n");
  }
  getch();
  return 0;
}
