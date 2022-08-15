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

/* int main() {
  int value = 0;
  scanf("%d", &value);

  if (value > 0) {
    for (int i = value; i>0; i/=10) {
      printf("%d", i%10);
    }
  }

  return 0;
}
*/