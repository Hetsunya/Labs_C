// Изменить порядок строк в матрице таким образом, чтобы элементы ПЕРВОГО
// столбца были расположены в порядке убывания.
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//
// void sort(int **a, int c, int r) { //Все правильно
//   int j, t;
//   for (int i = 0; i < r; i++)
//     for (int j = 0; j < r; j++)
//       if (a[i][0] > a[j][0])
//         for (int k = 0; k < r; k++) {
//           int t = a[i][0];
//           a[i][0] = a[j][0];
//           a[j][0] = t;
//         }
// }
//
// void fill(int n, int d, int **a) {
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < d; j++) {
//       a[i][j] = rand() % 10 - 5;
//     }
//   }
//   for (int i = 0; i < 6; i++) {
//     for (int j = 0; j < 6; j++) {
//       printf("%4d", a[i][j]);
//       if (j == 6 - 1)
//         printf("\n");
//     }
//   }
// }
//
// void view(int a, int r, int c) {
//   for (int i = 0; i < r; i++)
//     for (int j = 0; j < c; j++) {
//       printf("%4d", a[i][j]);
//       if (j == c - 1)
//         printf("\n");
//     }
// }

int main() {
    srand(time(NULL));
  int x, d, i, j, n, r, c, noe;
  int columns, rows;
  printf("columns --->");
  scanf("%d", &columns);
  printf("rows --->");
  scanf("%d", &rows);
  int a[columns][rows];

  printf("rows: %d\n", sizeof(a) / sizeof(a[0]));
  printf("columns: %d\n", sizeof(a[0]) / sizeof(a[0][0]));
  printf("number of elements: %d\n", sizeof(a) / sizeof(a[0][0]));
  r = sizeof(a) / sizeof(a[0]);
  c = sizeof(a[0]) / sizeof(a[0][0]);
  noe = sizeof(a) / sizeof(a[0][0]);

  // fill
  for (int i = 0; i < n; i++)
    for (int j = 0; j < d; j++)
      a[i][j] = rand() % 10 - 5;

    printf("matr\n");
    // view
    for (int i = 0; i < r; i++)
      for (int j = 0; j < c; j++) {
        printf("%4d", a[i][j]);
        if (j == c - 1)
          printf("\n");
      }

    // sort
    for (int i = 0; i < r; i++)
      for (int j = 0; j < r; j++)
        if (a[i][0] > a[j][0])
          for (int k = 0; k < r; k++) {
            int t = a[i][0];
            a[i][0] = a[j][0];
            a[j][0] = t;
          }
    printf("new matr\n");
    // new view
    for (int i = 0; i < r; i++)
      for (int j = 0; j < c; j++) {
        printf("%4d", a[i][j]);
        if (j == c - 1)
          printf("\n");
      }
    //  view(a,5,4);
    // for (i = 0; i < r; i++)
    //   for (j = 0; j < c; j++) {
    //     printf("%4d", a[i][j]);
    //     if (j == c - 1)
    //       printf("\n");
    //   }
    // for (int i = 0; i < r; i++)
    //   for (int j = 0; j < r; j++)
    //     if (a[i][0] > a[j][0])
    //       for (int k = 0; k < r; k++) {
    //         int t = a[i][0];
    //         a[i][0] = a[j][0];
    //         a[j][0] = t;
    //       }

    return 0;
  }
