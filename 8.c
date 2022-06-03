#include <conio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
int main() {
  char c;
  _Bool inf = true;
  printf("Enter Insert for exit\n");
  do {
    c = getchar();
    char exit = iscntrl(c);
    //
    // if ( iscntrl(c) != 0 )
    //   goto exit;
    //
    // system("cls");
    // if (iscntrl(c))
      if ((int)c == 45)
        goto exit;

    if (isalnum(c)) {
      printf("%x", (int)c);
      continue;
    }
    printf("%c", (int)c);
    // isdigit(c);
  } while (inf == true);

exit:
  return 0;
}
