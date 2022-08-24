/* Поменять местами столбцы с минимальной и максимальной суммой элементов.  */

#include <stdio.h>

int main() {
  int valueLine, valueColumn;
  scanf("%d %d", &valueLine, &valueColumn);

  int arr[valueLine][valueColumn];
  int arr_count[10] = {0};
  for (int i=0; i<valueLine; i++) {
    for (int j=0; j<valueColumn; j++) {
      scanf("%d", &arr[i][j]);
      arr_count[j] += arr[i][j];
    }
  }

  int min, max;
  min = max = arr_count[0];
  int i_min, i_max;
  i_min = i_max = 0;
  for (int i=-1; ++i<valueColumn;) {
    if (arr_count[i] < min) {
      min = arr_count[i];
      i_min = i;
    }
    if (arr_count[i] > max) {
      max = arr_count[i];
      i_max = i;
    }
  }

  for (int i=0; i<valueLine; i++) {
    for (int j=0; j<valueColumn; j++) {
      if (j == i_min) {
        printf("%d ", arr[i][i_max]);
      } else if (j == i_max) {
        printf("%d ", arr[i][i_min]);
      } else {
        printf("%d ", arr[i][j]);
      }
    }
    printf("\n");
  }

  return 0;
}
