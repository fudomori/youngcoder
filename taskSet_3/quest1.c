/* Amoeba divides into 2 cells every 3 hours. Determine how many cells there will be after k hours */

#include <stdio.h>
#include <math.h> // pow()

int main(void) {
  int k;
  scanf("%d", &k);
  printf("%.0lf", pow(2, k/3));
  return 0;
}
