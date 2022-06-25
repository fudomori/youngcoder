/* программа-тест, из задачи С.А. Абрамов, Е.В. Зима "Начало программирования на языке Паскаль" на расставление скобок */

#include <stdio.h>
#include <math.h>

int main(void){
  double a, b, c, d, e, f, h;
  double res;

  scanf("%lf %lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f, &h); 
  res = a/(b*(c/(d*(e/(f*h)))));  // https://ucarecdn.com/cb8f60d6-598f-4406-a84b-d1c62ef0e1d3/
  printf("%.2f", res);

  return 0;
}
