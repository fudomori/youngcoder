/* Задача: Вычислить номер дня в невисокосном году по заданным числу и месяцу */

#include <stdio.h>

int main(void) {
  int month, day;
  scanf("%d %d", &month, &day);
  // printf("%d\n", (month + month / 9) / 2  + 30 * --month - 2 * (month > 1) + day);

  switch(month) {
    case 1 : printf("%d", day); break;
    case 2 : printf("%d", day+31); break;
    case 3 : printf("%d", day+31+28); break;
    case 4 : printf("%d", day+31+28+31); break;
    case 5 : printf("%d", day+31+28+31+30); break;
    case 6 : printf("%d", day+31+28+31+30+31); break;
    case 7 : printf("%d", day+31+28+31+30+31+30); break;
    case 8 : printf("%d", day+31+28+31+30+31+30+31); break;
    case 9 : printf("%d", day+31+28+31+30+31+30+31+31); break;
    case 10: printf("%d", day+31+28+31+30+31+30+31+31+30); break;
    case 11: printf("%d", day+31+28+31+30+31+30+31+31+30+31); break;
    case 12: printf("%d", day+31+28+31+30+31+30+31+31+30+31+30); break;
    default: printf("ERROR!"); break;
  }

  return 0;
}
