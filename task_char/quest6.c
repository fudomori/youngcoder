/* Вывести на экран KK символ латинского алфавита в верхнем и нижнем регистре. */

#include <stdio.h>
// #include <ctype.h>

int main() {
  int value;
  scanf("%d", &value);
  printf("%c%c", value+64, value+96);
  // printf("%c%c", (value+96) ^ ' ', value+96);
  // printf("%c%c", (value+96) & ~' ', value+96);
  // printf("%c%c", (value+96) - 0x20, value+96);
  // printf("%c%c", (value+96) & 223, value+96);
  // printf("%c%c", (value+96) & 0xDF, value+96);
  // printf("%c%c", toupper(value+96), value+96);
  return 0;
}
