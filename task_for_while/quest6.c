/* Посчитать факториал числа */

#include <stdio.h>

/* int main() {
  int x, fact = 1;
  scanf("%d", &x);

  for(int i = 1; i <= x; i++) {
    fact *= i;
  }
  printf("%d", fact);
  return 0;
} */

int main() {
  int x, fact = 1;
  scanf("%d", &x);
  for(; x > 1; fact *= x--);
  printf("%d", fact);
  return 0; 
}
