/* Задача: Гадание на ромашке */

#include <stdio.h>
#include <windows.h>

int main(void) {
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  int sum;
  scanf("%d", &sum);

  switch(sum%2) {
    case 0 : printf("Не любит"); break;
    case 1 : printf("Любит"); break;
  }

  return 0;
}
