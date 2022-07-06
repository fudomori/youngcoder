/* Написать программу, которая анализирует данные о возрасте и относит человека к одной из четырех групп */

#include <stdio.h>
#include <windows.h> // для функций SetConsoleOutputCP и SetConsoleCP

int main(void) {
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  int age;
  scanf("%d", &age);
  // printf(a <= 6 ? "дошкольник" : a <= 18 ? "школьник" : a <= 59 ? "рабочий" : "пенсионер");

  if(age <= 6) {
    printf("дошкольник");
  } else {
    if (age >= 7 && age <= 18) {
    printf("школьник");
    } else {
      if (age >= 19 && age <= 59) {
      printf("рабочий");
      } else {
        printf("пенсионер");
      }
    }
  }
  return 0;
}

/* 
int main() {
    char* cats[] = {"дошкольник\0","школьник\0","рабочий\0","пенсионер\0"}; // =^_^=
    int age;
    scanf("%i", &age);
    puts(cats[(age > 6) + (age > 18) + (age > 59)]);
}
*/