#include <math.h>
#include <stdio.h>
// при N = 4 ---- 4.55

double F1(double x) // 0.0 <= x <= 0.6
{
  double f;
  f = 1 / (1 + 25 * pow(x, 2));
  return f;
}

double F2(double x) // 0,6 < x <= 1.6
{
  double f;
  f = (x + 2 * pow(x, 4)) * pow(sin(x), 2);
  return f;
}

double main() {

  int N;
  scanf("%d", &N);
  double S = 0, x, a, b, h;
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
