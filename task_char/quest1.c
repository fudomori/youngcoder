/* Сопоставьте символ с его номером в таблице ASCII. */

#include <stdio.h>

int main() {

  printf("%d %d %d %d %d %d \n", 'a', 'A', '5', 'h', 'H', '%');

  char a[6] = {97, 53, 72, 65, 104, 37};
  for (int i = 0; i < 6; ++i)
  printf("%c = %d\n", a[i], a[i]);

  return 0;
}
