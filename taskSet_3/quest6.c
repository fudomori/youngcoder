/* Program for converting a number from a number system with base k to a number system with base 10 */

#include <stdio.h>
#include <math.h> // pow()

int convertBinary(int b, int k);

int main(void) {
  int k, b;
  scanf("%d %d", &k, &b);
  printf("%d", convertBinary(k, b)); // 2 1001 = 9
  return 0;
}

int convertBinary(int k, int b) {
  int numberDigit;
  int sum = 0;
  for (int i=0; i < TMP_MAX ; i++) {
    numberDigit = b % (int) (pow(10, i) * 10) / pow(10, i); // 10^0 = 1 * 10 = b % 10 / 1...
    // Ищет число с последней цифры
    sum += numberDigit * (int) pow(k, i); // 1*k^0...
  }
  return sum;
}
