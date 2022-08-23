/* Поменять местами столбцы с минимальной и максимальной суммой элементов.  */

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

  int arr_count[valueLine+1][valueColumn];
  for (int j=valueColumn-1, count=0; j>=0; j--, count++) {
    int sum = 0;
    for (int i=0; i<valueLine; i++) sum += arr[i][j];
    arr_count[count][0] = sum;
    printf("%d ", arr_count[count][0]);
  } 

  int min = 9999, max = -9999;
  for (int i=0; i<valueColumn; i++) {
    min = min < arr_count[i][0] ? min : i;
    max = max > arr_count[i][0] ? max : i;
  }
    printf("         %d %d\n", min, max);

  // for (int i=0; i<valueLine; i++) {
  //   for (int j=0; j<valueColumn; j++) {
  //     if (j == min) {
  //       printf("%d ", arr[i][max]);
  //     } else if (j == max) {
  //       printf("%d ", arr[i][min]);
  //     } else {
  //       printf("%d ", arr[i][j]);
  //     }
  //   }
  //   printf("\n");
  // }

  return 0;
}
