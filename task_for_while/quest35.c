/* Напишите программу, которая выводит на экран числа от 1 до 100. При этом вместо чисел, кратных трем, программа должна выводить слово «Fizz», а вместо чисел, кратных пяти — слово «Buzz». Если число кратно и 3, и 5, то программа должна выводить слово «FizzBuzz» */

#include <stdio.h>
#define three i % 3 == 0
#define five i % 5 == 0

int main() {
  for (int i = 1; i <= 100; i++) three && five ? printf("FizzBuzz ") : three ? printf("Fizz ") : five ? printf("Buzz ") : printf("%d ", i);
  return 0;
}
