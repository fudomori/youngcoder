/* Системы счисления. Дана строка, изображающая двоичную запись целого положительного числа. Вывести строку, изображающую десятичную запись этого же числа. */

#include <stdio.h>

int main() {
  char str[100];
  fgets(str, 100, stdin);

  int i=0, sum=0;
  while (str[i]!='\n') i++;
  for (int j=i-1; j>=0; j--) {
    sum += (str[j]%48); // or %'0' or %-48
    sum*=2;
  }
  printf("%d", sum);

/*   int sum=0, i=0, step=1;
  while (str[i]!='\n') i++;
  for (int j=i-1; j>=0; j--) {
    sum += (str[j]%48)*step; // or %'0' or %-48
    step*=2;
  }
  printf("%d", sum); */


/*   int i = -1, s = 0;
  while (scanf("%1d", &i) == 1) {
    s *= 2;
    s += i;
  }
  printf("%d", s); */

  /* 	int c, i = 0;
	while((c = getchar()) != '\n')
		i = i * 2 + c - '0';
	printf("%d", i); */

  return 0;
}

