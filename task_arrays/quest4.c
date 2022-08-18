/* Вывести сначала чётные элементы массива, а затем нечётные. */

#include <stdio.h>

int main(void) {
  int arr_in, count = 0;
  scanf("%d", &arr_in);
  int arr[arr_in];

  for (int i=0; i<arr_in; ++i) scanf("%d", &arr[i]);
  for (int i=0; i<arr_in; ++i) {
    if (arr[arr_in-1] > arr[i]) {
      printf("%d ", arr[i]);
      count++;
    }
  }
  if (count == 0) printf("0");
  return 0;
}
