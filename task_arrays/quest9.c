/* В заданном массиве поменять местами наибольший и наименьший элементы. */

#include <stdio.h>

int main(void) {
  int arr_in;
  scanf("%d", &arr_in);
  int arr[arr_in];

  int min = 9999;
  int max = -9999;
  for (int i=0; i<arr_in; ++i) {
    scanf("%d", &arr[i]);  // ввод значений в массив
    min = min < arr[i] ? min : arr[i]; // нахождение min и max
    max = max > arr[i] ? max : arr[i];
  }

  for (int i=0; i<arr_in; ++i) {  // вывод min или max
    if (arr[i] == min) {
      printf("%d ", max);
    } else {
      if (arr[i] == max) {
      printf("%d ", min);
    } else {
      printf("%d ", arr[i]); // вывод остальных значений
    }
    }
  }

  return 0;
}

/*
	for (int i = 0; i < n; i++) scanf("%d", &num[(n / 2 + i) % n]);
  for (int i = 0; i < n; i++) printf("%d ", i < n/2 ? arr[i+n/2] : arr[i-n/2]);
} */

