/* Выведите на экран все точные квадраты натуральных чисел, не превосходящие данного числа N. Выводить квадраты следует от меньшего к большему. */

#include <stdio.h>

/* int main() {
  int value = 0;
  int maxSquare = 0;
  int count = 1;

  scanf("%d", &value);
  while (maxSquare <= value) {
    if (maxSquare) printf("%d ", maxSquare);
    maxSquare = count * count;
    count++;
  }
  return 0;
} */

int main() {
  int value = 0;
  int count = 1;

  scanf("%d", &value);
  while (count*count <= value) {
    printf("%d ", count*count);
    count++;
  }
}
