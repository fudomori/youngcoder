/* Вычислить сумму элементов последовательности, неизвестной длины до цифры 0 */

#include <stdio.h>

int main() {
  int value = 0;
  int count = 0;
  
  while (scanf("%d", &value) && value != 0) {
    count = count + value;
  }
    printf("%d", count);

  return 0;
}
