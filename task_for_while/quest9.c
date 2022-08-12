/* Для заданного числа number вывести все его делители и их количество на экран */

#include <stdio.h>

int main() {
  int number;
  int count = 0;
  scanf("%d", &number);

  for (int i = 1; i <= number; i++) {
    if (number % i == 0) {
      printf("%d ", i);
      count++;
    }
  }
  printf("\n%d", count);
  return 0;
}
