/* Программа для вывода возраста с правильными окончаниями */

#include <stdio.h>
#include <windows.h> // для функций SetConsoleOutputCP и SetConsoleCP

int main(void) {
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  int k;
  scanf("%d", &k);

  switch(k%10) {
    case 0 : printf("Мне %d лет", k); break;
    case 1 : switch(k%11) {
            case 0 : printf("Мне %d лет", k); break;
            default: printf("Мне %d год", k); break;
            } break;
    case 2 : switch(k%12) {
            case 0 : switch(k/12) {
            case 1 : printf("Мне %d лет", k); break;
            default: printf("Мне %d года", k); break;
            } break;
            default: printf("Мне %d года", k); break;
            } break;
    case 3 : switch(k%13) {
            case 0 : printf("Мне %d лет", k); break;
            default: printf("Мне %d года", k); break;
            } break;
    case 4 : switch(k%14) {
            case 0 : switch(k/14) {
            case 1 : printf("Мне %d лет", k); break;
            default: printf("Мне %d года", k); break;
            } break;
            default: printf("Мне %d года", k); break;
            } break;
    case 5 : printf("Мне %d лет", k); break;
    case 6 : printf("Мне %d лет", k); break;
    case 7 : printf("Мне %d лет", k); break;
    case 8 : printf("Мне %d лет", k); break;
    case 9 : printf("Мне %d лет", k); break;
  }

  return 0;
}
