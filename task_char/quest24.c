  /* Даны две строки. Необходимо сравнить строки между собой без учёта регистра символов. */

#include <stdio.h>
#include <string.h>

int main() {
  char str1[100], str2[100];
  fgets(str1, 100, stdin);
  fgets(str2, 100, stdin);

  int maxStr;
  if (strlen(str1) > strlen(str2)) {
    maxStr=strlen(str1);
  } else {
    maxStr=strlen(str2);
  }

  for (int i=0; i<maxStr; i++) {
    if (str1[i] != str2[i] && (str1[i] - str2[i])%32) {
      printf("no"); return 0;
    }
  }

  printf("yes");

  return 0;
}

/* int main() {
    char str1[100], str2[100];
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);
    
    int r = strcmp(str1, str2);
    
    if ((r == 0)||(r%32 == 0)) {
        printf("yes");
    } else {
        printf("no");   
    }

  return 0;
} */

/* int main() {
    char str1[51], str2[51];
    gets(str1);
    gets(str2);
    for(int i=0; i<51; i++){
        str1[i]&=95;
        str2[i]&=95;
    }
    printf("%s", strcmp(str1, str2)?"no":"yes");
} */

/* int main() {
  char str1[50], str2[50];
  gets(str1); gets(str2);
  for (int i = 0; str1[i]; i++) {
    if (str1[i] != str2[i] && (str1[i] - str2[i])%32) {
      puts("no"); return 0;
    }
  }
  puts("yes");
} */

/* int main(void) {
    char str1[50], str2[50];
    gets(str1); 
    gets(str2);
    printf("%s", strcasecmp(str1, str2) ? "no" : "yes");
} */
