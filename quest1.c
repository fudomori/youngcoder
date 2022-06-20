#include <stdio.h>

int main(void) {
  // printf("%d", sizeof(double)); // узнать размер переменной
  /* int x=5, y=0, z; // z всегда разная
  y = x + z;  */
  int n, a = 2;
  double x = 1.2, pi = 3.14;
  char s = 'k'; 	// сохраняем в s символ k.

  s = pi; // неправильно.
  n = a*pi; // неправильно.
  a = x; // неправильно.
  x = 2+a; // правильно.

  printf("%d - s, преобразовывается в int\n%d - n, преобразовывается в int\n%d - a, преобразовывается в int\n%lf - x, преобразовывается в double", s, n, a, x);
  return 0;
}
