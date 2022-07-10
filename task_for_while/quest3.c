/* Написать программу выводящую на экран первые N натуральных чисел. */

#include <stdio.h>

int main() {
    int min, max;
    scanf("%d %d", &min, &max);
    if (min <= 0) min = 1;
    for(int i = min; i <= max; i++) {
        printf("%d ", i);
    }
    printf("\n%d", max - min + 1 < 0 ? 0 : max - min + 1);
    return 0;
}
