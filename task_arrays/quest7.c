/* Разделить массив на две части, поместив в первую элементы, большие среднего арифметического массива, а во вторую — меньшие. */

#include <stdio.h>

int main(void) {
  int arr_in;
  scanf("%d", &arr_in);
  int arr[arr_in];

  double sum = 0;
  for (int i=0; i<arr_in; ++i) scanf("%d", &arr[i]);  // ввод значений в массив

  for (int i=0; i<arr_in; ++i) sum += arr[i];   // высчитывание среднего ариф. 
  sum /= arr_in;

  int count = 0;
  int arr_new[arr_in];
  for (int i=0; i<arr_in; ++i) {  // ввод значений, которые больше среднего ариф. в новый массив
    if (arr[i] > sum) {
      arr_new[count] = arr[i];
      ++count;
    }
  }

  for (int i=0; i<arr_in; ++i) {   // ввод значений, которые меньше среднего ариф. в новый массив
    if (arr[i] <= sum) {
      arr_new[count] = arr[i];
      ++count;
    }
    printf("%d ", arr_new[i]);
  }

  return 0;
}

/* int main() {
    int n, m[100], sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)  scanf("%d", &m[i]), sum += m[i];  
    
    int average = sum/n, cnt, k = 0;
    // swaping algorithm - модификация алгоритма пузырьковой сортировки
    do {  
        cnt = 0; ++k; 
        for (int i = 0; i < n-k; ++i)
            if ( m[i] <= average  && m[i+1] > average) {
                int tmp = m[i]; m[i] = m[i+1]; m[i+1] = tmp;  // swap
                ++cnt;
            }        
    }  while(cnt);
    for (int i = 0; i < n; ++i)  printf("%d ", m[i]); 
    return 0;
} */