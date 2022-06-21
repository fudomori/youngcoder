#include <stdio.h>

int main(void){

  int a=777; 
// никаких модификаторов нет, 
//вывод использует минимальную ширину поля
  printf("|%d|\n", a);
	
// ширина 8 позиций, выравнивание по правому краю    
  printf("|%8d|\n", a);
	
// ширина 8 позиций, выравнивание по левому краю     
  printf("|%-8d|\n", a);

// число позиций 2, но в числе 777 больше двух цифр 
// поэтому область расширяется до минимально-возможной ширины
  printf("|%2d|\n", a);

  float b=150.5;   
// никаких модификаторов нет, выведет используя минимальную ширину поля
// и стандартную точность 6 знаков
  printf("|%f|\n", b);
	
// ширина 8 позиций, 2 знака после запятой, выравнивание по правому краю    
  printf("|%8.2f|\n", b);
	
// ширина 8 позиций, выравнивание по левому краю, 3 знака после запятой
  printf("|%-8.3f|\n", b);
	
// число позиций 4,точность 3 знака после запятой, но этого мало
// поэтому ширина поля увеличивается до минимально-возможного значения
  printf("|%4.3f|\n", b);

	return 0;
}
