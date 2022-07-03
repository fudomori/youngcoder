/* Основы switch */

#include <stdio.h>
// #include <locale.h> // для функции setlocale
#include <windows.h> // для функций SetConsoleOutputCP и SetConsoleCP

int main(void) {
  // setlocale(LC_ALL, ""); // чтобы использовать русские символы
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  printf("Выберите правильный вариант ответа. Начало и конец Второй мировой войны:\n");
  printf("  a. 1 сентября 1939 -- 2 сентября 1945\n");
  printf("  b. 1 сентября 1939 -- 9 мая 1945\n");
  printf("  c. 22 июня 1941 -- 9 мая 1945\n");
  printf("  d. 22 июня 1941 -- 2 сентября 1945\n");
  
  printf("Введите ваш вариант ответа: ");
  fflush(stdout); // для вывода в Git Bash всех строк, через printf()
  char answer;
  scanf("%c", &answer);

  switch (answer) {
    case 'a': printf("GOOD!\n"); break;
    case 'b': 
    case 'c': 
    case 'd': printf("BAD!\n"); break; // a, b, c покажут одинаковые результаты, т.к. нет команды break
    default: printf("ERROR!\n"); break;
  }

  return 0;
}
