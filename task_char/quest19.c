  /* Шифровка. В строке слова зашифрованы — каждое из них записано наоборот. Написать программу, расшифровывающую строку. */

#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  fgets(str, 100, stdin);

  char str2[100];
  int i=0, j=0;
  while (str[i]!='\0') {
    str2[j] = str[i];
    if (str[i]==' ') {
      for (int k=j-1; k>=0; k--) printf("%c", str2[k]);
      j=-1;
      printf(" ");
    }
    if (str[i]=='\n') {
      for (int k=j-1; k>=0; k--) printf("%c", str2[k]);
      j=-1;
    }
    i++, j++;
  }


/*   char arr[100]= {0};
  while (scanf("%s", arr)==1) {
    for(int i=strlen(arr)-1; i>=0; i--) printf("%c", arr[i]);
    printf(" ");
  } */


  /*     char s[50];
	int i;
	while (scanf("%s", s) != -1) {
		for (i = 0; s[i] != 0; i++);
        for (i = i-1; i >= 0; i--)
            putchar(s[i]);
        putchar(' ');
	} */

  return 0;
}
