/* Даны три числа. Подсчитать количество положительных среди этих чисел */

#include <stdio.h>

int main(void) {
  int a, b, c, i = 0;
  scanf("%d %d %d", &a, &b, &c);

  if(a > 0) {
    i++;
  }
  if(b > 0) {
    i++;
  }
  if(c > 0) {
    i++;
  }
  printf("%d", i);
  return 0;
}
