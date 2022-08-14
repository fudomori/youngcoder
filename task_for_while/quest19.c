/* По данном числу N определить, является ли оно степенью числа 2. */

#include <stdio.h>
#include <math.h>

/* int main() {
  int value = 0;
  scanf("%d", &value);

  if (value>1) printf(value%2 == 0 ? "YES" : "NO");
  if (value==1) printf("YES");
  if (value==0) printf("NO");
  return 0;
} */

/* int main() {
  int value = 0;
  scanf("%d", &value);
  printf(log2(value) - (int) log2(value) == 0 ? "YES" : "NO");

  return 0;
} */

int main() {
  int value = 0;
  int count = 1;
  scanf("%d", &value);

  while (count < value) {
    count*=2;
  }
  printf(count == value ? "YES" : "NO");

  return 0;
}
