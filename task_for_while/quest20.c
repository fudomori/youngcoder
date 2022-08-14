/* Подсчитать количество цифр в записи натурального числа N */

#include <stdio.h>
#include <math.h>

int main() {
  int value = 0;
  int count = 1;
  scanf("%d", &value);

  while (value /= 10) count++;
  printf("%d", count);

  return 0;
}

/* int main() {
  int i, j;
  scanf("%d%n", &i, &j);
  printf("%d", j);
} */

/* int main() {
    int n;
    scanf("%d", &n);
    printf("%i", 1 + (int) log10(n));
} */
