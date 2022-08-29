/* Напишите программу, которая по описанию пути к кладу определяет точные координаты клада, считая, что начало координат находится в начале пути, ось OX направлена на восток, ось OY – на север. */

#include <stdio.h>

int main() {
  int value;
  scanf("%d", &value); // кол-во действий в программе
  char dir; // направление
  int step; // кол-во шагов

  int x=0, y=0;
  for (int i=0; i<value; i++) {
    scanf("\n%c%*s%d", &dir, &step);
    if (dir == 'N') y+=step;
    if (dir == 'S') y-=step;
    if (dir == 'E') x+=step;
    if (dir == 'W') x-=step;
  }
  printf("%d %d", x, y);

  return 0;
}
