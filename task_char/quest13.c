/* Расстояние Хэмминга. */

#include <stdio.h>

int main() {
  char str[100], str2[100];
  fgets(str, 100, stdin);
  fgets(str2, 100, stdin);

  int count=0;
  for (int i=0; str[i]!='\n'; i++) {
    if (str[i]!=str2[i]) count++;
  }
  printf("%d", count);

  return 0;
}
