//Здесь без функций
#include <conio.h>
#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> // Одна строка копируется
#include <time.h>

//Заполнение
// void fill(int *a[], int r, int c) {
//
//   srand(time(NULL));
//   for (int i = 0; i < r; i++)
//     for (int j = 0; j < c; j++) {
//       // *(a + r * c + j)= rand() % 10 - 1;
//       // Найди как правльно указать на элемент
//       *(a + (r * c) + (i + j)) = rand() % 10 - 0;
//     }
//   printf("matr v fill\n");
//   for (int i = 0; i < r; i++) {
//     for (int j = 0; j < c; j++)
//       //  printf("%4d", *(a + r * c + i) );
//       printf("%4d", *(a + r * c + i));
//
//     printf("\n");
//   }
//   printf("\n");
//   printf("\n");
//   printf("\n");
//   printf("\n");
//
//   // a - указатель на массив,
//   // r - количество столбцов,
//   // j - индекс строки,
//   // i - индекс столбца.
// }
//Вывод
void output(int *a, int r, int c) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      // printf( "%4d", (int*)a++ );
       printf("%4d ", *a);
     // printf("%4d ", *(a + i + j));
      // printf("%4d ", (*(a+i))[j]);
      // printf("%d", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}
//Сортировка
void sort(int *a, int r, int c) {
  int t;
  for (int i = 0; i < c; i++)
    for (int j = 0; j < r; j++)
      for (int k = 0; k < r; k++)
        if (*(a + ((r * c) + i)) > *(a + ((r * c) + (j + k)))) {
          // if (a[i][0] > a[j][0]) {
          //  printf("%d --- %d\n", i, j);
          if (i == 0 || j == 0)
            continue;
          //   t = (a + ((r * c) + i ));
          //   *(a + ((r * c) + i )) = *(a + ((r * c) + j ));
          //   *(a + ((r * c) + j )) = t;
          // t = a[i][0];
          // a[i][0] = a[j][0];
          // a[j][0] = t;
          t = *(a + i + k);
          *(a + i + k) = *(a + j + k);
          *(a + i + k) = t;
        }
  printf("\n");
}

int main() {
  srand(time(NULL));
  int r, c;
  printf("rows -> ");
  scanf("%d", &r);
  printf("columns -> ");
  scanf("%d", &c);
  int a[r * c];
  for (int i = 0; i < r * c; i++) {
    // *(a + r * c + j)= rand() % 10 - 1;
    // Найди как правльно указать на элемент
    *(a + i) = rand() % 10 - 0;
    printf("%d ", *(a + i));
  }
  r = sizeof(*a) / sizeof(*a + 0);
  c = sizeof(*a + 0) / sizeof(a[0 * 0]);

  // int *p = &a[0][0];
  int *pa = a;
  // int **pa = &a[0][0];
  // int *p = &a;
  // int **pa = &p;
  //  fill(pa, r, c);
  printf("\n");
  printf("\n");
  printf("Matrix before sorting:\n");

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      // printf("%4d ", *(pa  + i + j));
      printf("%4d ", *pa++);
      //  printf("element-->%d\n", x);
      // printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  output(pa, r, c);
  // output(a, r, c);
  // sort(pa, r, c);
  // printf("\n");
  // printf("\n");
  // printf("\n");
  // printf("\n");
  // printf("\n");
  // printf(" Matrix after sorting:\n");
  // output(pa, r, c);
  // // printf("Matrix before sorting:\n");
  // output(a[r][c], r, c);
  // sort(a[r][c], r, c);
  // printf(" Matrix after sorting:\n");
  // output(a[r][c], r, c);
}
