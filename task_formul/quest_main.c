#include <stdio.h>

int max_num(int, int);

int main(void) {
  int x =0, y = 0;
  int  m = 0;

  scanf("%d %d", &x, &y);

  m = max_num(x,y);

  printf("max(%d,%d) = %d\n",x,y,m);

  return 0;
}

int max_num(int a, int b){
  int max = b;
  if (a > b) 
    max = a;

  return max;
}
