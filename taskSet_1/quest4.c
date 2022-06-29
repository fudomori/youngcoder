/* скрипт для перевода долларов в рубли */

#include <stdio.h>

int main(void) {
  double dollars, kurs, rub;

  scanf("%lf %lf", &dollars, &kurs);
  printf("%.2lf\n", rub = dollars * kurs);

  return 0;
}
