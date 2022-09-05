/* В программе имеются две целочисленные переменные a и b. Объявите два указателя с именами p_a и p_b, которые ссылаются соответствующие переменные. */

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);

  int *p_a = &a;
  int *p_b = &b;

  printf("%d",*p_a + *p_b);

  return 0;
}
