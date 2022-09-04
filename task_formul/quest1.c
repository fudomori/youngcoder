/* Напишите функцию с именем sum, которая вычисляет сумму двух, переданных в неё целочисленных аргументов. */

#include <stdio.h>

int sum(int a, int b) {
  return a+b;
}

int main() {
  int a, b; scanf("%d %d", &a, &b);
  printf("%d", sum(a, b));
  return 0;
}
