#include <conio.h>
#include <math.h>
#include <stdio.h>

double F(double x) {
  // return x >= 0 && x <= 0.6 ? (1 / (1 + 25 * pow(x, 2)))  : ((x + 2 * pow(x,
  // 4)) * pow(sin(x), 2));//8
  return x >= 0 && x <= 0.6 ? (1 / (1 + 25 * pow(x, 2)))
                            : ((x + 2 * pow(x, 4)) * sin(pow(x, 2))); // 8
  // return x >= 0 && x <= 0.25 ? exp(sin(x)) : exp(x) - (1 / sqrt(x)) ;//2
}

int main() {
  int N;
  scanf("%d", &N);
  double S = 0, x, a, b, h;
  // 2 Вариант
  a = 0;
  b = 0.5;
  // 8(мой) Вариант
  a = 0;
  b = 1.6;
  //отрезок [a, b] разобьем на N частей
  h = (b - a) / N;
  x = a + h;
  while (x < b) {
    S = S + 4 * F(x);
    x = x + h;
    //проверяем не вышло ли значение x за пределы полуинтервала [a, b)
    if (x >= b)
      break;
    S = S + 2 * F(x);
    x = x + h;
  }
  S = (h / 3) * (S + F(a) + F(b));
  printf("%0.5f", S);
  _getch();
  return 0;
}
