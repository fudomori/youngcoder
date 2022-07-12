/* Написать программу выводящую на экран все натуральные числа из промежутка [K, M]. Дополнительно на отдельной строке вывести количество напечатанных чисел. */

#include <stdio.h>

int main() {
    int min, max;
    scanf("%d %d", &min, &max);
    /* 
    int i,c;
    for (i=c= k>1? k:1;i<=n;printf("%d ",i++));
    printf("\n%d",i-c);
    */
    if (min <= 0) min = 1;
    for(int i = min; i <= max; i++) {
        printf("%d ", i);
    }
    printf("\n%d", max - min + 1 < 0 ? 0 : max - min + 1);
    return 0;
}
