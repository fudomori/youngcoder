/* Определить тип символа. */

#include <stdio.h>

int main() {

  char value = getchar();
  if (value >= 48 && value <= 57) {
    printf("digit");
  } else if ((value >= 65 && value <= 90) || (value >= 97 && value <= 122)) {
    printf("en");
  } else {
    printf("error");
  }

  return 0;
}

/* int main() {
    switch (getchar()) {
        case '0' ... '9': printf("digit"); break;
        case 'a' ... 'z': case 'A' ... 'Z': printf("en"); break;
        default: printf("error"); break;
    }
} */

/* int main() {
    char c = getchar();
    printf("%s\n", isalnum(c)?isdigit(c)?"digit":"en":"error");
    return 0;
} */
