/* скрипт для реверса чисел в 3-значном числе */

#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  // 1 выражение - берем остаток от деления на 100 и опять берем остаток от деления на 10 и получаем 3 число
  // 2 выражение - берем остаток от деления на 100 и делим его на 10 и получаем 2 число
  // 3 выражение - делим 3-значное число на 100 и получаем 1 число
  printf("%d%d%d", (a % 100) % 10, (a % 100) / 10, a / 100);

  return 0;
}