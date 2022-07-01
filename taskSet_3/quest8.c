/* Comparison of numbers modulo. */

#include <stdio.h>

int main(void) {
  int k, a, b;
  scanf("%d %d %d", &k, &a, &b);
  printf("%d %d", a%k, b%k); // 20 864 910 >> 4 10
  return 0;
}
