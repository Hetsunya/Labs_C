#include <stdio.h>
#include <math.h>
int main() {
    double n; double sum = 0;
    double h = 0.02;
    double old_I = 0;

    printf("Enter n: ");
    scanf("%lf", &n);

    do {
        old_I = sum;
        sum = 0; h /= 2.0;
        for (int i = 0; i < 1.6 / h; i++)
        {
            if (i * h <= 0.6)
                sum += (1 / (1 + 25 * pow(h, 2)));
            else sum += ((h + 2 * pow(h, 4)) * sin(pow(h, 2)));
        }
        sum *= h;
    } while (fabs(sum - old_I) / 3.0 >= n);
    printf("%lf", sum);
    return 0;
}
