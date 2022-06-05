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

int input(struct buses *);
void print(struct buses *, int);
// int delet(struct buses *, int);

int main() {
  struct buses bus[100];
  char c;
  int k = 0;
  // bus[0] = {321, "Stavropol", 0.00, 9.55};
  // bus[1] = {61, "Surgut", 0.40, 15.25};

  while (1) {
    printf("\n1. Enter bus data.\n");
    printf("2. Display a list of buses.\n");
    printf("3. Delete bus data.\n");
    printf("4. Exit.\n");

    c = _getch();

    switch (c) {
    case '1':
      k = input(bus);
      break;
    case '2':
      print(bus, k);
      break;
    case '3':
      printf("eshe net");
      // delet();
      break;
    case '4':
      return 0;
      break;
    default:
      // system("cls");
      printf("\nthe menu item is selected incorrectly!\n\n");
    }
  }
  return 0;
}
void print(struct buses *bus, int count) {
  if (count) {
    for (int i = 0; i < count; i++) {
      printf("Bus number: %d, Destination: %s, Departure time: %0.2f, Arrival "
             "time %0.2f\n",
             bus[i].number, bus[i].destination, bus[i].dep_time,
             bus[i].arr_time);
    }
  } else
    printf("The array is empty!\n");
}

int input(struct buses *bus) {
  int count = 0;
  do {
    printf("Enter the number of buses [1-100]: ");
    scanf("%d", &count);
  } while (count < 1 || count > 100);

  printf("\nEnter the bus data separated by a space - number, destination, "
         "Departure time, Arrival time \n");
  for (int i = 0; i < count; i++)
    scanf("%d %s %f %f", &bus[i].number, bus[i].destination, &bus[i].dep_time,
          &bus[i].arr_time);
  return count;
}
