/* Задача: Продолжить сказку */

#include <stdio.h>
#include <windows.h>  // для функций SetConsoleOutputCP и SetConsoleCP

int main(void) {
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  char s;  
  scanf("%c", &s);

  switch (s) {
    case 'l' : printf("коня потеряешь, себя спасёшь!\n"); break;
    case 'f' : printf("и себя и коня потеряешь!\n"); break;
    case 'r' : printf("себя потеряешь, коня спасёшь!\n"); break;
    default  : break;
  }

  return 0;
}
