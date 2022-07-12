/* Вывести через пробел все целые числа из промежутка [A,B] в обратном порядке. */

#include <stdio.h>

int main() {
    int min, max;
    scanf("%d %d", &min, &max);
    for(int i = max; i >= min; i--) {
    printf("%d ", i);
    }
    // for (; max>=min; printf("%d ", max--));
    return 0;
}
