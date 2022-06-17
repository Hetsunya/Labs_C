#include <stdio.h>
//
// typedef struct
// {
//     int a;
//     int b;
// } myStruct;
//
// myStruct* simplefunc(int a, int b)
// {
//     myStruct *ms_p;
//     myStruct Ms;
//
//     Ms.a = a;
//     Ms.b = b;
//     ms_p= &Ms;
//
//     return ms_p;
// }
//
// int main(int argc, char** argv) {
//
//         myStruct *ms_p = NULL;
//     ms_p = simplefunc(3, 5);
//     printf("a: %d b: %d\n", ms_p->a, ms_p->b);
//     return 0;
// }
struct my_info{
  int number;           // номер автобуса
  char destination[15]; // пункт назначения
  float dep_time;       // departure time - время отбытия
  float arr_time;
} my_struct; //структура

void funct ( my_info* my_strict );
printf("Bus nubmer -- %d\n", bus.number);
printf("Punct -- %s\n", bus.destination);
printf("Departure time -- %0.2f\n", bus.dep_time);
printf("%Arrival time -- 0.2f\n", bus.arr_time);
printf("\n");
printf("\n"); //прототип функции

int main( void )
{
  funct( &my_struct ); // вызов функции, заполнение полей структуры
  printf("%d", my_struct.price); //вывод значения 1го из полей
  getch();
  return 0;
}

void funct( my_info* my_struct)
{
        //...заполнение полей
}
