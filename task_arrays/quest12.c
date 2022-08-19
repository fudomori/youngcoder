/* По заданному числу N сформировать матрицу  */

#include <stdio.h>

int main(void) {
  int value;
  scanf("%d", &value);
  int arr[value][value];

  for (int i=0; i<value; i++) {
    for (int j=0; j<value; j++) {
      if (i % 2 == 0) {
        arr[i][j] = j+1;
      } else {
        arr[i][j] = value-j;
      }
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}


/*   for (size_t i = 0; i != n * n; ++i) 
    printf( i % n || !i ? "%d " : "\n%d ", i / n % 2 ? n - i % n : i % n + 1); */
