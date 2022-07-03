/* Программа-калькулятор для действий +, -, *, /. */

#include <stdio.h>
#include <windows.h> // для функций SetConsoleOutputCP и SetConsoleCP

int main(void) {
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

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
