/* программа, определяющая сколько целых часов и целых минут будут показывать электронные часы */

#include <stdio.h>

int main(void) {
  int k;
  scanf("%d", &k);
  int hour = k / 60 / 60;
  int minut = k / 60 % 60;
  printf("%2d:%2d", hour, minut);

  return 0;
}
