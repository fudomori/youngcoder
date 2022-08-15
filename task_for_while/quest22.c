/* Дано натуральное число N. Найти наименьшее натуральное число r, такое, что 2r≥N */

#include <stdio.h>
#include <math.h>

int main() {
  int value = 0;
  int count = 1;
  scanf("%d", &value);

  while (pow(2, count) < value) {
    count++;
  }
    printf("%d ", count);

  return 0;
}
