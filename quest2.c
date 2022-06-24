/* скрипт для вывода предложения посимвольно */

#include <stdio.h>
#include <locale.h> //библиотека с локализацией, чтобы были доступны русские буквы

int main(void) {
  setlocale(LC_ALL, ""); //подключаем локализацию
  char str1[]= "Поздравляю! Вы справились с задачей!";

  for (int i = 0; i < 100; i++)
	printf("%c", str1[i]);

  printf("\n");
  return 0;
}
