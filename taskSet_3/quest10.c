/* Caesar's cipher */

#include <stdio.h>
#define ABC_MAX (25+1) // 25+'0'

int main(void) {
  int K, x1, x2, x3, x4;
  scanf("%d %d %d %d %d", &K, &x1, &x2, &x3, &x4);
  // int a=0, b=1, c=2, d=3, e=4, f=5, g=6, h=7, i=8, j=9, k=10, l=11, m=12, n=13, o=14, p=15, q=16, r=17, s=18, t=19, u=20, v=21, w=22, x=23, y=24, z=25; 
  printf("%d %d %d %d", (x1+K)%ABC_MAX, (x2+K)%ABC_MAX, (x3+K)%ABC_MAX, (x4+K)%ABC_MAX);
  return 0;
}
