#include <stdio.h>

int main(void) {
  
  // Создание и инициализация строки
  char str1[10] = {'Y','o','n','g','C','o','d','e','r','\0'};
  char str2[10] = "Hello!";
  char str3[] = "Hello!";

  // Вывод строк
  fputs(str1, stdout); // нет вшитого \n
  printf("%s\n",str2);
  puts(str3); // есть вшитый /n

  // Ввод строк
  char str[20];
  gets(str); 
  puts(str);

  return 0;
}
