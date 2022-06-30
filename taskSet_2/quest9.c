/* Find the number of seconds elapsed since the beginning of the last hour */

#include <stdio.h>

int main(void) {
  int k;
  scanf("%d", &k);
  printf("%d", k % 3600); // 32792 = 392
  return 0;
}
