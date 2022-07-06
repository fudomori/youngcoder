/* Составить программу, определяющую, которая из точек находится ближе к началу координат. */

#include <stdio.h>
#include <math.h> // sqrt

int R(int x, int y);

int main(void) {
  int x1, y1, x2, y2;
  scanf("%d %d", &x1, &y1);
  scanf("%d %d", &x2, &y2);
  printf(R(x1, y1) < R(x2, y2) ? "1" : "2"); //
  return 0;
}

int R(int x, int y) {
  return sqrt(pow(x, 2) + pow(y, 2));
}
