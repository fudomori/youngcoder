/* Написать функцию void sum_digits(int * x), которая заменяет число x на сумму цифр из которых состоит число x. */

#include <stdio.h>

void sum_digits(int * x){
  int sum = 0;
  while (*x>0) {
    sum += *x%10;
    *x/=10;
  }
  *x = sum;
}
