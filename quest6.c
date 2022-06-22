#include <stdio.h>
#include <math.h> // подключаем math.h
#include <stdlib.h> // подключаем stdlib.h
#include <time.h> // подключаем stdlib.h

int main (void) {
  srand(time(NULL));
  printf("%d\n", 80 + rand() % (100 - 80 +1)); // [80;100], где min - 80, max - 100
  printf("%d\n", 80 + rand() % (100 - 80 +1)); // [80;100], где min - 80, max - 100
  printf("%d\n", 80 + rand() % (100 - 80 +1)); // [80;100], где min - 80, max - 100
  printf("%d\n", 80 + rand() % (100 - 80 +1)); // [80;100], где min - 80, max - 100
  printf("%d\n", 80 + rand() % (100 - 80 +1)); // [80;100], где min - 80, max - 100

  return 0;
}