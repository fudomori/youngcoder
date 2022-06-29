/* программа, которая вычисляет площадь треугольника по двум сторонам и углу между ними */

#include <stdio.h>
#include <math.h>

int main(void) {
  double a, b, g;
  double pi = 3.141593;
  scanf("%lf %lf %lf", &a, &b, &g);
  printf("%.2lf", (a * b * sin((g * pi) / 180) / 2)); // переводим градусы в радианы, и считаем по формуле для вычисления площади

  return 0;
}
