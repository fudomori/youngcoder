/* Вывести положительные члены последовательности чисел, поступившей на вход */

#include <stdio.h>

int main() {
  int value = 0;

  while (scanf("%d", &value) && value) {
    value > 0 ? printf("%d ", value) : value;
  }

  return 0;
}
