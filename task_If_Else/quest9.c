/* Написать программу, вычисляющую плату за пользование телефоном для введенного времени разговоров за месяц. */

#include <stdio.h>
#define rateMinutes 500
#define fareCost 350

int main(void) {
  int minut;
  scanf("%d", &minut);
  printf("%d", minut > rateMinutes ? (minut - rateMinutes)*2 + fareCost : fareCost);
  return 0;
}
