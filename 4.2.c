// #include <conio.h>
#include <math.h>
#include <stdio.h>

int N 1000

double F(double x) {
  // return x >= 0 && x <= 0.6 ? (1 / (1 + 25 * pow(x, 2)))  : ((x + 2 * pow(x,
  // 4)) * pow(sin(x), 2));//8
  return x >= 0 && x <= 0.6 ? (1 / (1 + 25 * pow(x, 2)))
                            : ((x + 2 * pow(x, 4)) * sin(pow(x, 2)));
}

int main() {
  int g
  printf("Шаг -->");
  scanf("%d", &g);
  if (N) {
    double S = 0, x, a, b, h;
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
    // getc();
  } else
    printf("Wrong N");
  return 0;
}

//Серафима
// #include <stdio.h>
// #include <math.h>
//
// double f(int n)
// {
//   double I = 0.0;
//   double h = M_PI / n;
//   for (double x = M_PI/2 / n; x <= M_PI; x += h)
//   {
//     double y;
//     if (x <= M_PI / 2)
//       y = pow(2, x) - 2 + pow(x, 2);
//     else
//       y = sqrt(x) * exp(-pow(x, 2));
//     I += y;
//   }
//   I *= h;
//   return I;
// }
//
// int main()
// {
//   double e;
//   printf("Введите точность -> ");
//   scanf("%lf", &e);
//
//   int n = 1;
//   double In = 0;
//   double I2n = 1;
//
//   while ((fabs(I2n - In) / 3) >= e)
//   {
//     n = n * 2;
//     In = I2n;
//     I2n = f(2 * n);
//   }
//   printf("%lf\n", I2n);
//
//   return 0;
// }
