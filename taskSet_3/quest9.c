/* A program that rotates a number by k positions. */

#include <stdio.h>

int main(void) {
  int n, k, x;
  scanf("%d %d %d", &n, &k, &x);
  printf("%d\n", (x+k)%n); // (7+4)%10
  printf("%d\n", (n+k%n+x)%n); // (10+4%10+7)%10
  return 0;
}
