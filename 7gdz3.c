//Здесь без функций
#include <conio.h>
#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> // Одна строка копируется
#include <time.h>

//Заполнение
void fill(int **a, int n, int m) {
  srand(time(NULL));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) {
      *(a + n * m + i)= rand() % 10 - 1;
      // a[i][j] = rand() % 10 - 1;
      // Найди как правльно указать на элемент
      //*(a + (n * m) + (i + j)) = rand() % 10 - 0;
    }
  printf("matr v fill\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      for (int k = 0; k < n; k++)
      //  printf("%4d", *(a + n * m + i) );
      printf("%4d", *(a + n * m + i+k));

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
  for (int i = 0; i < n+5; i++) {
    for (int j = 0; j < m+5; j++) {
      printf("%4d", *(a + n * m + i));
      // printf("element-->%d\n", x);
      // printf("%4d ", a[i][j]);
      // printf("%4d ", **a);
      // printf("%i\n", *((int *)a + (i * m)));
      // printf("\n");
      // x += 1;
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
          if(i == 0 || j ==0) continue;
          int t = *(a + ((n * m) + i + k));
          *(a + ((n * m) + i + k)) = *(a + ((n * m) + j + k));
          *(a + ((n * m) + j + k)) = t;
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
  int a[n][m];

  int *p = (int *)malloc(sizeof(a) * n * m);

  // int **pa = malloc(sizeof(int) * (n * m));
  int **pa = &a[0][0];
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
  // fill(&a[0][0],n,m);
  // output(&a[0][0],n,m);
  // sort(&a[0][0],n,m);
  // output(&a[0][0],n,m);
}
