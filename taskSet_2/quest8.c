/* Cyclic shift to the left by a decimal place for a three-digit integer */

#include <stdio.h>

int main(void) {
  int k;
  scanf("%d", &k);
  printf("%d", (k % 100) * 10 + k / 100); // 127 = 271
  return 0;
}
