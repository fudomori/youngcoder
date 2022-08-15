/* Напишите программу, которая по данному натуральному N печатает его цифры в обратном порядке. */

#include <stdio.h>

int main() {
  int value = 0;
  scanf("%d", &value);

  while (value) {
    printf("%d", value%10);
    value/=10;
  }

  return 0;
}
