/* Написать функцию void sort_arr(int arr[], int n, int fl), которая сортирует переданный ей массив по возрастанию или убыванию, в зависимости от значения флага fl: 0 -- от меньшего к большему, 1 -- от большего к меньшему. */

void sort_arr(int arr[], int n, int fl){
  int count=1;
  if (fl) {
    while (n-count>1) {
      for (int i=0; i<n-count; i++) {
        if (arr[i]<arr[i+1]) {
          int temp = arr[i];
          arr[i] = arr[i+1];
          arr[i+1] = temp;
        }
      }
    count++;
    }
  } else {
    while (n-count>1) {
      for (int i=0; i<n-count; i++) {
        if (arr[i]>arr[i+1]) {
          int temp = arr[i];
          arr[i] = arr[i+1];
          arr[i+1] = temp;
        }
      }
    count++;
    }
  }
}
