/* Calculate the concentration of radioactive carbon nuclei in a billion years */

#include <stdio.h>
#include <math.h> // log(), exp()
#define T 5570 // период полураспада для радиоактивного углерода

int main(void) {
  int k;
  scanf("%d", &k);
  double n0 = 75e9; // начальная контрация (1гр. живой клетчатки)
  double l = log(2)/T; 
  double n = n0 * exp(-l*k); 
  printf("%.2lf", n/1e9); // 500 >> 70.48
  return 0;
}
