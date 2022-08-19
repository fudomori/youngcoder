/* Для заданной матрицы вывести на экран транспонированную матрицу. */

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
  for (int i=0; i<B; i++) {
    for (int j=0; j<A; j++) {
      printf("%d ", arr[j][i]);
    }
    printf("\n");
  }

  return 0;
}
