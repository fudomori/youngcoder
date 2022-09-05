/* В программе имеются символьные переменные ch и inp. Объявите  указатель с именем p_ch, который ссылается на эту переменную */

#include <stdio.h>

int main(void) {
  char ch, inp;
  scanf("%c %c", &inp);

  char *p_ch = &ch;
  *p_ch=inp;

  printf("%c", *p_ch);

  return 0;
}
