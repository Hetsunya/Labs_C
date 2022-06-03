//Здесь без функций
#include <conio.h>
#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> // Одна строка копируется
#include <time.h>

//Заполнение
void fill(int *a[], int n, int m) {
  srand(time(NULL));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) {

      (*(a+i))[j] = rand() % 10 - 1;
            //a[i][j] = rand() % 50 - 25;
    }
  printf("matr v fill\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      //  printf("%4d", *(a + n * m + i) );
      printf("%4d", *(a + n * m + i));

    printf("\n");
  }
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");

  // a - указатель на массив,
  // n - количество столбцов,
  // j - индекс строки,
  // i - индекс столбца.
}
//Вывод
void output(int **a, int n, int m) {
  int x = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      // printf("%4d", *(a + n * m + i));
      // printf("element-->%d\n", x);
      // printf("%4d ", (*(a+i))[j]);
      // printf("%i\n", *((int *)a + (i * m)));
    }
    printf("\n");
  }
}
//Сортировка
void sort(int **a, int n, int m) {
  int i;
  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
      // if (*(a + m * i + n) > *(a + m * j + n)) {
      //   printf("%d --- %d\n", i, j);
      //   for (int k = 0; k < n; k++) {
      //     int t = *(a + m * i);
      //     *(a + m * i) = *(a + m * j);
      //     *(a + m * j) = t;
      //   }
      if (*(a + ((n * m) + i)) > *(a + ((n * m) + j))) {
        printf("%d --- %d\n", i, j);
        for (int k = 0; k < n; k++) {
          if (i == 0 || j == 0)
            continue;
          // int t = *(a + ((n * m) + i + k));
          // *(a + ((n * m) + i + k)) = *(a + ((n * m) + j + k));
          // *(a + ((n * m) + j + k)) = t;
          int t = a[i][0];
          a[i][0] = a[j][0];
          a[j][0] = t;
        }
      }

  // }
  // if (a[i][0] > a[j][0])
  //   for (int k = 0; k < n; k++) {
  //     int t = a[i][0];
  //     a[i][0] = a[j][0];
  //     a[j][0] = t;
  //   }
}

int main() {
  srand(time(NULL));
  int n, m;
  printf("rows -> ");
  scanf("%d", &n);
  printf("columns -> ");
  scanf("%d", &m);
  // int **a = 0;
  // a = malloc(sizeof(*a)* (m));
  int **a = (int **)malloc(n * sizeof(int *));

  int i, j;
  for (i = 0; i < n; i++)
    pa[i] = malloc(m * sizeof(int));
  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      a[i][j] = i * m + j + 1;

  // int **pa = ((int **)malloc(n*sizeof(int*)));

  // int *c;
  // c =malloc(sizeof(m));
  // int *r;
  // r =malloc(sizeof(n));

  // Не, ну бля, это пиздец какой то
  // fill((int**)a,n,m);
  // output((int**)a,n,m);
  // sort((int**)a,n,m);
  // output((int**)a,n,m);

  fill(pa, n, m);
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
  printf("Matrix before sorting:\n");
  output(pa, n, m);
  sort(pa, n, m);
  printf(" Matrix after sorting:\n");
  output(pa, n, m);
  //
  // fill(a[n][m],n,m);
  // output(a[n][m],n,m);
  // sort(a[n][m],n,m);
  // output(a[n][m],n,m);
  // fill(a[n][m],n,m);
  // output(a[n][m],n,m);
  // sort(a[n][m],n,m);
  // output(a[n][m],n,m);
}
