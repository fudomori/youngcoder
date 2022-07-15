/* Числа Фибоначчи */

#include <stdio.h>

int main() {
  int fab;
  scanf("%d", &fab);
  int fab0, fab1 = 1, fab2 = 1;
  if (fab >= 3) {
    for (int i = 3; i < fab; i++) {
    fab0 = fab1;
    fab1 = fab2;
    fab2 = fab0 + fab1;}
    printf("%d", fab1 + fab2);
    } else {
    printf("%d", 1);
  }
  return 0;
}
