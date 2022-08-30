  /* Написать программу, реализующую вывод числа с разделением на триады цифр */

#include <stdio.h>

int main() {
  char str[100];
  fgets(str, 100, stdin);
  int i=0, j=0;
  while (str[i]!='\n') i++;
  while (i-->0) {
    printf("%d", str[j]%48);
    j++;
    if (i%3 == 0) printf(" ");
  }

  return 0;
}
