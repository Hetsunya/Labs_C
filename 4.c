#include <stdio.h>
#include <math.h>

int i = 0;
float a = 0.0;
float b = 1.6;
float h = 0.1;
float y;
float f;
float arr[];
float sum;

float integral(float *x)
{
//printf("*x        f(*x)\n");
//printf("--------------\n");

do
{
  if (*x >= 0 && *x <= 0.6)
  {
    f = 1 / (1 + 25 * pow(*x, 2));
  }

  if (*x >= 0.6 && *x <= 1.6)
  {
    f = (*x + 2 * pow(*x, 2))*pow(sin(*x), 2);
  }
//  printf("%0.1f        %0.1f\n",*x, f);
  arr[i] = f;
  sum = sum + arr[i];
  *x = *x + 0.1;
//  printf("arr[i] --->%f\n", arr[i]);
  i = i + 1;
  f = 0;
} while (*x <= 1.7);

printf("\n");
printf("\n");
printf("\n");
printf("\n");

  return f;
  return i;
  return sum;
}

int main()
{
  printf("n --->");
  scanf("%d", &y);
  integral(&y);
  printf("%d\n", i);
  //printf("%d\n", i);
  //printf("sum = %f\n", sum);

    return 0;
}
