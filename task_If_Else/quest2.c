/* Необходимо указать квадрант, в котором расположено число на оси [x;y] */

#include <stdio.h>

int main(void) {
  double x, y;
  scanf("%lf %lf", &x, &y);
  printf("%.0lf", 1.*(x>0 && y>0) + 2.*(x<0 && y>0) + 3.*(x<0 && y<0) + 4.*(x>0 && y<0));
  return 0;
}
