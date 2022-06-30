/* Find the number of seconds that have passed since the beginning of the last minute */

#include <stdio.h>

int main(void) {
  int k;
  scanf("%d", &k);
  printf("%d", k % 3600 % 60); // 3292 = 52
  return 0;
}
