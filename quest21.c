/* Программа, с 5-тью способами реверса 3-значного числа */

#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a); // либо %1d для записи одного числа в отдельную переменную и последующего вывода этих перменных
  int revOne = a % 10;
  int revTwo = a % 100 / 10;
  int revThree = a / 100;
  int reverSum = revOne * 100 + revTwo * 10 + revThree; // для вывода без 0
  // или
  // reverSum = a%10 * 100 + a%100/10 * 10 + a/100;
  printf("%d\n", reverSum);
  printf("%d%d%d\n", a % 10, a % 100 / 10, a / 100); // для вывода с 0
  printf("%d", a - 99 * (a / 100) + 99 * (a % 10)); // магия умножения на 99
  return 0;
}
