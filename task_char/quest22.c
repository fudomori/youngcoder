  /* Определить можно ли из указанных слов составить цепочку для игры в "Города". Т.е. либо первая буква второго слова совпадает с последней буквой первого слова, либо наоборот. Названия городов, как и полагается, записаны с заглавной буквы. */

#include <stdio.h>
#include <string.h>

int main() {
  char str1[100], str2[100];
  scanf("%s\n%s", str1, str2);
  
  if (str1[strlen(str1)-1] == str2[0]+32) {
    printf("yes");
  } else if (str1[0]+32 == str2[strlen(str2)-1]) {
    printf("yes");
  } else {
    printf("no");
  }

  return 0;
}
