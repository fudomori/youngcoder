/* Задача: Получить словесное описание школьных отметок */

#include <stdio.h>
#include <windows.h>

int main(void) {
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  int grade;
  scanf("%d", &grade);

  switch(grade) {
    case 1 : printf("плохо"); break;
    case 2 : printf("неудовлетворительно"); break;
    case 3 : printf("удовлетворительно"); break;
    case 4 : printf("хорошо"); break;
    case 5 : printf("отлично"); break;
  }

  return 0;
}
