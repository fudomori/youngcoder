/* Выведите сумму переменных, на которые ссылаются данные указатели. */

#include <stdio.h>

int main(void) {
  int one, two;
  scanf("%d %d", &one, &two);

  int *p_1 = &one;
  int *p_2 = &two;

  printf("%d", *p_2+*p_1);

  return 0;
}
