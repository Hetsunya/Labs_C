#include <ctype.h>
#include <stdio.h>
#include <stdio_ext.h>
#include <termios.h>
#include <unistd.h>

int mygetch() {
  struct termios oldt, newt;
  int c;
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  c = getchar();
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  return c;
}

int main() {
  char c;
  while (1) {
    c = mygetch();
    if (c != 127 && c != 27) {
      if (isalnum(c))
        printf("%d", (int)c);
      else
        printf("%c", c);
    } else if (c == 45)
      return 0;
    else if (c == 27)
      __fpurge(stdin);
  }
  return 0;
}
