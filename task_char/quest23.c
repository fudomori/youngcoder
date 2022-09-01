  /* Даны две строки. Необходимо сравнить строки между собой с учётом регистра символов. */

#include <stdio.h>
#include <string.h>

int main() {
  char str1[100], str2[100];
  scanf("%s\n%s", str1, str2);
  printf(strcmp(str1, str2) ? "no" : "yes");

  return 0;
}
