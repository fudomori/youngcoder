  /* Удалить часть символьной строки, заключенную в комментарий */

#include <stdio.h>

int main() {
  char str[100];
  fgets(str, 100, stdin);
 
  int status=0;
  int begin=0, end=0;
  for (int i=0; str[i]!='\n'; i++) {
    if (str[i]=='/' && str[i+1]=='*' && str[i+2]!='/') {
      status=1;
      begin=i;
    }
    if (str[i]=='*' && str[i+1]=='/') {
      if (status==1) {
      status=2;
      end=i+1;
      }
    }
  }
  for (int i=0; status==2 && i<begin; i++) printf("%c", str[i]);
  for (int i=end+1; status==2 && str[i]!='\0'; i++) printf("%c", str[i]);
  if (status<2) fputs(str, stdout);

  return 0;
}
