/* программа, вычисляющая площадь треугольника по трём сторонам */

#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);

  double p = (a + b + c) / 2; // значение p, по формуле Герона
  printf("%.2lf", sqrt(p * (p - a) * (p - b) * (p - c))); // формула Герона

  return 0;
}
