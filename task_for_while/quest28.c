/* Вывести на экран пирамиду из чисел */

#include <stdio.h>

int main() {
  int value = 0;
  scanf("%d", &value);

  for (int i = 1; i <=value; i++) {
    printf("\n");
    for (int j = 1; j <= i; j++) {
    printf("%d ", j);
    }
  }

  return 0;
}
