/* Программа которая подсчитывает уровень базового обмена веществ по формуле Миффлина-Сан Жеора */

#include <stdio.h>

int main(void) {
  char sex;
  int age, height, weight;
  scanf("%c %d %d %d", &sex, &age, &height, &weight);

  switch(sex) {
    case 'f' : printf("|  BMR  |\n|%.2lf|", 10.0*weight + 6.25*height - 5.0*age - 161); break;
    case 'm' : printf("|  BMR  |\n|%.2lf|", 10.0*weight + 6.25*height - 5.0*age + 5); break;
    default  : printf("ERROR!"); break;
  }

  return 0;
}
