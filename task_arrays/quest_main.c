#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int arr[100] = {0};
  
  for(int i = 0; i < 100; i = i + 1){
    arr[i] = 2*i;
  }

  for(int i = 0; i < 100; i = i + 1){
    printf("%d\t",arr[i]);
  }

  return(0);
}

int main(void) {  
  srand(time(NULL));
  int count[3] = {0};
  int rand_number;
  
  for (int i = 0; i < 1000000; i = i + 1){
    rand_number = rand()%3;
    count[rand_number] = count[rand_number] + 1;
  }

  for(int i = 0; i < 3; i = i + 1){
    printf("%d - %d\n", i, count[i]);
  }

  return 0;
}
