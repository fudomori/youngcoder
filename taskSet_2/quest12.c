/* Get the number of the current week in the year. We assume that January 1st fell on a Friday */

#include <stdio.h>

int main(void) {
  int k;
  scanf("%d", &k);
  printf("%d", (k+3)/7 + 1 ); // 364 = 53
  return 0;
}
