/* программа, где выводится одно случайное число из промежутка [s;e] */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int s, e;
  scanf("%d %d", &s, &e);
  srand(time(NULL));
  printf("%d", s + rand() % (e - s + 1));
  return 0;
}
