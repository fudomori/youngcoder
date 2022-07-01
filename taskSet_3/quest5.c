/* Converting a number from binary to decimal < TMP_MAX */

#include <stdio.h>
#include <math.h> // pow()

int convertBinary(int b);

int main(void) {
  int b;
  scanf("%d", &b);
  printf("%d\n", convertBinary(b)); // 1011 = 11
  return 0;
}

int convertBinary(int b) {
  int numberDigit;
  int sum = 0;
  for (int i=0; i < TMP_MAX ; i++) {
    numberDigit = b % (int) (pow(10, i) * 10) / pow(10, i); // 10^0 = 1 * 10 = b % 10 / 1...
    // Ищет число с последней цифры
    sum += numberDigit * (int) pow(2, i); // 1*2^0...
  }
  return sum;
}
