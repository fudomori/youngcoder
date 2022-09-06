/* Написать функцию void minmax(int * x, int * y), записывающую в переменную x минимальное из значений x и y, а в переменную y -- максимальное из этих значений. */

void minmax(int * x, int * y){
  if (*x > *y) {
    *y += *x;
    *x = *y - *x;
    *y -= *x;
  }
}
