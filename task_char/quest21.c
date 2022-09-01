  /* Вывести полное название файла в формате */

#include <stdio.h>
#include <string.h>

int main() {
  char str1[100], str2[100];
  scanf("%s\n%s", str1, str2);
  printf("%s", strcat(strcat(str1, "."), str2));


/*   printf("%s%c", gets(stderr), '.');
  printf("%s", gets(stderr)); */

  return 0;
}
