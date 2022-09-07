/* Напишите функцию с именем sequence_multipliers, принимающую один аргумент x, которая определяет можно ли представить x в виде произведения трех последовательных натуральных чисел. Например, 120=4⋅5⋅6 */

#include <stdio.h>

int sequence_multipliers(int x) {
  int i=0;
  while (i++<x) {
    if (i*(i+1)*(i+2) == x) break;
    if (i*(i+1)*(i+2)>x) return -1;
  }
  return x==i-1 ? -1 : i;
}

int main() {
  int x; scanf("%d", &x);
  printf("%d", sequence_multipliers(x));
  return 0;
}
