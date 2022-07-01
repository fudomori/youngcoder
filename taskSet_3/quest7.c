/*  A program that reads two natural numbers and then determines if the first is a multiple of the second */

#include <stdio.h>

int main(void) {
  int n, m;
  scanf("%d %d", &n, &m);
  printf("%d", n % m); // 6 2 >> 0
  return 0;
}
