/* A program that encrypts a 4-digit number */

#include <stdio.h>

int main(void) {
  int x;
  scanf("%d", &x);
  int x1 = (x/1000+7)%10;
  int x2 = (x%1000/100+7)%10;
  int x3 = (x%100/10+7)%10;
  int x4 = (x%10+7)%10;
  printf("%d%d%d%d", x3, x4, x1, x2); // 2458 >> 2591
  return 0;
}
