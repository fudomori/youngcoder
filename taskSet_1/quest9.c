/* скрипт для вычисления растояния между 2 точками */

#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("%.2lf", fabs(sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)))); // модуль из корня формулы, которая высчитывает расстояние между 2 точками

    return 0;
}
