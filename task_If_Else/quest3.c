/* Модель анализа пожарного датчика в помещении, которая выводит Fire situation при t > 60 */

#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);
  if (t > 60) {
    printf("Fire situation");
  }
  return 0;
}
