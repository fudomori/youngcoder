/* Вывести последовательность чисел, поступившую на вход до -9999. */

#include <stdio.h>

int main() {
  int value = 0;

  do {
  scanf("%d", &value);
  printf("%d ", value);
  } while (value != -9999);

  return 0;
}
