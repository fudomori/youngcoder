/* A program that converts feet and inches to meters and centimeters */

#include <stdio.h>

int main(void) {
  int f, d;
  double convertInches;
  scanf("%d %d", &f, &d);
  convertInches = (f*12+d)*25.4 / 1000;
  printf("%d\'%d\" = %.2lfm.", f, d, convertInches); // 6 2 >> 6'2" = 1.88m.
  return 0;
}
