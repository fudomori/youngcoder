/* Найти среднее арифметическое элементов массива. */

#include <stdio.h>

int main(void) {
  int arr_in;
  double sum = 0;
  scanf("%d", &arr_in);
  int arr[arr_in];
  // ввод значений в массив
  for (int i=0; i<arr_in; ++i) scanf("%d", &arr[i]);
  // высчитывание среднего ариф.
  for (int i=0; i<arr_in; ++i) {
    sum += arr[i];
  }
  printf("%.2lf", sum / arr_in);
  return 0;
} 
