/* Вывести соседние символы в таблице ASCII. */

#include <stdio.h>

int main() {

  char a=getchar();
  printf("%c %c", a-1, a+1);

  return 0;
}
