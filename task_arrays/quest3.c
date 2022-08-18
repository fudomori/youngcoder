/* Вывести сначала чётные элементы массива, а затем нечётные. */

#include <stdio.h>

int main(void) {
  int arr_in;
  scanf("%d", &arr_in);
  int arr[arr_in];

  for (int i=0; i<arr_in; ++i) {
    scanf("%d", &arr[i]);
    if (arr[i] % 2 == 0) printf("%d ", arr[i]);
  }

  for (int i=0; i<arr_in; ++i) {
    if (arr[i] % 2 == 1) printf("%d ", arr[i]);
  }

  return 0;
}

/* int main(void) {
  int n;
  scanf("%d", &n);
  int m[n], *ptr[n];

  for (int i = 0, j = 0; i < n + j; ++i) {
    if (i < n) scanf("%d", m + i);
    else {printf("%d ", *ptr[i - n]); continue;}
    if (m[i] % 2) {ptr[j++] = m + i; continue;} 
    printf("%d ", m[i]);
  }

  return 0;
} */

