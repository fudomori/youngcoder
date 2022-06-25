/* программа для вычисления площади одной грани, площади полной поверхности и объема этого куба, через длину ребра куба */

#include <stdio.h>
#include <math.h>

int main(void) {
  int x;
  scanf("%d", &x);
  printf("%.0lf %.0lf %.0lf", pow(x, 2), 6 * pow(x, 2), pow(x, 3));

  return 0;
}
