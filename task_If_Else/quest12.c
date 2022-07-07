/* Написать программу, моделирующую работу лифта, находящегося на первом этаже. */

#include <stdio.h>

int main(void) {
  int floor1, floor2, floor3;
  scanf("%d %d %d", &floor1, &floor2, &floor3);
  int c = floor1 < floor2 && floor1 < floor3 ? floor1 : floor2 < floor3 ? floor2 : floor3;
  printf("%d ", c);

  if (c == floor1) {
    if (floor2 < floor3) {
      c = floor2;
      printf("%d ", c);
      c = floor3;
      printf("%d", c);
    } else {
      c = floor3;
      printf("%d ", c);
      c = floor2;
      printf("%d", c);
    }
  } else {
  if (c == floor2) {
    if (floor1 < floor3) {
      c = floor1;
      printf("%d ", c);
      c = floor3;
      printf("%d", c);
    } else {
      c = floor3;
      printf("%d ", c);
      c = floor1;
      printf("%d", c);
    }
  } else {
    if (c == floor3) {
    if (floor1 < floor2) {
      c = floor1;
      printf("%d ", c);
      c = floor2;
      printf("%d", c);
    } else {
      c = floor2;
      printf("%d ", c);
      c = floor1;
      printf("%d", c);
    }
  }
  }
}
  return 0;
}
