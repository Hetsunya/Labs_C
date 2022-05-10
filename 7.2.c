#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void fill(int n, int d, int **a) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < d; j++) {
      a[i][j] = rand() % 10 - 5;
    }
  }
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      printf("%4d", a[i][j]);
      if (j == 6 - 1)
        printf("\n");
    }
  }
}

int main() {
  srand(time(NULL));

  int columns, rows;
  printf("columns --->");
  scanf("%d", &columns);
  printf("rows --->");
  scanf("%d", &rows);
  int matrix[columns][rows];

  fill(columns, rows, matrix);

  int minElem = 0;
  int maxElem = columns * rows;
  printf("matrix");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%4d", matrix[i][j]);
      if (j == columns - 1)
        printf("\n");
    }
  }

  return 0;
}
