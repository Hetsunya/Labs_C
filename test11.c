#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>
#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

struct Person {
  char fam[30];
  int num;
  int och;
} p;

int input(struct Person *);
void print(struct Person *, int);
int delet(struct Person *, int);

int main() {
  struct Person per[100];
  char c;
  int k = 0;

  // setlocale(LC_ALL, "Rus");
  SetConsoleCP(1251); //установка кодовой страницы win-cp 1251 в поток ввода
  SetConsoleOutputCP(1251); //установка кодовой страницы win-cp 1251 в поток

  while (1) {
    printf("\n1. Ввести данные о спортсменах.\n");
    printf("2. Вывести список спортсменов.\n");
    printf("3. Удалить данные о спортсмене с минимальным количеством очков.\n");
    printf("4. Выход.\n");

    c = _getch();

    switch (c) {
    case '1':
      k = input(per);
      break;
    case '2':
      print(per, k);
      break;
    case '3':
      k = delet(per, k);
      break;
    case '4':
      return 0;
      break;
    default:
      printf("Неверно выбран пункт меню!\n\n");
    }
  }
  return 0;
}

int input(struct Person *per) //ввод данных о спортсменах
{
  int i;
  int count = 0;
  do {
    printf("Введите количество спортсменов [1-100]: ");
    scanf("%d", &count);
  } while (count < 1 || count > 100);

  printf("Введите данные спортсменов через пробел - фамилия, номер, очки.\n");
  for (i = 0; i < count; i++) {
    scanf("%s %d %d", per[i].fam, &per[i].num, &per[i].och);
  }
  return count;
}

void print(struct Person *per, int count) //печать введенных данных
{
  int i;
  if (count) {
    for (i = 0; i < count; i++) {
      printf("Фамилия спортсмена: %s, номер: %d, количество очков: %d\n",
             per[i].fam, per[i].num, per[i].och);
    }
  } else
    printf("Массив пуст!\n");
}
int delet(struct Person *per, int count) {
  int i, imin;

  if (count) {
    imin = 0;
    for (i = 1; i < count; ++i)
      if (per[imin].och > per[i].och)
        imin = i;
    printf("Информация о спортсмене с очками = %d удалена\n", per[imin].och);
    for (i = imin; i < count - 1; ++i)
      per[i] = per[i + 1];
    count--;
  } else {
    printf("Массив пуст!\n");
    count = 0;
  }
  return count;
}
