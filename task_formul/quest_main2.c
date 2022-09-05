#include <stdio.h>

int main(void) {
  int a = 100;
  int *p_a = &a; // сохраняем в указатель адрес переменной a
  printf("a = %d\n", a); // стандартный способ получить значение переменной a
  printf("a = %d\n", *p_a); // получаем значение переменной a через указатель на неё  
  
  // используя указатель p_a, записываем в переменную a другое значение
  *p_a = 50;
  printf("a =  %d\n", *p_a);
  printf("a = %d\n", a);
  p_a = NULL;
  printf("%p\n", p_a);

  int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  printf("%d\n", *A);
  int *p = A + 4;
  printf("%d\n", p[-1]);
  int *q = A + 7;
  printf("q-p=%lld\n", q-p);

  int n = 10;
  int *pn = &n;
  int **ppn = &pn;
  **ppn = 20;
  printf("%d", n);
  return 0;
}

/* int main()
{
    FILE *fp;
    char ch;
 
    fp = fopen(__FILE__,"r");
   
    while (ch != EOF)
    {
        ch = getc(fp);
        putchar(ch);
    }
    
  fclose(fp);
 
    re */