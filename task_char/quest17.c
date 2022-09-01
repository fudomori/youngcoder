  /* Дана строка. Определить является ли данная строка записью числа (целого или вещественного). Дробная и вещественная части разделены десятичной точкой. */

#include <stdio.h>
#define exit {printf("error");return 0;}

int main() {
  char str[100];
  int num=0, flagDot=0; // переменная для счит. символов и счетчик точек

  while (scanf("%s", str)==1) {
    while (str[num]!='\0') num++; // считывание кол-ва символов
    if (str[0]<'0' || str[0]>'9')
      if (str[0]!='+' && str[0]!='-') exit
    if (str[num-1]=='.') exit

    for (int i=1; i<num; i++) {
      if (str[i]<'0' || str[i]>'9') 
        if (str[i]!='.') exit
      if (str[i]=='.') flagDot++;
      if (flagDot>1) exit
    }
  }
  printf(flagDot ?"float":"int");

  return 0;
}
