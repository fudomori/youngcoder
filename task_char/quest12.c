/* Лишние пробелы. Удалить из строки лишние пробелы. */

#include <stdio.h>

int main() {
  char str[100];
  fgets(str, 100, stdin);

  for (int i=0; str[i]!='\n'; i++) {
    if (str[i]!=' ') printf("%c", str[i]);
    if (str[i]!=' ' && str[i+1]==' ') printf(" ");
  }

/*   char str[100];
  while (scanf("%s", str)) 
  printf("%s ", str); */

  return 0;
}

