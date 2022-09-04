/* Опишите функцию с именем min, которая вычисляет минимальное из двух чисел, переданных в неё. */

#include <stdio.h>

int min(int a, int b) {
  int valueMin = a;
  if (a > b) valueMin = b;
  return valueMin;
}

int main() {
  int a, b; scanf("%d %d", &a, &b);
  printf("%d", min(a, b));
  return 0;
}

/* int min (int a, int b){
  if (a < b)
      return (a);
  return(b);
} */

/* int min (int a, int b){
    return (a < b) * a + (a >= b) * b;
} */