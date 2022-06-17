#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c;
    int k1 = 0, k2 = 0, k3 = 0;
    char x,y,z;
    printf("Введите три произвольных символов для подсчета\n");
    scanf("%c",&x);
    scanf("%c",&y);
    scanf("%c",&z);
    printf("Введите произвольные символы\n");
    while (c != 27)
    {
    c = getchar();
    if (c == x)
        k1++;
    if (c == y)
        k2++;
    if (c == z)
        k3++;
    }
    printf("%c = %d\n",x,k1);
    printf("%c = %d\n",y,k2);
    printf("%c = %d\n",z,k3);
    return 0;
}
