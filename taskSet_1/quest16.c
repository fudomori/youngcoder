/* программа для вычисления объема цилиндра и конуса, которые имеют одинаковую высоту h и одинаковый радиус основания r */

#include <stdio.h>
#include <math.h>

int main(void) {
  double r, h;
  scanf("%lf %lf", &r, &h);
  printf("%.2lf %.2lf", h * M_PI * pow(r, 2), (double) 1 / 3 * h * M_PI * pow(r, 2));

  return 0;
}
