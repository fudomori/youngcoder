/* Написать программу, моделирующую работу лифта, находящегося на первом этаже. */

#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) { d = a; a = b; b = d;}
    if (b > c) { d = b; b = c; c = d;}
    if (a > b) { d = a; a = b; b = d;}
    printf("%d %d %d", a, b, c);
}

/* 
int main() {
    int a, b, c, max, min, av;
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    min = a;

    if (b > max) max = b;
    if (c > max) max = c;
    if (b < min) min = b;
    if (c < min) min = c;
    av = a + b + c - max - min;

    printf("%d %d %d", min, av, max);
    return 0;
}
*/

/* 

*/