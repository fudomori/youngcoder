/* программа, которая по значениям внутреннего и внешнего радиусов кольца вычисляет его ширину и площадь.
хотел потренироваться с отдельными объявленными функциями */

#include <stdio.h>
#include <math.h>

int widthRing(int radiusIn, int radiusOut);
double squareRing(int radiusOut, int radiusIn);

int main(void) {
  int radiusIn, radiusOut;
  scanf("%d %d", &radiusIn, &radiusOut);
  printf("%d %.2lf", widthRing(radiusIn, radiusOut), squareRing(radiusOut, radiusIn));
  return 0;
}

int widthRing(int radiusIn, int radiusOut) {
  int widthR = radiusOut - radiusIn;
  return widthR;
}

double squareRing(int radiusOut, int radiusIn) {
  double pi = 3.14159265358979323846;
  double squareR = pi * (pow(radiusOut, 2) - pow(radiusIn, 2)); 
  squareR = squareR * 100; // переводим число из квадр. км в Га
  return squareR;
}
