/* Программа, которая осуществляет инверсию однобитного числа (0 или 1) */

#include <stdio.h>

int main(void) {
  int k;
  scanf("%d", &k);
  // printf("%d", k = 0 ? k : !k);
  // printf("%d", (k + 1) % 2);
  printf("%d", !k);
  return 0;
}
