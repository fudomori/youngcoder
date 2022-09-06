/* Написать функцию void swap(int * x, int * y), которая меняет значения переменных местами. */

#include <stdio.h>

void swap(int * a, int * b) {
  *a += *b; *b = *a - *b; *a -= *b;
}

/* void swap(int * a, int * b){
    *a ^= *b ^= *a ^= *b;
}
 */


