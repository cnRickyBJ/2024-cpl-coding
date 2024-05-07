//
// Created by cnRicky_BJ on 2024/5/7.
//
#include <stdio.h>

int main(void)
{
    const double PI = 3.14159;
    int radius = 10;

    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    printf("radius = %d\ncircumference = %.2f\narea = %.2f\n", radius, circumference, area);

    return 0;
}