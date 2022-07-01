/* Programm, determining is the number - odd or even */

#include <stdio.h>
#include <math.h> // pow()

int main(void) {
  int k;
  scanf("%d", &k);
  // printf("%d", k % 2 ? -1 : 1);
  // k = pow(k % 2 * -1, (k+1) % 2 - 1 );
  // printf("%d", (k + 1)%2 - k%2);

  k = pow(-1, k); // even = 1, odd = -1
  printf("%d", k);
  return 0;
}
