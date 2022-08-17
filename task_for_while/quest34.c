/* Найти сумму элементов последовательности, расположенных между нулями. */

#include <stdio.h>
#define code 0
#define exit -9999

int main() {
  int value;
  int sum = 0;

  while (scanf("%d", &value) && value != code);
  while (scanf("%d", &value) && value != code) sum += value;
  while (scanf("%d", &value) && value != exit);
  printf("%d ", sum);
  
  return 0;
}
