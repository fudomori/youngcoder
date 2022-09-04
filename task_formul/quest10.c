/* Переделайте функцию, написанную в прошлом уроке, таким образом, чтобы она возвращала число 1, если число K простое, или 0, если число K составное. */

#include <stdio.h>

int is_prime(int number) {
  int count=0;
  for (int i=2; i<number/2; i++) {
    if (number%i==0) count++;
  }
  return count ? 0 : 1;
}

int main() {
  int number;
  scanf("%d", &number);
  printf("%d", is_prime(number));
  return 0;
}

/* int is_prime(int k){
    for(int i = 2; i<=k/2; i++)
      if(k%i==0) return 0;
    return 1;
} */