/* Determine the number of the day of the week. We assume that January 1 fell on a Wednesday. */

#include <stdio.h>

int main(void) {
  int k;
  scanf("%d", &k);
  printf("%d", (k+2) % 7); // 2 = 4
  return 0;
}
