#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
  //  printf ("\n Характеристикой столбца целочисленной матрицы назовем сумму модулей его\n отрицательных нечётных элементов. Переставляя столбцы заданной \n матрицы, расположить их в соответствии с ростом характеристик.\n\n");
    int **a;
    int i, j, f, n, m;
    printf("\n\t rows: ");
    scanf("%d", &n);
    printf("\n\t columns: ");
    scanf("%d", &m);
    int sumk[m],por[m];
    for (i=0; i<m; i++)
    {
        sumk[i]=0;
        por[i]=i;
        printf ("%d",por[i]);
    }

    a =  ( int  **) malloc(sizeof(int*)*n);
    for  (i=0; i<n; i++)
    {
        a[i]=(int*)malloc(sizeof(int)*m);
    }


    printf ("\n\t Введите 1, чтобы самостоятельно заполнить матрицу.\n");
    printf ("\n\t Введите 0, чтобы заполнить матрицу случайными числами.\n ");

    scanf ("%d",&f);

    if (f==1) // Заполнение матрицы в ручную
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                printf("\nЭлемент [%d][%d] = ", i+1, j+1);
                scanf("%d", *(a+i)+j);
            }
        }
    }
    if (f==0) // Хаполнение матрицы рандомными числами
    {

        for (i=0; i<n; i++)
        {
            for (j=0; j<m; j++)
            {
                a[i][j]=(-50+rand()%100);
            }
        }
    }

    printf ("\n Составленная матрица: \n\n");
    for (i = 0; i < n; i ++)
    {
        for (j = 0; j < m; j ++)
        {
            printf("%4d", *(*(a+i)+j) );
        }
        printf("\n");
    }

// Суммирование абсолюьютных значений нечётный отрицательных чисел по столбцам
    j=0;
    while (j<m)
    {
        for (i=0; i<n; i++)
        {
            if (a[i][j]<0 && a[i][j]%2!=0) sumk[j]=sumk[j]+abs(a[i][j]);
        }
        j++;
    }

    for (i=0; i<m; i++) printf ("\n sumk[%d]=%d",i,sumk[i]);

// Сортировка массива индексов и массива сумм по возрастанию


    int tmp,tmp2;
    for (i=0; i<m-1; i++)
    {
        for (j=i+1; j<m; j++)
        {
            if (sumk[i]>sumk[j])
            {
                tmp=sumk[i];
                tmp2=por[i];
                sumk[i]=sumk[j];
                por[i]=por[j];
                sumk[j]=tmp;
                por[j]=tmp2;
            }
        }
    }

for (i=0;i<m;i++) printf ("\n%d и %d",sumk[i],por[i]);

int **tmp3;
  tmp3 =  ( int  **) malloc(sizeof(int*)*n);
    for  (i=0; i<n; i++)
    {
        tmp3[i]=(int*)malloc(sizeof(int)*n);
    }

 for (i=0;i<n;i++)
 {
       tmp3[i][0]=a[i][0];
        printf ("\n:%d",tmp3[i][0]);
      }


    return 0;
}
