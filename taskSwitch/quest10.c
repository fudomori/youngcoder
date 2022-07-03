/* Задание: Напишите программу считающую произведение цифр заданного k-значного числа X */

#include <stdio.h>

int main(void) {
  int digitsNumber, number;
  scanf("%d %d", &digitsNumber, &number);

  switch(digitsNumber) {
    case 1 : printf("%d", number); break;
    case 2 : printf("%d", (number/10) * (number%10)); break;
    case 3 : printf("%d", ((number%1000)/100) * ((number%100)/10) * (number%10)); break;
    case 4 : printf("%d", (number/1000) * ((number%1000)/100) * ((number%100)/10) * (number%10)); break;
    default: printf("ERROR!\n");
  }
  return 0;
}
