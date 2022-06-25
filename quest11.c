/* программа, которая вычисляет количество целых чисел, которые можно записать, используя N битов */

#include <stdio.h>
#include <math.h>

int main(void) {
  int n;
  scanf("%d", &n);
  printf("%.0lf\n", pow(2, n)); // 1 вариант
  printf("%d\n", (int)pow(2, n)); // 2 вариант
  printf("%g\n", pow(2, n)); // 3 вариант
  printf("%i\n", 1<<n); // 4 вариант, 1<<n - это 1 * 2^n
  return 0;
}
