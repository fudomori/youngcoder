/* Вывести числа из промежутка [A;B]. При этом число A должно только A раз, число A+1 - A+1 раза, A+2 - A+2 раза и т.д. */

#include <stdio.h>

int main() {
  int min, max;
  scanf("%d %d", &min, &max);
  for (int i = min; i <= max; i++) {
    for (int j = 0; j < i; j++)
      printf("%4d", i);
  }
  return 0; 
}
