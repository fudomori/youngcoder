/* 
Рандомайзер (свой)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  // max number
  int max = 0;

  do {
    printf("Enter MAX number:\n");
    scanf("%d", &max);
    if (max <= 1) {
      printf("Error! Try again...\n");
    }
  } while (max <= 1);

  // command
  srand(time(NULL));
  int command;
  int value = 1;

  do {
  printf("Input START-   1\n");
  printf("Input EXIT -   2\n");
  scanf("%d", &command);

  if (command == 1) {
    printf("\nResult: %d\n\n", value + rand() % max);
  } else {
    printf("\nGood Bye!\n\n");
  }
  } while (command == 1);

  return 0;
}
