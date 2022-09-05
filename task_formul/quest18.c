/* В программе объявлены три целочисленные переменные и указатели на них. Используя лишь указатели, найти среди переменных переменную с минимальным значением. Затем остальным переменным присвоить это значение. */

#include <stdio.h>

int main(void) {
  int a=0, b=0, c=0;
  scanf("%d %d %d", &a, &b, &c);

  int * p_a = &a;
  int * p_b = &b;
  int * p_c = &c;

  if (*p_a < *p_b) {
    if (*p_a < *p_c) *p_c = *p_b = *p_a;
    if (*p_a >= *p_c) *p_a = *p_b = *p_c;
  } else {
    if (*p_b < *p_c) *p_c = *p_a = *p_b;
    if (*p_b >= *p_c) *p_b = *p_a = *p_c;
  }
    
  printf("%d %d %d",a,b,c);

  return 0;
}

/* if (*p_a > *p_b) *p_a = *p_b;
if (*p_a > *p_c) *p_a = *p_c;
*p_b = *p_c = *p_a; */
