/* Возрастающая последовательность 2 */

#include <stdio.h>

/* int main() {
  int A, B, count = 1;
  scanf("%d %d", &A, &B);

  while(B != -9999) {
    count++;
    if (B <= A) {
      printf("%d", count);
      return 0;
    }
    A = B;
    scanf("%d", &B);
  }
  printf("0");
  return 0;
} */

/* int main() {
  int i, temp = -9999, count = 1;
  while (scanf("%d", &i) && i != -9999 && i > temp) {
    temp = i;
    count++;
  }
  printf(i == -9999 ? "0" : "%d", count);
  return 0;
}
 */

int main() {
  int A, B;

  for (int i = 1; scanf("%d", &B) && B != -9999; i++) {
    if (B <= A) {
      printf("%d", i);
      return 0;
    }
    A = B;
  }
  printf("0");
  return 0;
}