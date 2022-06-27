/* Программа, которая выводит младшую цифру целой части и старшую цифру дробной части числа */

#include <stdio.h>

int main(void) {
  int m, n;
  scanf("%d %d", &m, &n);
  
  int mld = m / n % 10; // 23 % 10 = 3
  int std = ((double) m / n - m / n) * 10; // 10.025 - 10 = 0.025 * 10 = 0.25
  // int std = m * 10 / n % 10;

  printf("%d %d", mld, std);
  return 0;
}
