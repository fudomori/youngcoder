/* Переставить элементы массива в обратном порядке */

#include <stdio.h>

int main(void){
  int arr[100] = {0};
  int arr_in;
  scanf("%d", &arr_in);

  for (int i = 1; i <= arr_in; i++) scanf("%d", &arr[i]);
  for (int i = arr_in; i >= 1; i--) printf("%d ", arr[i]);

  return 0;
}

/* int main(void){
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; scanf("%d", arr + i++));
  for (int i = n-1; i >= 0; printf("%d ", (i--)[arr]));

  return 0;
} */