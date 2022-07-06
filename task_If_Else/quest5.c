/* Написать программу проверяющую, является ли правильной дробь A\B */

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf(a >= b ? "no" : "yes");

/*   (a>=b) && printf("no");
  (a<b) && printf("yes"); */
  return 0;
}
