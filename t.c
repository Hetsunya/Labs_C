#include <conio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
int main(int argc, char *argv[])
{ int n,m, min_i, min_j,c;
    printf ("vvedite kol-vo elementov n(strok), m(stolbcov) \n");
    scanf("%d %d", &n,&m);
    if ((n<=0)&&(m<=0)) {printf(" nekorektnii vvod"); return 0;}
    printf("vvedite massiv: \n");
    int a[n][m];
    for (int i=0; i<n; i++)  for (int j=0; j<m;j++) scanf("%d", &a[i][j]);
    printf("ishodnaja matrica: \n");
    for (int i=0; i<n; i++) { for (int j=0; j<m;j++) printf("%d\t", a[i][j]); printf("\n");}

    min_i=0;
    min_j=0;
    int n1=n;
    while (n1>1){
    for (int i=0; i<n1; i++) { for (int j=0; j<m;j++)  if (a[i][j]<a[min_i][min_j]) {min_i=i; min_j=j;}}
    for (int j=0; j<m;j++) {c=a[min_i][j]; a[min_i][j]=a[n1][j]; a[n1][j]=c;}
    n1-=1;}

    printf("polucennaja matrica: \n");
    for (int i=0; i<n; i++) { for (int j=0; j<m;j++) printf("%d\t", a[i][j]); printf("\n");}
    /* TODO: Enter code here */
    return 0;
}
