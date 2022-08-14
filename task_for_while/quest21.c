/* По заданному N вывести через пробел все степени числа 2, для которых 2^k <= N */

#include <stdio.h>
#include <math.h>

int main() {
  int value = 0;
  int count = 1;
  scanf("%d", &value);

  while (pow(2, count) <= value) {
    printf("%d ", count);
    count++;
  }

  return 0;
}

/* int main() {
  int value = 0;
  int count = 0;
  scanf("%d", &value);
  while (value /= 2) printf("%d ", ++count);

  return 0;
} */

