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

  int arr_new[valueLine][valueColumn];
  for (int j=valueColumn-1, count = 0; j>=0; j--, count++) {
    int sum = 0;
    for (int i=0; i<valueLine; i++) sum += arr[i][j];
    arr_new[count][j] = sum;
  }

  for (int i=0; i<valueLine-1; i++) {
    if (arr_new[i][valueColumn-1-i] > arr_new[i+1][valueColumn-1-i])
      for (int j=0; j<valueLine; j++)
      printf("%d \n", arr[j][valueColumn-1-i]);
  }

  return 0;
}
