/* Вывести положительные члены последовательности чисел, поступившей на вход */

#include <stdio.h>

/* int main() {
  int value = 0;

  while (scanf("%d", &value) && value) {
    if (value > 0) printf("%d ", value);
  }

  return 0;
} */

int main() {
  int value = 0;

  while (scanf("%d", &value)) {
    if (value == 0) break;
    if (value < 0) continue;
    printf("%d ", value);
  }

  return 0;
}
