/* Написать функцию int gcd(int x, int y), которая ищет наибольший общий делитель для чисел x и y. */

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
