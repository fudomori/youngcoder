/* В заданном массиве поменять местами первую и вторую половины */

#include <stdio.h>

int main(void) {
  int arr_in;
  scanf("%d", &arr_in);
  int arr[arr_in];

  for (int i=0; i<arr_in; ++i) scanf("%d", &arr[i]);  // ввод значений в массив

  int arr_new[arr_in];
  for (int i=0; arr_in/2+i < arr_in; ++i) {  // ввод новых значений в новый массив
    arr_new[arr_in/2+i] = arr[i];
    arr_new[i] = arr[arr_in/2+i];
  }

  for (int i=0; i<arr_in; ++i) printf("%d ", arr_new[i]); // вывод нового массива

  return 0;
}

/*
	for (int i = 0; i < n; i++) scanf("%d", &num[(n / 2 + i) % n]);
  for (int i = 0; i < n; i++) printf("%d ", i < n/2 ? arr[i+n/2] : arr[i-n/2]);
} */

