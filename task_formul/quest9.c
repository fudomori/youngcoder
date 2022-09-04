/* Написать функцию выводящую все делители числа K, поступившего на вход. */

#include <stdio.h>

void dividers(int number) {
  for (int i=1; i<=number; i++) {
    if (number%i==0) printf("%d ", i);
  }
}

int main() {
  int number;
  scanf("%d", &number);
  dividers(number);
  return 0;
}

/* void factors(int number){
  if (number == 1) { 
    printf("%d", number); return 0;
  } else {
    printf("1");
  }
  for(int i = 2; i<=number/2; i++) {
    if(number%i==0) {
        printf("%d ",i);
    }
  }
  printf("%d", number);
} */