/* Для заданного числа NN проверить, является ли оно простым */

#include <stdio.h>

int main() {
  int number;
  int count = 0;
  scanf("%d", &number);

  for (int i = 1; i <= number; i++) {
    if (number > 1 && number % i == 0) {
      count++;
    }
  }

  printf("%d", count == 2);
  return 0;
}
