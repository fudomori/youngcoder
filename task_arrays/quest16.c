/* Для заданной матрицы посчитать сумму элементов каждого столбца.  */

#include <stdio.h>

int main() {
  int valueLine, valueColumn;
  scanf("%d %d", &valueLine, &valueColumn);
  int arr[valueLine][valueColumn];

  for (int i=0; i<valueLine; i++) {
    for (int j=0; j<valueColumn; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  for (int j=valueColumn-1; j>=0; j--) {
    int sum = 0;
    for (int i=0; i<valueLine; i++) sum += arr[i][j];
    printf("%d ", sum);
  }

  return 0;
}

/* 
int main() {
    int n, m, a;
    scanf("%d%d", &n, &m);
    int arr[m];
    for(int i = -1; ++i < m;) arr[i] = 0;
    for(int i = -1; ++i < n * m;)
    {
        scanf("%d", &a);
        arr[i % m] += a;
    }
    for(int i = m; --i > -1;) printf("%d ", arr[i]);
} */

