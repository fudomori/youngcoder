/* Вывести числа из промежутка [A;B]. При этом число A должно выводиться 1 раз, число A+1 - два раза, A+2 - три раза и т.д. */

#include <stdio.h>

int main() {
  int min, max;
  scanf("%d %d", &min, &max);
  for (int i = min; i <= max; i++) {
    for (int j = min; j <= i; j++)
    printf("%5d", i);
  }
  return 0;
}
