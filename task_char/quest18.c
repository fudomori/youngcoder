  /* Дана строка. Найти в ней слова, которые начинаются и оканчиваются одной и той же буквой. Слова разделяются пробелами. */

#include <stdio.h>
// #include <string.h>

int main() {
  char str[100];
  fgets(str, 100, stdin);

  char str2[100];
  int i=0, j=0;
  while (str[i]!='\0') {
    str2[j] = str[i];
    if (str[i]==' ' || str[i]=='\n') {
      if (str2[0] == str[i-1]) {
        for (int k=0; k<=j; k++) printf("%c", str2[k]);
        j=0;
      }
      j=-1;
    }
    i++, j++;
  }


/*   char word[50], c;
  while (2 == scanf("%s%c", word, &c)) {
    if (word[0] == word[strlen(word) - 1]) printf("%s ", word);
    if (c == 10) break;
  } */


/*     char s[100];
    while (scanf("%s", s) != EOF) 
    if (s[strlen(s) - 1] == s[0] ) printf("%s ", s); */

/*   while (scanf("%s", s) != -1) {
		for (i = 0; s[i] != 0; i++);
		if (s[0] == s[i-1])
			printf("%s ", s);
	} */

  return 0;
}
