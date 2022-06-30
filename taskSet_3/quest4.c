/* program to convert temperature from degrees Fahrenheit to degrees Celsius */

#include <stdio.h>

int main(void) {
  int f;
  scanf("%d", &f);
  printf("%.2lf", (f - 32) / 1.8); // 80 = 26.67
  return 0;
}
