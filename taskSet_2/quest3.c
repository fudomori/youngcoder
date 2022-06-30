/* Calculate difference butween the number of odd and even numbers */

#include <stdio.h>
#include <math.h> // pow()

int defineSign(int x);

int main(void) {
  int x1, x2, x3, x4, x5;
  scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
  printf("%d", defineSign(x1) + defineSign(x2) + defineSign(x3) + defineSign(x4) + defineSign(x5));
  return 0;
}

int defineSign(int x) {
  x = -pow(-1, x); // even = -1, odd = 1
  return x;
}

/* 
int main() {
    long int num, cnt=0;
    while (~scanf("%ld ", &num)) num&1 ? cnt++ : cnt--;
    printf("%ld\n", cnt);
}
*/