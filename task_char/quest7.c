/* Вывести на экран последние K символов латинского алфавита в верхнем регистре в алфавитном порядке. */

#include <stdio.h>

int main() {
  int value;
  scanf("%d", &value);

  for (int i=91-value; i<=90; i++) {
    printf("%c", i);
  }
  return 0;
}
