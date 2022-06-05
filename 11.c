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

// int create(struct buses *);
// void output(struct buses *, int);
// int delet(struct buses *, int);

void output(struct buses bus, int count) {
  int i;
  if (count) {
    for (i = 0; i < count; i++) {
      printf("Номер автобуса: %d, Пункт назначения: %s, время отбытия: %f, время прибытия %f\n", bus[i].nubmer, bus[i].destination, bus[i].dep_time, bus[i].arr_time);
    }
  } else
    printf("Массив пуст!\n");

  // printf("Bus nubmer -- %d\n", bus.number);
  // printf("Punct -- %s\n", bus.destination);
  // printf("Departure time -- %0.2f\n", bus.dep_time);
  // printf("Arrival time -- %0.2f\n", bus.arr_time);
  // printf("\n");
  // printf("\n");
}


// struct buses  bus[100];

void create(struct buses *bus, int count) {
  int num;
  char des[15];
  float dtime, atime;

  // struct buses bus = {num, des[15], dtime, atime};

  // printf("Enter number -- ");
  // scanf("%d", &num);
  //
  // printf("\nEnter destination -- ");
  // scanf("%s", &des);
  //
  // printf("\nEnter departure time -- ");
  // scanf("%f", &dtime);
  //
  // printf("\nEnter arrival time -- ");
  // scanf("%f", &atime);

  printf("\n");
  printf("\n");

  {
    printf("\nВведите данные спортсмена через пробел - фамилия, номер, количество набранных очков.\n");
  }  for (i = 0; i < count; i++) {
          scanf("%d %s %f %f", bus[i].numer, &bus[i].destination, &bus.dep_time[i], &bus[i].arr_time);
    }
}

int main() {
  struct buses bus[100];
  char c;
  int k = 0;

  int count = 0;
  do {
    printf("Введите количество автобусов [1-100]: ");
    scanf("%d", &count);
  } while (count < 1 || count > 100);

  struct buses bus1 = {321, "Stavropol", 0.00, 9.55};
  struct buses bus2 = {61, "Surgut", 0.40, 15.25};
  // output(bus1);
  //
  // output(bus2);

  while (1) {
    printf("\n1. Ввести данные о автобусах.\n");
    printf("2. Вывести список автобусов.\n");
    printf("3. Удалить данные о автобусе.\n");
    printf("4. Выход.\n");

    c = getch();
    switch (c) {
    case '1':
      input();
      break;
    case '2':
      print();
      break;
    case '3':
      delet();
      break;
    case '4':
      return 0;
      break;
    default:
      system("cls");
      printf("\nНеверно выбран пункт меню!\n\n");
    }
  }
  return 0;
}
