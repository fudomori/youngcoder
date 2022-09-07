/* Написать функцию void reduce_fraction(int * a, int * b), которая будет сокращать дробь с числителем a и знаменателем b. */

int gcd(int x, int y){
  while (x && y) {
    if (x>y) {
      x = x%y;
    } else {
      y = y%x;
    }
  }
  return x+y;

  /* return b ? gcd(b, a % b) : a; */
  
}

void reduce_fraction(int * a, int * b){
  int temp = gcd(*a, *b);
  *a /= temp;
  *b /= temp;
}
