/* Допустим, у вас имеется NN хоккеистов. Из них нужно сформировать команду из KK человек. Сколько существует вариантов это сделать? На подобные вопросы существует стандартный ответ -- число сочетаний, которое вычисляется по следующей формуле: */

#include <stdio.h>

int factorial(int a) {
  int fact=1;
  for (int i=1; i<=a; i++) fact*=i;
  return fact;
}
int combin(int n, int k) {
  return factorial(n) / (factorial(k)*factorial(n-k));
}

int main() {
  int n, k; scanf("%d %d", &n, &k);
  printf("%d", combin(n, k));
  return 0;
}
