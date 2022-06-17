#include <math.h>
#include <stdio.h>

double F1(double x) // 0.0 <= x <= 0.6
{
  return 1 / (1 + 25 * pow(x, 2));
}

double F2(double x) // 0,6 < x <= 1.6
{
  return ((x + 2 * pow(x, 4)) * sin(pow(x, 2)));
}

double main() {
  int N;
  scanf("%d", &N);
  double S = 0, x, a, b, h, d;
  a = 0;
  b = 1.6;

  h = (b - a) / N;
  x = a + h;
  while (x < b) {
    if (x <= 0.6) {
      S = S + 4 * F1(x);
      x = x + h;
      if (x >= b)
        break;
      S = S + 2 * F1(x);
      x = x + h;
    } else {
      S = S + 4 * F2(x);
      x = x + h;
      if (x >= b)
        break;
      S = S + 2 * F2(x);
      x = x + h;
    }
  }
  S = (h / 3) * (S + F2(a) + F2(b));
  printf("%.04f", S);
  return 0;
}
// 0.1 +0.138+ 0.2+ 0.3+0.5+0.8+1 = 3.038
//  1.5 + 1.01 + 2
