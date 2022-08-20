/* По заданному числу N сформировать матрицу (1234-2123-3213-4321)  */

#include <stdio.h>

int main(void) {
  int value;
  scanf("%d", &value);
  int arr[value][value];

  for (int i=0; i<value; i++) {
    for (int j=0; j<value; j++) {
        arr[i][j] = arr[j][i] = 1+(i-j);
    }
  }
  for (int i=0; i<value; i++) {
    for (int j=0; j<value; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}

/* int main() {
    int a[10][10] = {0};
    int N, r;

    scanf("%d", &N);
    for (int i = 0; i < N; ++i) { // для каждого столбца
        for (int j = 0; j < N; ++j) { // Для каждой строки
            if (i == j)
                r = 0;
            else if (i < j)
                r = j - i;
            else if (i > j)
                r = i - j;
            a[i][j] = 1 + r;
        }
    }
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
} */

/* int main() {
  int N;
  scanf("%d", &N);
    
  for (int i = 0; i++ < N; printf("\n"))
    for (int j = 0; j++ < N; printf("%d ", abs(i - j) + 1));
} */
