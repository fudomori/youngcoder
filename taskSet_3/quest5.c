/* Converting a number from binary to decimal < TMP_MAX */

#include <stdio.h>
#include <math.h> // pow()

int main(void) {
  int b, count, sum = 0;
  scanf("%d", &b);
  for (int i=0; i < TMP_MAX ; i++) {
    count = b % (int) (pow(10, i) * 10) / pow(10, i); // 10^0 = 1 * 10 = b % 10 / 1...
    sum += count * (int) pow(2, i);
  }
  printf("%d\n", sum);
  return 0;
}
