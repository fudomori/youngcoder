/* Программа, которая вычисляет на сколько байт коммерсанты обманывают потребителя при покупке им USB-флешки на KK - гигабайт */

#include <stdio.h>
#include <math.h>

int main(void) {
  int k;
  scanf("%d", &k);
  long long g = ( k*pow(2, 30)) - (k*pow(10, 9));
  printf("%lld", g);
  return 0;
}
