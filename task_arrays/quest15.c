/* Для заданной квадратной матрицы A[N] посчитать величины: сумму элементов, находящихся над главной диагональю и сумму элементов, расположенных под побочной диагональю  */

#include <stdio.h>

int main(void) {
  int value;
  scanf("%d", &value);
  int arr[value][value];

  for (int i=0; i<value*value; i++) scanf("%d", &arr[i/value][i%value]);

  int mainDiag = 0;
  for (int i=0; i<value-1; i++) {
    for (int j=i+1; j<value; j++) mainDiag += arr[i][j];
  }

  int secDiag = 0;
  for (int i=1; i<value; i++) {
    for (int j=value-1; j>value-1-i; j--) secDiag += arr[i][j];
  }

  if (mainDiag<=secDiag) {
    printf("%d %d", mainDiag, secDiag);
  } else {
    printf("%d %d", secDiag, mainDiag);
  }

  return 0;
}
