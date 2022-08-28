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
  char str[10];
  // gets(str);
  fgets(str, 10, stdin);
  // fflush(stdin); // очистить поток ввода
  puts(str);

  int h = 99;
  printf("do %d\n", h);
  scanf("%d",&h);
  printf("posle %d\n", h);

  return 0;
}
