#include <stdio.h>

int main(void) {
  char k = 0;

  for(int i = 0; i < 257; i++){
    k = i;
    printf("k = %d\n", k);
  }

  char ch = 97;
  printf("%d = %c\n",ch,ch);
  
  return(0);
}
