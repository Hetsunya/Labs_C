//Здесь без функций
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int n, m;
  printf("rows -> ");
  scanf("%d", &n);
  printf("columns -> ");
  scanf("%d", &m);
  int a[n][m], id, max;
  srand(time(NULL));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
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
      if (a[i][0] > a[j][0]) {
        printf("%d --- %d\n", i, j);
        for (int k = 0; k < n; k++) {
          int t = a[i][k];
          a[i][k] = a[j][k];
          a[j][k] = t;
        }
      }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%4d", a[i][j]);
    }
    printf("\n");
  }
}
