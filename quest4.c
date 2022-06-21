#include <stdio.h>
int main(void){
  int dollars;
  double kurs, rub;
  scanf("%d %lf", &dollars, &kurs);
  printf("%lf\n", rub = dollars * kurs);
  return 0;
}
