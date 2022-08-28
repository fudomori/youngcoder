/* Поиск символа. Найти в строке заданный символ. */

#include <stdio.h>

int main() {
  char search;
  scanf("%c ", &search);
  char str[100];
  fgets(str, 100, stdin);

  int count=0, i;
  for (i=0; str[i] != '\n'; i++)
    if (str[i] != search) {
    } else {
      count++;
      break;
    }
  printf("%d", count ? i : -1);

  return 0;
}
