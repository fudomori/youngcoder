/* Напишите функцию с именем square(n,c), которая выводит на экран квадрат размера n на n, заполненный символами c. */

#include <stdio.h>

void square(int n, char c) {
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      printf("%c", c);
    }
    printf("\n");
  }
}

int main() {
  int n;
  char c;
  scanf("%d %c", &n, &c);
  square(n, c);
  return 0;
}
