/* Определить является ли массив палиндромом, т.е. первый элемент равен последнему, второй предпоследнему и т.д. */

#include <stdio.h>

int main(void) {
  int arr_in;
  scanf("%d", &arr_in);
  int arr[arr_in];

  for (int i=0; i<arr_in; scanf("%d", &arr[i++]));
  for (int i=0, j=arr_in-1; i < j; i++, j--) {
    if (arr[i] != arr[j]) {
      printf("NO");
      return 0;
    }
  }
  printf("YES");

  return 0;
}

/* int main() {
  int n, array[100] = {0};
  scanf("%d", &n);
  // ввод данных  
  for (int i = 0; i < n; ++i) scanf("%d", &array[i]);
  // проверка массива
  int palindrom = 1;  
  for (int i = 0; i < n/2; ++i) {      
      if (array[i] != array[n - i - 1]) {
          palindrom = 0;
          break;
      }
  }  
  printf(palindrom ? "YES" : "NO");
  return 0;
} */
