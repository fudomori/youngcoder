/* Programm, determining is the number - odd or even + number minus (not change) */

#include <stdio.h>
#include <math.h> // pow()

int main(void) {
  int k;
  scanf("%d", &k);
  k = pow(-1, k); // even = 1, odd = -1
  printf("%d", k);
  return 0;
}
