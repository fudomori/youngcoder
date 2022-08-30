  /* Дана строка. Определить является ли данная строка записью числа (целого или вещественного). Дробная и вещественная части разделены десятичной точкой. */

#include <stdio.h>

int main() {
  char str[100];
  fgets(str, 100, stdin);

  int flagTochka=0, i=0;
  for (; str[i]!='\0'; i++) {
    if (str[i]<'+' || str[i]>'9') {
      printf("error"); return 0;
    }
    if (str[0]== '.' || str[1]== '.') {
      printf("error"); return 0;
    }
    if ((str[i]=='+' || str[i]=='-') && i>0) {
      printf("error"); return 0;
    }
    if (str[i]=='.') flagTochka++;
  }

  if (str[i-1]=='.') {
    printf("error"); return 0;
  }
  if (flagTochka>1) {
    printf("error"); return 0;
  }
  
    printf(flagTochka? "float" : "int");

  return 0;
}
