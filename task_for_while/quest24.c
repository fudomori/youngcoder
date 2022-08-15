/* Вычислить число экспоненту с заданной точностью */

#include <stdio.h>

int main() {
  double e;
  double exp = 1, k = 1, i = 1;
  scanf("%lf", &e);

  while (e<1.0/k) {
    k *= i;
    exp += 1.0/k;
    i++;
  }
  printf("%.8lf", exp);

  return 0;
}
