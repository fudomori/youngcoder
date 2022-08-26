/* Написать программу для подсчёта различных символов, которые поступают на вход. */

#include <stdio.h>

int main() {

  int value; scanf("%d", &value);
  char arr[value];

  for (int i=0; i<value; i++) {
    scanf(" %c", &arr[i]);
  }

  for (int k=0; k<26; k++) {
    int count=0;
    for (int i=0; i<value; i++) {
      if (arr[i]=='A'+k || arr[i]=='a'+k) count++;
    }
    printf("%d ", count);
  }

  return 0;
}


/* int main() {
    int n;
    char c;
    scanf("%d ", &n);
    int a[26] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%c ", &c);
        a[c%65%32] += 1;
    }
    for (int i = 0; i < 26; i ++) 
        printf("%d ", a[i]);
} */
