#include <stdio.h>

int main() {
  int value = 0;

  while (scanf("%d", &value) && value != -9999) {
  printf("%d ", value);
  }

  return 0;
}
