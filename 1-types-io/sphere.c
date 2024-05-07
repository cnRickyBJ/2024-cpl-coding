//
// Created by cnRicky_BJ on 2024/5/7.
//
#include <stdio.h>

int main()
{
    const double PI = 3.1415926;
    int radius = 100;

    double surface_area = 4 * PI *  radius * radius;
    double volume = 4.0 / 3 * PI * radius * radius * radius;

    // .4 : precision
    // 15 : minimum width
    //  - : flag(left-justified)
    printf("%-15.4f : surface_area\n%-15.4f : volumn\n",
           surface_area, volume);
    return 0;
}