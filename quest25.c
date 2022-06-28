/* Программа, которая выводит значения факториала от 1 до 10 */

#include <stdio.h>

int main(void) {
  int factNumber = 1;
  int factTotal = 1;

    while( factNumber <= 10) {
    factTotal = factTotal * factNumber;
    printf("%d!%s=%8d\n", factNumber, factNumber == 10 ? "" : " ", factTotal);
    factNumber++;
  }
  return 0;
}