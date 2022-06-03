// Написать программу, реализующую считывание данных с клавиатуры, их
// обработку и вывод на экран результатов
// запроса согласно вашему варианту. Требования и ограничения Предусмотреть
// возможноть просмотра всего списка, добавления и удаления записей. Необходимые
// операции с записями реализовать в виде отдельных
// функций . Междугородние автобусы. Номер
// автобуса, пункты и время отправления и прибытия. Получить данные об
// автобусах, следующих в заданный город.
#include <conio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

struct buses {
  int number;           // номер автобуса
  char destination[15]; // пункт назначения
  float dep_time;       // departure time - время отбытия
  float arr_time;       // arrival time - время прибытия
};

void output(struct buses bus) {
  printf("Bus nubmer -- %d\n", bus.number);
  printf("Punct -- %s\n", bus.destination);
  printf("Departure time -- %0.2f\n", bus.dep_time);
  printf("%Arrival time -- 0.2f\n", bus.arr_time);
  printf("\n");
  printf("\n");
}

buses* create() {
  int num;
  char des[15];
  float dtime, atime;
  struct buses bus = {num, des[15], dtime, atime};

  printf("Enter number -- ");
  scanf("%d", &num);

  printf("\nEnter destination -- ");
  scanf("%s", &des);

  printf("\nEnter departure time -- ");
  scanf("%f", &dtime);

  printf("\nEnter arrival time -- ");
  scanf("%f", &atime);

  printf("\n");
  printf("\n");

  output(bus);
}

int main() {
  char c;
  _Bool inf = true;
  struct buses bus1 = {321, "Stavropol", 0.00, 9.55};
  struct buses bus2 = {61, "Surgut", 0.40, 15.25};
  // struct buses A; Тоже самое что A после } в 17
  //  printf("sizeof(A) = %d\n", sizeof(A));
  output(bus1);

  output(bus2);

  create();
//  printf("Enter Insert for exit\n");
//   do {
//     create();
//     // printf("for exit type 'exit'-->");
//     // char exit = getchar();
//     // if (exit == "exit")  goto exit;
//
//   } while (inf == true);
//
// exit:
  return 0;
}
