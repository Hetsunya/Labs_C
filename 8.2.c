#include <ctype.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
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
  printf("Enter Insert for exit\n"); // Insert = 45

  char c;
  while (1) {
    c = mygetch();
    if (isalnum(c))
      printf("%d", (int)c);
    else
      printf("%c", c);

    if (c == 0x2D)
      return 0;
    else if (c == 27)
      __fpurge(stdin);

    // isdigit(c);
  }
  return 0;
}
