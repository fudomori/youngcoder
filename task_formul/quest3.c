/* Напишите программу, которая будет вычислять и возвращать минимальное из трёх чисел, переданных в неё, при помощи функции min. */

#include <stdio.h>

int min(int a, int b, int c) {
  if (a < b) {
    if (a < c) {
      return a;
    } else {
      return c;
    }
  } else {
    if (b < c) {
      return b;
    } else {
      return c;
    }
  }
}

int main() {
  int a, b, c; scanf("%d %d %d", &a, &b, &c);
  printf("%d", min(a, b, c));
  return 0;
}

/* int min (int a, int b) {
    return a<b?a:b;
}
int main(void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", min(a, min(b, c)));
    return 0;
} */

/* int min(int a, int b, int c){
  if (b<a) a=b;
  if (c<a) a=c;
  return a;
} */