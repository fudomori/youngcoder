/* Для заданной квадратной матрицы посчитать произведение на главной диагонали и побочной  */

#include <stdio.h>

int main(void) {
  int value;
  scanf("%d", &value);
  int arr[value][value];

  for (int i=0; i<value*value; i++) scanf("%d", &arr[i/value][i%value]);

  int mainDiag = arr[0][0];
  for (int i=1; i<value; i++) mainDiag *= arr[i][i];

  int secDiag = arr[0][value-1];
  for (int i=1, j=value-2; i<value; i++, j--) secDiag *= arr[i][j];

  if (mainDiag>=secDiag) {
    printf("%d %d", mainDiag, secDiag);
  } else {
    printf("%d %d", secDiag, mainDiag);
  }

  return 0;
}
