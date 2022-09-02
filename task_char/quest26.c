  /* Написать программу, проверяющую, можно ли из букв, входящих в первую строку, составить вторую строку. (буквы можно использовать не более одного раза и можно переставлять) */

#include <stdio.h>

int main() {
  char str1[100]; char str2[100];
  scanf("%s\n%s", str1, str2);

  for (int i=0; str2[i]; i++) {
    int count=0;
    for (int j=0; str1[j]; j++) {
      if (str2[i] == str1[j]) {
        str1[j]=1;
        str2[i]=0;
        count++;
        continue;
      }
    }
    if (count==0) {puts("no"); return 0;}
  }
  puts("yes");

  return 0;
}

/* #include <stdio.h>

int main() {
char c,s[27]={};

while((c=getchar())!=10) s[c-97]++;
while((c=getchar())!=10 && --s[c-97]!=-1);  
printf( c==10 ? "yes" : "no" );
   return 0;
} */