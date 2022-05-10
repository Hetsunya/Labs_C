#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n, max = -1099, min1, sum, min2, g, i2, i;
void fill(int n, int a[]) {
  for (i = 0; i < n; i++)
    a[i] = rand() % 101 - 50;
}

void find(int n) {
  int A[n];
  fill(n, A);
  for (i = 0; i < n; i++)
    printf("%4d", A[i]);

  printf("\n");
  min1 = 1000;
  min2 = 1000;

  for (i2 = 0; i2 < n - 1; i2++) {
    sum = A[i2] + A[i2 + 1];
    if (i2 == n)
      sum = A[i2] + A[i2 - 1];

    if (sum > max)
      max = sum;

    if (A[i2] <= min1) {
      min2 = min1;
      min1 = A[i2];
    } else if (A[i2] <= min2) {
      min2 = A[i2];
    }
  }
  if (A[n - 1] <= min1) {
    printf("min2 ---> %d\n", min2);
    min1 = A[n - 1];
    printf("min2 ---> %d\n", min2);
  } else if (A[n - 1] <= min2) {
    printf("min2 ---> %d\n", min2);
    min2 = A[n - 1];
    printf("min2 ---> %d\n", min2);
  }
}

int main() {
  srand(time(NULL));
  printf(" n ---> ");
  scanf("%d", &n);
  find(n);

  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");

  printf("min1 ---> %d\n", min1);
  printf("min2 ---> %d\n", min2);
  printf("max ---> %d\n", max);
  g = max + min1 + min2;
  printf("g --->%d\n", g);

  return 0;
}
//  Найти два подряд идущих элемента в массиве целых чисел, сумма которых
//  максимальна и прибавить эту сумму к двум минимумам этого массива.
