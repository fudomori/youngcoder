/* Необходимо найти максимальный и минимальный элемент последовательности, неизвестной длины. */

#include <stdio.h>

int main() {
  int value = 0;

  scanf("%d", &value);
  int min = value;
  int max = value;
  
  do {
    min = value < min ? value : min;
    max = value > max ? value : max;
  } while (scanf("%d", &value) && value);
  printf("%d %d", max, min);

  return 0;
}
