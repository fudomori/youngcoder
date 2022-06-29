/* скрипт для высчета цифр, выводящихся через функцию rand() */

#include <stdio.h>
#include <stdlib.h> // подключаем stdlib.h
#include <time.h> // подключаем stdlib.h

int main (void) {
  srand(time(NULL));
  int random_0, random_1; // переменные для счета 0 и 1
  for(int i = 0; i <= 10000; i++) {
  int random = 0 + rand() % (1 - 0 + 1); // [0;1], где min - 0, max - 0 + 1

    if (random == 0) { 
      random_0++;
    }

    if (random == 1) {
      random_1++;
    }
  }

  printf("%d %d", random_0, random_1); // количество выведенных 0 и 1, всегда числа будут раномерно распределяться
  return 0;
}
