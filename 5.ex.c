#include <stdio.h>
 unsigned int fr ( unsigned int n )
 {
 return n ? fr ( n - 1) * n : 1;
 }
 unsigned int fl ( unsigned int n )
 {
 unsigned int i , res = 1;
 for ( i = 2; i <= n ; i ++)
 res *= i ;
 return res ;
 }
 int main ()
 {
 unsigned int n ;
 printf (" Factorial of n \ nn -> ") ;
 scanf ("%u" , &n) ;
 printf (" Cycle : n ! = % u " , fl ( n ) ) ;
 printf (" Recursion : n ! = % u \ n " , fr ( n ) );
 return 0;
}