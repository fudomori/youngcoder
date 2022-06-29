/* скрипт для правильного вывода резуьтата через деление */

#include <stdio.h>

int main(void) {
  int a=7, b=2;
  float res;

  res = a/(double)b; // преобразуем одну из перменных в тип (double) только в выражении, для правильного вывода результата
  printf("%d / %d = %f\n", a, b, res);

  return 0;
}
