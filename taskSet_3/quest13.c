/* Air density */

#include <stdio.h>
#include <math.h> // pow()

int main(void) {
  double p, p0, z;
  int h;
  scanf("%d", &h);
  p0 = 1.29;
  z = 1.25*pow(10, -4);
  p = p0 * pow(2.718, -h*z);
  printf("%.2lf", p); // 800 >> 1.17
  return 0;
}
