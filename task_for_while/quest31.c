/* Возрастающая последовательность */

#include <stdio.h>

int main() {
  int A, B;
  scanf("%d %d", &A, &B);

  while(B != -9999) {
    if (B <= A) {
      printf("NO");
      return 0;
    }
    A = B;
    scanf("%d", &B);
  }
  printf("YES");
  return 0;
}

/* int main() {
  int i, temp = -9999;
  while (scanf("%d", &i) && i != -9999 && i > temp) temp = i;
  printf(i == -9999 ? "YES" : "NO");} */
