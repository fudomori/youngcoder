/* Программа, вычисляющая значение e^x двумя способами */

#include <stdio.h>
#include <math.h>

int main(void) {
  double x;
  scanf("%lf", &x);

  double var1 = exp(x);
  double var2 = 1. + x/1. + pow(x, 2)/2. + pow(x, 2)/(2.*3) + pow(x, 2)/(2.*3*4)+ pow(x, 2)/(2.*3*4*5);

  printf("%.6lf\n%.6lf", var1, var2);
  return 0;
}

/* int main ( ) {
    double x, ex = 1, fact = 1 ;
    scanf ( "%lf", &x ) ;
    printf ( "%.6lf\n", exp ( x ) ) ;
    for (int i = 1 ; i <= 5 ; ++i) {
        fact *= i ;
        ex += pow ( x, i ) / fact ;
    }
    printf ( "%.6lf\n", ex ) ;
    return 0 ;
} */