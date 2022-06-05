#include <conio.h>
#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Заполнение
int fill(int r, int c, int a[r][c]) {
  srand(time(NULL));
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      a[i][j] = rand() % 20 - 0;
}
//Вывод
void output(int r, int c, int a[r][c]) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%4d", a[i][j]);
    }
    printf("\n");
  }
}
//Сортировка
void sort(int r, int c, int a[r][c], int n) {

  // for (int i = 0; i < r; i++)
  //   for (int j = 0; j < r; j++)
  //     if (a[i][0] > a[j][0]) {
  //       // if ((a[i][0] || a[j][0]) > 100)
  //       //  printf("%d --- %d\n", i, j);
  //       for (int k = 0; k < n; k++) {
  //         int t = a[i][k];
  //         a[i][k] = a[j][k];
  //         a[j][k] = t;
  //       }
  //     }
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      if (a[i][0] > a[j][0])
        for (int k = 0; k < n - j; k++) {
          // if ((a[i][0] || a[j][0]) > 100)
          //  continue;
          int t = a[i][k];
          a[i][k] = a[j][k];
          a[j][k] = t;
        }
}

int main() {
  srand(time(NULL));

  int r, c;
  printf("rows -> ");
  scanf("%d", &r);
  int n = r;
  printf("columns -> ");
  scanf("%d", &c);
  int a[r][c];

  // r = sizeof(a) / sizeof(a[0]); Это только если в sort та версия где 2 r
  // c = sizeof(a[0]) / sizeof(a[0][0]);

  fill(r, c, a);
  printf("Matrix before sorting:\n");
  output(r, c, a);
  sort(r, c, a, n);
  printf("Matrix after sorting:\n");
  output(r, c, a);
  return 0;
}
