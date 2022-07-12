/* Написать программу выводящую на экран все натуральные числа из промежутка [K, M] */

#include <stdio.h>

int main() {
  int min, max;
  scanf("%d %d", &min, &max);
  if (min <= 0) min = 1;
  for(int i = min; i <= max; i++) {
      printf("%d ", i);
  }
  // for(int i = k > 1 ? k : 1; i <= m; printf("%d ", i++));
  return 0;
}
