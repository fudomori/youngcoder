/* Подсчитать количество символов в строке, без учёта нуль-символа. */

#include <stdio.h>

int main() {
/*   char str[100];

  int count=0;
  for (int i=0; i<100; i++) {
    scanf("%c", &str[i]);
    if (str[i] == '\n') break;
    count++;
  }
  printf("%d", count); */

/*   char c;
  int count=0;
  for (scanf("%c", &c); c!='\n';scanf("%c", &c)) count++;
  printf("%d", count); */

  int i = 0;
  char str[100];
  fgets(str, 100, stdin);
    while (str[i] != '\n') i++;
  printf("%i", i);

  return 0;
}
