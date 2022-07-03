/* Проверка на ввод числа 6 */

#include <stdio.h>

int main(void) {  
  printf("Enter the number: "); 
  
  int num = 0;  
  scanf("%d",&num);

  switch (num%3) {
    case 0 : 
      switch (num%2) {
        case 0 : printf("GOOD!\n"); break; // число делиться на 3 и на 2
        case 1 : printf("BAD!\n"); break; // остаток 1
      }
      break;
    case 1 :
    case 2 : printf("BAD!\n"); break; // число 1 или 2
  }

  return 0;
}
