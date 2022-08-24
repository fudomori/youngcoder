/* Произвести циклический сдвиг столбцов квадратной матрицы A[N] на KK позиций вправо.  */

#include <stdio.h>

int main() {
  int value; scanf("%d", &value);

  int arr[10][10];
  for (int i=0; i<value*value; i++) scanf("%d", &arr[i/value][i%value]);

  int moving; scanf("%d", &moving); moving = moving%value;

  int arr_new[10][10];
  for (int i=0; i<value; i++) {
    for (int j=0; j<value; j++) arr_new[i][(j+moving)%value] = arr[i][j];
  }

  for (int i=0; i<value; i++) {
    for (int j=0; j<value; j++) printf("%d ", arr_new[i][j]);
    printf("\n");
  }

/*   for (int i=0; i<value*value; i++) {
    printf(i%value==value-1 ? "%d \n" : "%d ", arr[i/value][(i+value-moving)%value]);
  } */

  return 0;
}
