int save(char *filename, struct buses *p, int n);
int load(char *filename);

void print(struct buses *bus, int count, int n) {
  // if (count) {
  //   for (int i = 0; i < count; i++) {
  //     if (bus[i].number <= 0)
  //       continue;
  //     printf(
  //         "[%d]Bus number: %d, Destination: %s, Departure time: %0.2f, Arrival "
  //         "time %0.2f\n",
  //         i + 1, bus[i].number, bus[i].destination, bus[i].dep_time,
  //         bus[i].arr_time);
  //   }
  // } else {
    for (int i = 0; i < 10; i++) {
      if (bus[i].number <= 0)
        continue;
      printf(
          "[%d]Bus number: %d, Destination: %s, Departure time: %0.2f, Arrival "
          "time %0.2f\n",
          i + 1, bus[i].number, bus[i].destination, bus[i].dep_time,
          bus[i].arr_time);
    }
  // }


// запись структуры в файл
// int save(char *filename, struct buses *st, int n) {
//
// FILE *fp;
// char *c;
//
// // число записываемых байтов
// int size = n * sizeof(struct buses);
//
// if ((fp = fopen(filename, "wb")) == NULL)
//   perror("Error occured while opening file");
//
// // записываем количество структур
// c = (char *)&n;
// for (int i = 0; i < sizeof(int); i++) {
//   putc(*c++, fp);
// }
//
// // посимвольно записываем в файл все структуры
// c = (char *)st;
// for (int i = 0; i < size; i++) {
//   putc(*c, fp);
//   c++;
// }
// fclose(fp);
}
// загрузка из файла структуры
int load(char *filename) {
  FILE *fp;
  char *c;
  int m = sizeof(int);
  int n, i;

  // выделяем память для количества данных
  int *pti = (int *)malloc(m);

  if ((fp = fopen(filename, "r")) == NULL) {
    perror("Error occured while opening file");
  }

  // считываем количество структур
  c = (char *)pti;
  while (m > 0) {
    i = getc(fp);
    if (i == EOF)
      break;
    *c = i;
    c++;
    m--;
  }
  //получаем число элементов
  n = *pti;

  // выделяем память для считанного массива структур
  struct buses *ptr = (struct buses *)malloc(n * sizeof(struct buses));
  c = (char *)ptr;
  // после записи считываем посимвольно из файла
  while ((i = getc(fp)) != EOF) {
    *c = i;
    c++;
  }

  // перебор загруженных элементов и вывод на консоль
  printf("\n%d bus in the file stored\n\n", n);

  free(pti);
  free(ptr);
  fclose(fp);
  return n;
}
// }
// int load(char *filename) {
//   FILE *fp;
//   size_t lines_count = 0;
//   char line[10];
//
//   fp = fopen(filename, "r");
//   if (NULL == fp)
//     return 0;
//
//   while (fgets(line, 10, fp) != NULL) {
//     if (0 == is_empty(line)) {
//       fclose(fp);
//       return 0;
//     }
//     lines_count++;
//   }
//   fclose(fp);
// }
