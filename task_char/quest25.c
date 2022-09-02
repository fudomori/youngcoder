  /* Напишите программу проверки того, что число, записанное в строке, является номером счастливого билетика. Билет называется счастливым, если сумма первых трёх цифр номера билета равняется сумме последних трёх цифр номера билета. */

#include <stdio.h>

int main() {
  char str[100]; fgets(str, 100, stdin);

  int sum1=0;
  int sum2=0;
  for (int i=0; i<3; i++) sum1+=str[i]-48;
  for (int i=3; i<6; i++) sum2+=str[i]-48;

  printf(sum1==sum2 ? "yes" : "no");

  return 0;
}
