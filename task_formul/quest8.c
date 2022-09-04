/* Форматирование даты */

#include <stdio.h>

void print_date(int day, int mounth, int year, int format) {
  if (format==0) printf("%02d.%02d.%02d", day, mounth, year%100);
  if (format==1) printf("%02d.%02d.%04d", day, mounth, year);
  if (format==2) printf("%04d/%02d/%02d", year, mounth, day);
}

int main() {
  int day, mounth, year, format;
  scanf("%d %d %d %d", &day, &mounth, &year, &format);
  print_date(day, mounth, year, format);
  return 0;
}
