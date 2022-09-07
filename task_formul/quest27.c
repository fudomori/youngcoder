/* Напишите функцию int minmax(int arr[], int n, int fl), которая возвращает максимальный или минимальный элемент массива arr, в зависимости от значения флага fl. 0 -- минимум, 1 -- максимум. */

int minmax(int arr[], int n, int fl){
  int temp=arr[0];
  if (fl) {
    for (int i=1; i<n; i++) {
      if (temp<arr[i]) temp=arr[i];
    }
    return temp;
  } else {
    for (int i=1; i<n; i++) {
      if (temp>arr[i]) temp=arr[i];
    }
    return temp;
  }

  /* if (arr[i] > m == fl) m = arr[i]; */
}
