/* Cyclic shift to the right by a decimal place for a three-digit integer */

#include <stdio.h>

int main(void) {
  int k;
  scanf("%d", &k);
  printf("%d", (k % 10) * 100 + k / 10); // 127 = 712
  return 0;
}
