/* Вывести все различные элементы последовательности, упорядоченные по возрастанию. */

#include <stdio.h>

int main() {
  int number;
  scanf("%d", &number);

  int a = -9999;
  int b = 0;
  while (number--) {
    scanf("%d", &b);
    if (a < b) printf("%d ", b);
    a = b;
  }
  return 0;
}
