/* Программа-калькулятор для действий +, -, *, /. Предусматривает деление на 0 */

#include <stdio.h>

int main(void) {
  int a, b;
  char sign;
  scanf("%d %d %c", &a, &b, &sign);

  switch(sign) {
    case '+' : printf("%.2lf", 1. * a + b); break;
    case '-' : printf("%.2lf", 1. * a - b); break;
    case '*' : printf("%.2lf", 1. * a * b); break;
    case '/' : switch(b) {
                  case 0  : printf("ERROR!"); break;
                  default : printf("%.2lf", 1. * (a / b)); break;
    }
    break;
    default  : printf("ERROR!"); break;
  }

  return 0;
}
