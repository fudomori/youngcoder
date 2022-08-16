/* Проверка на положительную последовательность */

#include <stdio.h>

int main() {
  int value = 0;
  int count = 1;

  while (scanf("%d", &value)) {
    if (value == -9999) {
      count--;
      if (count == 0) {
        printf("NO");
        break;
      } else {
        printf("YES");
        break;
      }
      }
    if (value < 0) {
      printf("NO");
      break;
    }
    count++;
  }
  return 0;
}

/* int main() {
  int value;
  scanf("%d", &value);

  do {
    if (value <= 0) {
      printf("NO");
      return 0;
    }
    scanf("%d", &value);
  } while(value != -9999);
  printf("YES");
  return 0;
} */
