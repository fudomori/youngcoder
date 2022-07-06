/* Программа, моделирующая домофон с ключом */

#include <stdio.h>
#define key 1024

int leadKey(int a1, int a2, int a3, int a4);

int main(void) {
  int a1, a2, a3, a4;
  scanf("%1d %1d %1d %1d", &a1, &a2, &a3, &a4);
  printf(leadKey(a1, a2, a3, a4) == key ? "open" : "close");
  return 0;
}

int leadKey(int a1, int a2, int a3, int a4) {
  return a1*1000 + a2*100 + a3*10 + a4;
}
