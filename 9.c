// Вывести на экран слова исходной строки, встречающиеся в ней только один
// раз. Например: при вводе "When hunter meets hunter this hunter eats
// hunter" результат работы программы будет "When meets this eats".
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str[100];
  fgets(str, 100, stdin);
  char *w[50];
  int wcount = 0;
  for (char *p = strtok(str, " "); p; p = strtok(0, " "))
    w[wcount++] = p;
  for (int i = 0; i < wcount; ++i) {
    int cp = 0;
    for (int j = 0; j < wcount; ++j)
      if (i != j && strcmp(w[i], w[j]) == 0) {
        cp = 1;
        break;
      }
    if (cp)
      continue;
    printf("%s ", w[i]);
  }
}
