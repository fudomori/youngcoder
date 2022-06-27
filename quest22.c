/* Программа, которая находит частное произведений цифр, сооветствующих четным и нечетным разрядам четырехзначного числа */

#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  double multEven = ((a / 1000) * ((a % 100) / 10)); // четные разряды 4-значного числа
  double multOdd = (((a % 1000) / 100) * (a % 10)); // нечетные разряды 4-значного числа
  printf("%.2lf", multEven / multOdd);
  return 0;
}

/* int main() {
    int a;
    scanf("%i", &a);
    int m = 1, n = 1;
    while (a){
        m = a % 10 * m;
        n = a / 10 % 10 * n;
        a = a / 100;
    }
    printf("%.2lf", (double) n / m);
} */
