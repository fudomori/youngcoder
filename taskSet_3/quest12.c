/* A program that decrypts a 4-digit number */

#include <stdio.h>

int main(void) {
  int y;
  scanf("%d", &y);
  int y1 = (y/1000+10-7)%10;
  int y2 = (y%1000/100+10-7)%10;
  int y3 = (y%100/10+10-7)%10;
  int y4 = (y%10+10-7)%10;
  printf("%d%d%d%d", y3, y4, y1, y2); // 2591 >> 2458
  return 0;
}
