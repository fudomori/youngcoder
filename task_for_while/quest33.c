/* Кодограмма */

#include <stdio.h>
#define code 2517
#define exit -9999


int main() {
  int value;

  while (scanf("%d", &value) && value != code);
  while (scanf("%d", &value) && value != exit) printf("%d ", value);
  
  return 0;
}

/* int main() {
  int value, b = 0;
  while (scanf("%d", &value) && value != exit) {
    if (b) printf("%d ", value);
    b += (value == code);
  }

  return 0;
} */