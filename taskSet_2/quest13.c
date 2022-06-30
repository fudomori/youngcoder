/* The number of the day of the week must be specified */

#include <stdio.h>

int main(void) {
  int k;
  scanf("%d", &k);
  printf("%d", k % 7); // 12 = 5
  return 0;
}
