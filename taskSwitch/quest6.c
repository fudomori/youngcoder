/* Программа-калькулятор для действий +, -, *, /. */

#include <stdio.h>

int main(void) {

  char sign;
  scanf("%c ", &sign);
  int a, b;
  scanf("%d %d", &a, &b);

  switch(sign) {
    case '+' : printf("%.2lf", 1. * a + b); break;
    case '-' : printf("%.2lf", 1. * a - b); break;
    case '*' : printf("%.2lf", 1. * a * b); break;
    case '/' : printf("%.2lf", 1. * a / b); break;
    default  : printf("ERROR!"); break;
  }

  return 0;
}
