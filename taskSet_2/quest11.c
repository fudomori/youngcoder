/* Get the number of the current week in the year. Let's say January 1st was Monday */

#include <stdio.h>

int main(void) {
  int k;
  scanf("%d", &k);
  printf("%d", (k-1)/7 + 1); // 243 = 35
  return 0;
}

/* 
Формула, которая позволяет округлять частное от деления двух целых чисел до большего целого
a/b = (a + b - 1)/b
как альтернатива функции ceil, возврощающей результат типа double
*/