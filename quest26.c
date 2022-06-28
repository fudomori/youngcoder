/* Программа, которая выводит Число Непера-Эйлера с 4, 5 и 6 слагаемым */

#include <stdio.h>

int main(void) {
  double e;
  e = 1. + 1./1 + 1./2 + 1./(2*3);
  printf("%.5lf\n", e); // 4 слагаемое
  e = e + 1./(2*3*4);
  printf("%.5lf\n", e); // 5 слагаемое
  e = e + 1./(2*3*4*5);
  printf("%.5lf\n", e); // 6 слагаемое
  return 0;
}

/* int main() {
    double e = 1;
    int fact = 1;

    for (int i = 1; i < 7; i++, fact *= i)
    {
        if (i > 3) {
           printf("%.5lf\n", e);
        }
        e += 1.0 / fact;
    }
    return 0;
} */