/* Вывести элементы двумерного массива (матрицы) на экран. */

#include <stdio.h>

int main(void) {
  int A, B;
  scanf("%d %d", &A, &B);
  int arr[A][B];

  for (int i=0; i<A; i++) {
    for (int j=0; j<B; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  for (int i=0; i<A; i++) {
    for (int j=0; j<B; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
