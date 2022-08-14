/* Вывести последовательность чисел, поступившую на вход кроме -9999. */

#include <stdio.h>

int main() {
  int value = 0;

  while (scanf("%d", &value) && value != -9999) {
  printf("%d ", value);
  }

  return 0;
}
