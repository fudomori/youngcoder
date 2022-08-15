/* Наименьшее число d, которое делится на оба заданных числа без остатка */

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  int d = a*b;
  while (a!=0 && b!=0) {
    if (a > b) {
      a = a%b;
    } else {
      b = b%a;
    }
  }
  d = d/(a+b);
  printf("%d", d);

  return 0;
}
