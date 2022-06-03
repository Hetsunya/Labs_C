#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct detail {
  char name[50];
  char detail_shape[50];
  char amount[50];
  char material[50];
  char strength[50];
} detail_list[10000];

//========
// init_list

void init_list(void) {
  register int t;
  for (t = 0; t < 10000; ++t)
    detail_list[t].name[0] = 0;
}

//===========
// Menu_select

int menu_select(void) {
  char s[80];
  int c;
  printf("1. Ââåäèòå èìÿ\n");
  printf("2. Óäàëèòå èìÿ\n");
  printf("3. Âûâåäèòå ñïèñîê\n");
  printf("4. Âûõîä\n");

  do {
    printf("\nÂâåäèòå íîìåð íóæíîãî ïóíêòà: ");
    fgets(s);
    c = atoi(s);
  } while (c < 0 || c > 4);
  return c;
}

//==============
// FIND_FREE

int find_free(void) {
  register int t;
  for (t = 0; detail_list[t].name[0] && t < 10000; ++t)
    ;

  if (t == 10000)
    return -1;
  return t;
}

//=========
// ENTER

void enter(void) {
  int slot;
  char s[80]

      ;
  slot = find_free();
  if (slot == -1) {
    printf("\nÑïèñîê çàïîëíåí");
    return;

    printf("Ââåäèòå èìÿ: ");
    gets(detail_list[slot].name);

    printf("Ââåäèòå ôîðìó äåòåëè: ");
    gets(detail_list[slot].detail_shape);

    printf("Ââåäèòå îáúåì äåòàëè: ");
    gets(detail_list[slot].amount);

    printf("Ââåäèòå ìàòåðèàë äåòàëè");
    gets(detail_list[slot].material);

    printf("Ââåäèòå ïðî÷íîñòü äåòàëè");
    gets(detail_list[slot].strength);
  }
}

//==============
// Deleted

void deleted(void) {
  register int slot;
  char s[80];

  printf("Ââåäèòå ¹ çàïèñè: ");
  gets(s);
  slot = atoi(s);
  if (slot >= 0 && slot < 10000)

    detail_list[0].name[0] = 0;
}

//=================
// LIST

void list(void) {
  register int t;

  for (t = 0; t < 10000; ++t) {
    if (detail_list[t].name[0]) {
      printf("%s\n", detail_list[t].name);
      printf("%s\n", detail_list[t].detail_shape);
      printf("%s\n", detail_list[t].amount);
      printf("%s\n", detail_list[t].material);
      printf("%s\n", detail_list[t].strength);
    }
  }
  printf("\n\n");
}

//==========
//ÃË.ÔÓÍÊÖÈß

int main(void) {

  setlocale(LC_ALL, "rus");

  char choice;
  init_list();

  for (;;) {
    choice = menu_select();
    switch (choice) {
    case 1:
      enter();
      break;
    case 2:
      deleted();
      break;
    case 3:
      list();
      break;
    case 4:
      exit(0);
    }
  }
  system("pause");
  return 0;
  ;
}
