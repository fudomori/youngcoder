/* Напишите функцию с именем factorial, которая вычисляет факториал числа, переданного ей в качестве аргумента. */

#include <stdio.h>

int factorial(int a) {
  int fact=1;
  for (int i=1; i<=a; i++) fact*=i;
  return fact;
}

int main() {
  int a; scanf("%d", &a);
  printf("%d", factorial(a));
  return 0;
}
