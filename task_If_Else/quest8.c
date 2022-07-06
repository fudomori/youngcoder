/* Программа, моделирующая работу механического замка с зажиманием цифр в любой последовательности */

#include <stdio.h>
#define key1 2
#define key2 4
#define key3 8

int inputKey(int b1, int b2, int b3);

int main(void) {
  int b1, b2, b3;
  scanf("%1d %1d %1d", &b1, &b2, &b3);
  printf(inputKey(b1, b2, b3) == 3 ? "open" : "close");
  return 0;
}

int inputKey(int b1, int b2, int b3) {
  int key = 0;
  if (b1 == key1 || b1 == key2 || b1 == key3) {
    key++;
  }
  if (b2 == key1 || b2 == key2 || b2 == key3) {
    key++;
  }
  if (b3 == key1 || b3 == key2 || b3 == key3) {
    key++;
  }
  return key;
}
