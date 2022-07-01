/* Determine if numbers are equal zero */

#include <stdio.h>
#include <math.h> // pow()

int main(void) {
  int x1, x2, x3, x4, x5;
  scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
  printf("%.0f", pow(x1, 2) + pow(x2, 2) + pow(x3, 2) + pow(x4, 2) + pow(x5, 2)); // 0 3 0 2 0 = 13
  return 0;
}
