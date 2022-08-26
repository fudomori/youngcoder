/* Написать программу для перевод символов в верхний регистр. */

#include <stdio.h>

int main() {
  char a; scanf("%c", &a);
  // char a=getchar()

  printf("%c\n", a-32);
  printf("%c\n", a -= ' ');
  printf("%c\n", a & ~' ');
  putchar(a);

  // printf("%c", toupper(a));
  // putchar(getchar() & 223);
  // printf("%c", getchar() & 0xDF);
  // putchar(getchar() - 0x20);
  // printf("%c\n", getchar() ^ ' '); // xor символ с пробелом, переключает регистр первого туда и обратно
  // system("bash -c 'read c && echo \"${c^}\"'");

  return 0;
}
