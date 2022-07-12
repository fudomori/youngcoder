/* Написать программу выводящую на экран первые N натуральных чисел. */

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
      printf("%d ", i);
  }
  // for(int i = 0; ++i <= n; printf("%d ", i));
  return 0;
}
