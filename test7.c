#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 10

int main() {
  int a[n][n];
  int i, j, k, l, t;
  srand(time(NULL));
  printf("Array:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      a[i][j] = rand() % 100;
      printf("%4d", a[i][j]);
    }
    printf("\n");
  }
  do {
    printf("Enter k and l: ");
    scanf("%d %d", &k, &l);
    if ((k == l) || (k < 1) || (k > 10) || (l < 1) || (l > 10))
      printf("Repeat input!\n");
  } while ((k == l) || (k < 1) || (k > 10) || (l < 1) || (l > 10));
  for (j = 0; j < n; j++) {
    t = a[k - 1][j];
    a[k - 1][j] = a[l - 1][j];
    a[l - 1][j] = t;
  }
  printf("New Array:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++)
      printf("%4d", a[i][j]);
    printf("\n");
  }
  getch();
  return 0;
}
