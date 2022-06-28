/* Программа, которая вычисляет каков должен быть радиус плоского диска для различных планет и длительность перелёта самолёта ИЛ-96 из одной крайней точки этого диска в другую */

#include <stdio.h>
#include <math.h>

int main(void) {
  int x;
  int radiusDisc, sumHours;
  scanf("%d", &x);
  /* 
  sCircle = M_PI * X^2;
  sSphere = 4 * M_PI * x^2; 
  sCircle = sSphere
  X^2 = (4*M_PI*x^2) / (M_PI) >> 4*x^2
  X = sqrt(4*x^2) >> 2x
  */
    radiusDisc = 2*x;
  /* 
   t = S/V = (x*2*2)/900
  */
    sumHours = x*4/900;
  printf("%d %d", radiusDisc, sumHours);
  return 0;
}
