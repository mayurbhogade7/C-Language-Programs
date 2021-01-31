#include <stdio.h>

int main()
{
    float r, a, pi = 3.14;
    printf("Enter radius of circle ");
    scanf("%f", &r);

    a = pi * r * r;
    printf("Area of Circle %f", a);
    return 0;
}