/* Определить правильность даты, введенной с клавиатуры. Если введены некорректные данные, то сообщить об этом. */

#include <stdio.h>

int main(void) {
  int day, mounth;
  scanf("%d %d", &day, &mounth);

  if(mounth > 12 || mounth < 1) {
    printf("error");
  }

  if(mounth == 1 || mounth == 3 || mounth == 5 || mounth == 7 || mounth == 8 || mounth == 10 || mounth == 12) {
    printf(day <= 31 && day > 0 ? "correct" : "error");
  }

  if(mounth == 2) {
    printf(day <= 29 && day > 0 ? "correct" : "error");
  }

  if(mounth == 4 || mounth == 6 || mounth == 9 || mounth == 11) {
    printf(day <= 30 && day > 0 ? "correct" : "error");
  }
  return 0;
}
