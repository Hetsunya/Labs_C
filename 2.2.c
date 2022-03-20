#include <stdio.h>
#include <math.h>

int main()
{
  int x;
  //print("x -->");
//scan("%l", &x);
  for(x = 2; x < 100; x +0.01)
  {
  double y = -log(x + 2.0) - log(x - 2.0);
      i(y >= 0 )
      {
      double z = sqrt(3.0* y - y);
      //print("%l\n", y);
      //print("%l", z);
    }
    i(y != 0&& z != 0)
    {
      printf("%f\n", x);
    }

  }
    /*else
    {
      print("x value is incorrect!");
    }
 }
 else
 {
   print("x value is incorrect!");
 }*/
}
